<?php

/**
 * creates the webform for students
 */
function _assignment_calculator_create_template_webform() {
  $node = new stdClass();
  $node->type = 'webform';
  node_object_prepare($node);
  $node->title = 'Assignment Calculator';
  $node->language = 'en';
  $node->body[LANGUAGE_NONE][0]['value'] = '';
  $node->body[LANGUAGE_NONE][0]['format'] = 'full_html';
  $node->uid = 1;
  $node->promote = 0;
  $node->comment = 1;
  $node->log = '';
  $node->status = 1;
  $node->sticky = 0;
  $node->vuuid = 'a166e2f7-9a36-461a-b749-2f856b33468a';
  $node->tnid = 0;
  $node->translate = 0;
  $node->uuid = 'e415080f-3b75-4c6d-bec9-02c6e8f82692';
  $node->cid = 0;

  // Create the webform components
  $components = array(
    'assignment_template_webform__assignment_title' => array(
      'form_key' => 'assignment_title',
      'name' => 'Assignment Title:',
      'type' => 'textfield',
      'value' => '',
      'pid' => 0,
      'extra' => array(
        'title_display' => 'inline',
        'description_above' => 0,
        'private' => 0,
        'wrapper_classes' => '',
        'css_classes' => '',
        'width' => '',
        'maxlength' => '',
        'field_prefix' => '',
        'field_suffix' => '',
        'disabled' => 0,
        'unique' => 0,
        'description' => '',
        'placeholder' => '',
        'attributes' => array(),
        'analysis' => FALSE,
      ),
      'required' => 0,
      'weight' => 1,
      'machine_name' => 'assignment_template_webform__assignment_title',
      'page_num' => 1,
    ),
    'assignment_template_webform__starts' => array(
      'form_key' => 'starts',
      'name' => 'Starts:',
      'type' => 'date',
      'value' => 'today',
      'pid' => 0,
      'extra' => array(
        'title_display' => 'inline',
        'description_above' => 0,
        'private' => 0,
        'wrapper_classes' => '',
        'end_date' => '+5 years',
        'timezone' => 'user',
        'exclude' => array(),
        'start_date' => '-2 years',
        'year_textfield' => 0,
        'datepicker' => 1,
        'description' => '',
        'analysis' => FALSE,
      ),
      'required' => 0,
      'weight' => 2,
      'machine_name' => 'assignment_template_webform__starts',
      'page_num' => 1,
    ),
    'assignment_template_webform__due' => array(
      'form_key' => 'due',
      'name' => 'Due:',
      'type' => 'date',
      'value' => '',
      'pid' => 0,
      'extra' => array(
        'title_display' => 'inline',
        'description_above' => 0,
        'private' => 0,
        'wrapper_classes' => '',
        'end_date' => '+5 years',
        'timezone' => 'user',
        'exclude' => array(),
        'start_date' => '-2 years',
        'year_textfield' => 0,
        'datepicker' => 1,
        'description' => '',
        'analysis' => FALSE,
      ),
      'required' => 0,
      'weight' => 3,
      'machine_name' => 'assignment_template_webform__due',
      'page_num' => 1,
    ),
    'assignment_template_webform__class' => array(
      'form_key' => 'class',
      'name' => 'Class:',
      'type' => 'textfield',
      'value' => '',
      'pid' => 0,
      'extra' => array(
        'title_display' => 'inline',
        'description_above' => 0,
        'private' => 0,
        'wrapper_classes' => '',
        'css_classes' => '',
        'width' => '',
        'maxlength' => '',
        'field_prefix' => '',
        'field_suffix' => '',
        'disabled' => 0,
        'unique' => 0,
        'description' => '',
        'placeholder' => '',
        'attributes' => array(),
        'analysis' => FALSE,
      ),
      'required' => 0,
      'weight' => 4,
      'machine_name' => 'assignment_template_webform__class',
      'page_num' => 1,
    ),
    'assignment_template_webform__assignment_template' => array(
      'form_key' => 'assignment_template',
      'name' => 'Assignment Template',
      'type' => 'select',
      'value' => '',
      'pid' => 0,
      'extra' => array(
        'items' => '5594|Lab Report',
        'options_source' => 'templates',
        'multiple' => 0,
        'title_display' => 'before',
        'description_above' => 0,
        'private' => 0,
        'wrapper_classes' => '',
        'css_classes' => '',
        'aslist' => 0,
        'empty_option' => '',
        'optrand' => 0,
        'other_option' => NULL,
        'other_text' => 'Other...',
        'description' => '',
        'custom_keys' => FALSE,
        'analysis' => TRUE,
      ),
      'required' => 0,
      'weight' => 5,
      'machine_name' => 'assignment_template_webform__assignment_template',
      'page_num' => 1,
    ),
  );

  // Attach webform to the node
  $node->webform = array(
    'next_serial' => 9,
    'confirmation' => '',
    'confirmation_format' => 'full_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 1,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 0,
    'submit_text' => 'Create Assignment',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'full_html',
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'machine_name' => 'assignment_template_webform',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => $components,
  );
  // Save the node
  node_save($node);
}