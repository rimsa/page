    <div id="footer" class="container-fluid">
      <div class="row">
        <div class="col-sm-3">&nbsp;</div>
        <div class="col-sm-3 info">
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
        <div class="col-sm-2">
          <h4><?= $settings->translation->footer['follow'] ?></h4>
            <!-- social networks -->
            <a href="https://facebook.com/andrei.rimsa" class="social-facebook" target="_blank"></a>
            <a href="https://twitter.com/andrei_rimsa" class="social-twitter" target="_blank"></a>
            <a href="https://instagram.com/andrei_rimsa" class="social-instagram" target="_blank"></a>
            <!-- photos -->
            <a href="https://flickr.com/arimsa" class="social-flickr" target="_blank"></a>
            <!-- videos -->
            <a href="https://youtube.com/@AndreiRimsaAlvares" class="social-youtube" target="_blank"></a>
            <!--  professional -->
            <a href="https://github.com/rimsa" class="social-github" target="_blank"></a>
            <a href="https://linkedin.com/in/andreirimsa" class="social-linkedin" target="_blank"></a>
            <!--  academic -->
            <a href="http://lattes.cnpq.br/0531001850708530" class="social-lattes" target="_blank"></a>
            <a href="https://researchgate.net/profile/Andrei-Rimsa" class="social-researchgate" target="_blank"></a>
        </div>
        <div class="col-sm-4">&nbsp;</div>
      </div>
    
      <div class="underfooter row">
        <div class="span12">
<?= $settings->translation->underfooter['quote'] ?>
        </div>
      </div>
    </div>
