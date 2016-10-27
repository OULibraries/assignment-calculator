<?php

/**
 * @return array
 * This groups all the fields according to their step number
 */
function _assignment_calculator_field_group_info() {

  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step3|node|assignment_template|form';
  $field_group->group_name = 'group_step3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Three',
    'weight' => '6',
    'children' => array(
      0 => 'field_percentage3',
      1 => 'field_date_complete3',
      2 => 'field_step_title3',
      3 => 'field_resources3',
      4 => 'field_add_step3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Step Three',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step-3-display-field-group',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_step3|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step10|node|assignment_template|form';
  $field_group->group_name = 'group_step10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Ten',
    'weight' => '13',
    'children' => array(
      0 => 'field_step_title10',
      1 => 'field_percentage10',
      2 => 'field_date_complete10',
      3 => 'field_resources10',
      4 => 'field_add_step10',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-10-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step10|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step11|node|assignment_template|form';
  $field_group->group_name = 'group_step11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Eleven',
    'weight' => '14',
    'children' => array(
      0 => 'field_step_title11',
      1 => 'field_percentage11',
      2 => 'field_date_complete11',
      3 => 'field_resources11',
      4 => 'field_add_step11',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-11-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step11|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step12|node|assignment_template|form';
  $field_group->group_name = 'group_step12';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Twelve',
    'weight' => '15',
    'children' => array(
      0 => 'field_step_title12',
      1 => 'field_percentage12',
      2 => 'field_date_complete12',
      3 => 'field_resources12',
      4 => 'field_add_step12',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-12-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step12|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step13|node|assignment_template|form';
  $field_group->group_name = 'group_step13';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Thirteen',
    'weight' => '16',
    'children' => array(
      0 => 'field_step_title13',
      1 => 'field_percentage13',
      2 => 'field_date_complete13',
      3 => 'field_resources13',
      4 => 'field_add_step13',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-13-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step13|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step14|node|assignment_template|form';
  $field_group->group_name = 'group_step14';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Fourteen',
    'weight' => '17',
    'children' => array(
      0 => 'field_step_title14',
      1 => 'field_percentage14',
      2 => 'field_date_complete14',
      3 => 'field_resources14',
      4 => 'field_add_step14',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-14-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step14|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step15|node|assignment_template|form';
  $field_group->group_name = 'group_step15';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Fifteen',
    'weight' => '19',
    'children' => array(
      0 => 'field_step_title15',
      1 => 'field_percentage15',
      2 => 'field_date_complete15',
      3 => 'field_resources15',
      4 => 'field_add_step15',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-15-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step15|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step1|node|assignment_template|form';
  $field_group->group_name = 'group_step1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step One',
    'weight' => '4',
    'children' => array(
      0 => 'field_add_step1',
      1 => 'field_date_complete1',
      2 => 'field_step_title1',
      3 => 'field_percentage1',
      4 => 'field_resources1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-1-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step1|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step2|node|assignment_template|form';
  $field_group->group_name = 'group_step2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Two',
    'weight' => '5',
    'children' => array(
      0 => 'field_step_title2',
      1 => 'field_percentage2',
      2 => 'field_date_complete2',
      3 => 'field_resources2',
      4 => 'field_add_step2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Step Two',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step-2-display-field-group',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_step2|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step4|node|assignment_template|form';
  $field_group->group_name = 'group_step4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Four',
    'weight' => '7',
    'children' => array(
      0 => 'field_step_title4',
      1 => 'field_percentage4',
      2 => 'field_date_complete4',
      3 => 'field_resources4',
      4 => 'field_add_step4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-4-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step4|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step5|node|assignment_template|form';
  $field_group->group_name = 'group_step5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Five',
    'weight' => '8',
    'children' => array(
      0 => 'field_step_title5',
      1 => 'field_percentage5',
      2 => 'field_date_complete5',
      3 => 'field_resources5',
      4 => 'field_add_step5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-5-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step5|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step6|node|assignment_template|form';
  $field_group->group_name = 'group_step6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Six',
    'weight' => '9',
    'children' => array(
      0 => 'field_step_title6',
      1 => 'field_percentage6',
      2 => 'field_date_complete6',
      3 => 'field_resources6',
      4 => 'field_add_step6',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-6-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step6|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step7|node|assignment_template|form';
  $field_group->group_name = 'group_step7';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Seven',
    'weight' => '10',
    'children' => array(
      0 => 'field_step_title7',
      1 => 'field_percentage7',
      2 => 'field_date_complete7',
      3 => 'field_resources7',
      4 => 'field_add_step7',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-7-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step7|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step8|node|assignment_template|form';
  $field_group->group_name = 'group_step8';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Eight',
    'weight' => '11',
    'children' => array(
      0 => 'field_step_title8',
      1 => 'field_percentage8',
      2 => 'field_date_complete8',
      3 => 'field_resources8',
      4 => 'field_add_step8',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-8-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step8|node|assignment_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step9|node|assignment_template|form';
  $field_group->group_name = 'group_step9';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assignment_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step Nine',
    'weight' => '12',
    'children' => array(
      0 => 'field_step_title9',
      1 => 'field_percentage9',
      2 => 'field_date_complete9',
      3 => 'field_resources9',
      4 => 'field_add_step9',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'step-9-display-field-group',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_step9|node|assignment_template|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Step Eight');
  t('Step Eleven');
  t('Step Fifteen');
  t('Step Five');
  t('Step Four');
  t('Step Fourteen');
  t('Step Nine');
  t('Step One');
  t('Step Seven');
  t('Step Six');
  t('Step Ten');
  t('Step Thirteen');
  t('Step Three');
  t('Step Twelve');
  t('Step Two');

  return $field_groups;
}