<?php
/**
 * @file
 * mei_spectrum.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mei_spectrum_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pp_coalitions|node|political_party|form';
  $field_group->group_name = 'group_pp_coalitions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'political_party';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coalitions',
    'weight' => '7',
    'children' => array(
      0 => 'field_pp_coalitions',
      1 => 'field_pp_commentary',
      2 => 'field_pp_coalition_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pp_coalitions|node|political_party|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pp_figures|node|political_party|form';
  $field_group->group_name = 'group_pp_figures';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'political_party';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Major Figures',
    'weight' => '5',
    'children' => array(
      0 => 'field_pp_figure',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pp_figures|node|political_party|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pp_platform|node|political_party|form';
  $field_group->group_name = 'group_pp_platform';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'political_party';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Platform',
    'weight' => '6',
    'children' => array(
      0 => 'field_pp_issue',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pp_platform|node|political_party|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pp_quotes|node|political_party|form';
  $field_group->group_name = 'group_pp_quotes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'political_party';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quotes',
    'weight' => '8',
    'children' => array(
      0 => 'field_pp_quote',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pp_quotes|node|political_party|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pp_sources|node|political_party|form';
  $field_group->group_name = 'group_pp_sources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'political_party';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sources',
    'weight' => '9',
    'children' => array(
      0 => 'field_pp_source',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pp_sources|node|political_party|form'] = $field_group;

  return $export;
}
