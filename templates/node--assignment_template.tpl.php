<?php

?>

<div>
  <?php
  // we don't want the comments
  hide($content['comments']);

  // we don't want the 'add step' text showing up either
  // so we loop through the content and see if anything matches 'field_add_step'
  // if it does we hide it
  foreach ($content as $key => $value) {
    if (fnmatch('field_add_step*', $key)) {
      hide($content[$key]);
    }
    // hide the date complete field if this is just the page view and not
    // the results page view...so if it has the default value of '-' hide it
    if (array_key_exists('#items', $value) && ($value['#items'][0]['value'] == '-')) {
      hide($content[$key]);
    }
  }

  print render($content);
  ?>
</div>
