<?php

/**
 * @file
 * Main view template.
 */
?>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>
  <div class="spectrum-helper">Click on a logo to learn more</div>
  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>
  <div class="spectrum-background">
    <div class="left-label">Secular Liberal</div>
    <div class="right-label">Conservative Islamist</div>
    <div class="axis"></div>
  </div>
  <div id="coalitions">
    Click to limit by coalition: <span id="coalition-all" class="active">All Parties</span>
    <?php foreach ($coalitions as $coalition): ?>
      <span id="<?php print $coalition['tid']; ?>-tid" class="filter"><?php print $coalition['name']; ?></span>
    <?php endforeach; ?>
  </div>
  

  <div class="spectrum-full">
    <?php foreach ($spectrum as $nid=>$full): ?>
      <div class="spectrum-item" id="<?php print $nid; ?>-nid">
        <div class="spectrum-main">      
          <div class="blockout">          
            <div class='logo'>
              <img src="<?php print $full['logo']; ?>" />
            </div>          
            <div class='founded'>
              <?php if (isset($full['founded'])): ?>
                <span class='label'>Founded: </span><?php print $full['founded']; ?>
              <?php endif; ?>            
            </div>
          </div>
          <div class='title'>
            <h2><?php print $full['title']; ?></h2>
          </div>

          <div class='description'>
            <?php if (isset($full['description'])): ?>
              <?php print $full['description']; ?>
            <?php endif; ?>
          </div>

          <?php if (isset($full['quotes'])): ?>
            <h2>Quotable</h2> 
            <div class='quotes'>
              <?php foreach ($full['quotes'] as $quote): ?>
                <h3><?php print $quote['author']; ?></h3>
                <div class='quotation'><?php print $quote['quotation']; ?></div>
                <div class='description'><?php print $quote['description']; ?></div>
              <?php endforeach; ?>
            </div>
          <?php endif; ?> 

          <?php if (isset($full['sources'])): ?>
            <div class='sources'>
              <h3>Sources</h3>
              <ul>
                <?php foreach ($full['sources'] as $source): ?>
                  <li><a href="<?php print $source; ?>"><?php print $source; ?></a></li>
                <?php endforeach; ?>
              </ul>
            </div>
          <?php endif; ?>
        </div>
        <div class="spectrum-right">
          <?php if (isset($full['issues'])): ?>
            <h2>Platform</h2> 
            <div class='issues accordion'>
              <?php foreach ($full['issues'] as $term => $stances): ?>
                <h3><?php print $term; ?></h3>
                <div>
                  <ul class='stances'>
                    <?php foreach ($stances as $stance): ?>
                      <li><?php print $stance ?></li>

                    <?php endforeach; ?>
                  </ul>
                </div>
              <?php endforeach; ?>
            </div>
          <?php endif; ?>

         <?php if (isset($full['coalition'])): ?>
            <h2>Coalition Participation</h2> 
            <div class='figures accordion'>
                <h3>Commentary</h3>
                <div class='description'><?php print $full['coalition']['description']; ?></div>
            </div>
          <?php endif; ?> 

          <?php if (isset($full['figures'])): ?>
            <h2>Key Figures</h2> 
            <div class='figures accordion'>
              <?php foreach ($full['figures'] as $person): ?>
                <h3><?php print $person['name']; ?></h3>
                <div class='description'><?php print $person['description']; ?></div>
              <?php endforeach; ?>
            </div>
          <?php endif; ?> 

 
        </div>
      </div>
    <?php endforeach; ?>
  </div>


  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
