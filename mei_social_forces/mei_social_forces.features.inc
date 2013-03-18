<?php
/**
 * @file
 * mei_social_forces.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mei_social_forces_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mei_social_forces_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mei_social_forces_node_info() {
  $items = array(
    'social_forces' => array(
      'name' => t('Interactives: Social Forces'),
      'base' => 'node_content',
      'description' => t('Create content for the Social Forces interactive'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
