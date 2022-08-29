function configTwitter(intentEvent) {
	// The footer may have been resized by the config.
	// Update the footer to reflect this change.
	updateFooter(true);
}

function calcHeaderSize() {
	// Default padding is 60px.
	padding = 60;

	// Add padding if the menu is visible.
	if ($('div.navbar-offcanvas').is(':visible'))
		padding += 50;

	// Add padding if the slideshow is visible.
	if ($('#slideshow').is(':visible'))
		padding += 150;

	// Add padding if the breadcrumbs is visible.
	if ($('#breadcrumbs').is(':visible'))
		padding += 30;

	return padding;
}

function updateBodyPadding() {
	padding = calcHeaderSize();

	// Set the new calculated padding value.
	$('body > .container').css('padding-top', padding + 'px');

	// Apply to the anchors.
	$('.anchor-offset').css('padding-top', padding + 'px');
	$('.anchor-offset').css('margin-top', '-' + padding + 'px');

	// Update the side menu.
	updateSideMenu();
}

function updateFooter(sticky) {
	if (sticky) {
		$('#footer').addClass('sticky');
		$('body').css('margin-bottom', $('#footer').outerHeight(true) + 'px');
	} else {
		$('#footer').removeClass('sticky');
		$('body').css('margin-bottom', '0px');
	}

	// Update the side menu.
	updateSideMenu();
}

function updateSideMenu() {
	if ($('#smnav').length > 0) {
		$(window).off('.affix');
		$('#smnav').removeData('bs.affix').removeClass('affix affix-top affix-bottom');
	    $('#smnav').affix({
	        offset: {
	            top: $('#smnav').offset().top - calcHeaderSize(),
	            bottom: $('#footer').outerHeight(true)
	        }
	    });
	}
}

function replaceQueryParam(param, newval, search) {
    var regex = new RegExp("([?;&])" + param + "[^&;]*[;&]?");
    var query = search.replace(regex, "$1").replace(/&$/, '');

    return (query.length > 2 ? query + "&" : "?") + (newval ? param + "=" + newval : '');
}

function clearScoreForm() {
	var div = $("#grading div.input-group");
	if (div.hasClass('has-feedback')) {
		div.removeClass('has-feedback has-success has-error');
		div.find('.glyphicon').removeClass('glyphicon-ok glyphicon-remove');

		$("#grading .grading-container .gradevalue").each(function (index) {
			var s = $(this).find('span');
			s.removeClass('below above');
			s.text('-');
			$(this).hide();
		});

		$("#grading .grading-container .student span").text('');
		$("#grading .grading-container .student").hide();
	}
}

function getRandomInt(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

function showSlideShowImage(img) {
	// Find the previous displayed photo.
	prev = $('#slideshow > img:visible');

	// Perform fading animation if there was a previous image.
	if (prev.length > 0) {
		prev.fadeOut(1000);
		$(img).fadeIn(1000);
	// Otherwise, just show it.
	} else {
		$(img).show();
	}

	// Show the caption.
	$('#slideshow .ss-caption').html($(img).attr('alt'));
}

function SlideShow() {
	// The list of images to be displayed.
	this.images = $('#slideshow > img');

	// The list of images already displayed.
	this.queue = new Array();

	this.next = function() {
		// Do not animate.
		if ((this.images.length + this.queue.length) < 2)
			return;

		// If we roll thru all the photos, start over.
		if (this.images.length == 0)
			this.images = this.queue.splice(0, this.queue.length);

		// Sort a random photo differently from the previous one.
		prev = $('#slideshow > img:visible');
		do {
			r = getRandomInt(0, this.images.length-1);
		} while (this.images[r] == prev[0]);

		// Remove the image from the images list and placed it in the queue.
		img = this.images.splice(r, 1)[0];
		this.queue.push(img);

		// Show the image.
		showSlideShowImage(img);
	}

	this.start = function() {
		if ($('#slideshow').length > 0) {
			total = this.images.length + this.queue.length;
			switch (total) {
				// No images to show.
				case 0:
					break;
				// Show a single image.
				case 1:
					showSlideShowImage(this.images[0]);
					break;
				// Create the animation.
				default:
					var t = this;
					t.next(); // Show the first photo.
					setInterval(function() { t.next() },  5000);
					break;
			}
		}
	}
}

if ($('#termsel').length > 0) {
	$('#termsel').change(function () {
	    window.location = replaceQueryParam('term', encodeURIComponent($(this).find("option:selected").val()), window.location.search);
	});
}

if ($('#score-form').length > 0) {
	var sform = $('#score-form');
	sform.find('#registry-id').on('input', clearScoreForm);
	sform.submit(function(event) {
		$.ajax(
			{url: sform.attr('action'),
			 type: sform.attr('method'),
			 data: sform.serialize(),
			}).done(function(data) {
				clearScoreForm();

				var div = $("#grading div.input-group");
				div.addClass('has-feedback has-success');
				div.find('.glyphicon').removeClass('glyphicon-ok');

				$("#grading .grading-container .gradevalue").each(function (index) {
					$(this).find('span').removeClass('below above');
					$(this).find('span').text('-');
					$(this).show();
				});

				var xmln = $('grading', data);

				var name = xmln.find('name').text();
				var link = xmln.find('link').text();

				if (link)
					$("#grading .grading-container .student span").html(
						"<a href=\"" + link + "\" target=\"_blank\">" + name + "</a>");
				else
					$("#grading .grading-container .student span").text(name);
				$("#grading .grading-container .student").show();

				xmln.find('mode grade').each(function (index) {
					var id = $(this).attr('id');
					var avg = $(this).attr('avg');
					var value = $(this).text();

					var el = $('#' + id);
					if (el.length > 0) {
						el.find('span').text(value);
						el.find('span').addClass(avg);
					}
				});
			}).fail(function() {
				clearScoreForm();

				var div = $("#grading div.input-group");
				div.addClass('has-feedback has-error');
				div.find('.glyphicon').removeClass('glyphicon-remove');
			});
		event.preventDefault();
	});
}

$(document).on('show.bs.offcanvas', function () {
	updateFooter(false);
});

$(document).on('hidden.bs.offcanvas', function () {
	updateFooter(true);
});

twttr.ready(function(twttr) {
	twttr.events.bind('rendered', configTwitter);
});

$(window).ready(function() {
	updateBodyPadding();
	new SlideShow().start();
});

$(window).load(function() {
	updateFooter(true);
});

$(window).resize(function() {
	setTimeout(function() {
		updateBodyPadding();
		updateFooter(true);
	},  250);
});
