<?php
/**
 * @file
 * mei_social_forces.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mei_social_forces_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sf_about|node|social_forces|form';
  $field_group->group_name = 'group_sf_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'social_forces';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '2',
    'children' => array(
      0 => 'field_sf_leadership',
      1 => 'field_sf_membership',
      2 => 'field_sf_website',
      3 => 'field_sf_slogan',
      4 => 'field_sf_founded',
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
  $export['group_sf_about|node|social_forces|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sf_media|node|social_forces|form';
  $field_group->group_name = 'group_sf_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'social_forces';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '3',
    'children' => array(
      0 => 'field_sf_images',
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
  $export['group_sf_media|node|social_forces|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sf_quotations|node|social_forces|form';
  $field_group->group_name = 'group_sf_quotations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'social_forces';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quotations',
    'weight' => '4',
    'children' => array(
      0 => 'field_sf_quotation',
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
  $export['group_sf_quotations|node|social_forces|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sf_sources|node|social_forces|form';
  $field_group->group_name = 'group_sf_sources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'social_forces';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sources',
    'weight' => '5',
    'children' => array(
      0 => 'field_sf_sources',
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
  $export['group_sf_sources|node|social_forces|form'] = $field_group;

  return $export;
}
