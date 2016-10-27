<?php


/**
 * @return array
 * sets the nid to the title of the student_picker view
 */
function assignment_calculator_options() {

  $view = views_get_view('student_picker', true);
  $view->execute();
  $items = array();

  foreach ($view->result as $item) {
    $full_node = node_load($item->nid);
    $items[$item->nid] = $full_node->title;
  }

  return $items;
}


/**
 * @param $form
 * @param $form_state
 * takes the data in the webform and passes it to the url
 */
function set_params_function(&$form, &$form_state) {
  if ($form['#node']->title == 'Assignment Calculator') {
    $templateID = $form_state['input']['submitted']['assignment_template'];
    // setting due date as one string
    $due_date = $form_state['input']['submitted']['due']['year'] . '-' .
      $form_state['input']['submitted']['due']['month'] . '-' .
      $form_state['input']['submitted']['due']['day'];

    // setting start date as one string
    $start_date = $form_state['input']['submitted']['starts']['year'] . '-' .
      $form_state['input']['submitted']['starts']['month'] . '-' .
      $form_state['input']['submitted']['starts']['day'];

    // redirecting to content page with date parameters
    $form_state['redirect'] = 'http://' . $_SERVER['HTTP_HOST'] . '/node/' . $templateID .
      '?start=' . $start_date . '&due=' . $due_date;
  }
}


/**
 * @param $node
 * @param $i
 * @param $percentage
 * @return false|int|string
 * This calculates the due date for each step
 */
function get_due_date($node, $i, $percentage) {
  $temp_due = isset($_REQUEST['due']) ? $_REQUEST['due'] : '-';
  $temp_start = isset($_REQUEST['start']) ? $_REQUEST['start'] : '-';
  $percentage = $percentage/100;

  $temp_due = strtotime($temp_due);
  $temp_start = strtotime($temp_start);

  $projected_due = $temp_start + ($percentage * ($temp_due - $temp_start));

  $due_date = $projected_due > $temp_due ? $temp_due :
    date('m-d-Y', $temp_start + ($percentage * ($temp_due - $temp_start)) );


  // @todo if this is the last step set the complete date to the due date entered
  $next = $i + 1;

  return $due_date;
}