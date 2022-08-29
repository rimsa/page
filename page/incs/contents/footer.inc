    <div id="footer" class="container-fluid">
      <div class="row">
        <div class="col-sm-4 info">
          <h4><?= $settings->translation->footer['info'] ?></h4>
          <p>
            <i class="icon-map-marker"></i>&nbsp;
            <a href="<?= $settings->addrUrl ?>"><?= $settings->address1 ?>
            <br/>&nbsp;&nbsp;&nbsp;&nbsp;<?= $settings->address2 ?></a>
          </p>
          <p>
            <i class="icon-phone"></i>&nbsp;<a href="tel:<?= ($settings->ddd . $settings->phone) ?>">(<?= $settings->ddd ?>) <?= $settings->phone ?></a>
          </p>
          <p>
            <i class="icon-envelope"></i>&nbsp;<a href="https://mailhide.io/e/JiVEY" onclick="mailhidepopup=window.open('https://mailhide.io/e/JiVEY','mailhidepopup','width=580,height=635'); return false;"><?= $settings->email ?></a>
          </p>
          <p>
            <i class="icon-globe"></i>&nbsp;<a href="http://<?= $settings->pageUrl ?>"><?= $settings->pageUrl ?></a>
          </p>
        </div>
        <div class="col-sm-6">
          <h4><?= $settings->translation->footer['tweets'] ?></h4>
          <a class="twitter-timeline" href="https://twitter.com/andrei_cefetmg" data-widget-id="588875640897728513" data-tweet-limit="3" data-chrome="noheader nofooter noborders transparent" data-height="250" data-theme="dark" data-dnt="true">Tweets by @andrei_cefetmg</a>
        </div>
        <div class="col-sm-2">
          <h4><?= $settings->translation->footer['follow'] ?></h4>
            <!-- social networks -->
            <a href="https://facebook.com/andrei.rimsa" class="social-facebook" target="_blank"></a>
            <a href="https://plus.google.com/+AndreiRimsaAlvares" class="social-googleplus" target="_blank"></a>
            <a href="https://twitter.com/andrei_cefetmg" class="social-twitter" target="_blank"></a>
            <a href="https://instagram.com/andrei_rimsa" class="social-instagram" target="_blank"></a>
            <a href="https://br.pinterest.com/andreirimsa" class="social-pinterest" target="_blank"></a>
            <a href="https://account.xbox.com/pt-BR/Profile?GamerTag=arimsa" class="social-xbox" target="_blank"></a>
            <a href="https://www.goodreads.com/user/show/52663435" class="social-goodreads" target="_blank"></a>
            <!-- photos -->
            <a href="https://picasaweb.google.com/logytech" class="social-picasa" target="_blank"></a>
            <a href="https://www.flickr.com/arimsa" class="social-flickr" target="_blank"></a>
            <!-- videos -->
            <a href="https://youtube.com/user/logytech" class="social-youtube" target="_blank"></a>
            <a href="https://vimeo.com/arimsa" class="social-vimeo" target="_blank"></a>
            <!--  professional -->
            <a href="https://www.linkedin.com/in/andreirimsa" class="social-linkedin" target="_blank"></a>
            <a href="https://github.com/rimsa" class="social-github" target="_blank"></a>
            <!--  academic -->
            <a href="http://lattes.cnpq.br/0531001850708530" class="social-lattes" target="_blank"></a>
            <a href="http://dblp.uni-trier.de/pers/hd/r/Rimsa:Andrei" class="social-dblp" target="_blank"></a>
            <a href="https://www.mendeley.com/profiles/andrei-alvares" class="social-mendeley" target="_blank"></a>
            <!-- travels  -->
            <a href="http://www.wikiloc.com/wikiloc/user.do?id=1424591" class="social-wikiloc" target="_blank"></a>
            <a href="https://www.strava.com/athletes/arimsa" class="social-strava" target="_blank"></a>
        </div>
      </div>
    
      <div class="underfooter row">
        <div class="span12">
<?= $settings->translation->underfooter['quote'] ?>
        </div>
      </div>
    </div>
