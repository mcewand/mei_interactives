<?php
/**
 * @file
 * mei_spectrum.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mei_spectrum_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'political_parties';
  $view->description = '';
  $view->tag = 'Interactives';
  $view->base_table = 'node';
  $view->human_name = 'Political Parties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Political Spectrum';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'point [field_pp_weight]-w [nid]-nid [field_pp_coalitions]-tid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'political_parties:block_1';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_pp_logo']['id'] = 'field_pp_logo';
  $handler->display->display_options['fields']['field_pp_logo']['table'] = 'field_data_field_pp_logo';
  $handler->display->display_options['fields']['field_pp_logo']['field'] = 'field_pp_logo';
  $handler->display->display_options['fields']['field_pp_logo']['label'] = '';
  $handler->display->display_options['fields']['field_pp_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pp_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pp_logo']['settings'] = array(
    'image_style' => 'pp_spectrum',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Spectrum Position */
  $handler->display->display_options['fields']['field_pp_weight']['id'] = 'field_pp_weight';
  $handler->display->display_options['fields']['field_pp_weight']['table'] = 'field_data_field_pp_weight';
  $handler->display->display_options['fields']['field_pp_weight']['field'] = 'field_pp_weight';
  $handler->display->display_options['fields']['field_pp_weight']['label'] = '';
  $handler->display->display_options['fields']['field_pp_weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pp_weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pp_weight']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_pp_weight']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Coalitions */
  $handler->display->display_options['fields']['field_pp_coalitions']['id'] = 'field_pp_coalitions';
  $handler->display->display_options['fields']['field_pp_coalitions']['table'] = 'field_data_field_pp_coalitions';
  $handler->display->display_options['fields']['field_pp_coalitions']['field'] = 'field_pp_coalitions';
  $handler->display->display_options['fields']['field_pp_coalitions']['label'] = '';
  $handler->display->display_options['fields']['field_pp_coalitions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pp_coalitions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pp_coalitions']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_pp_coalitions']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_pp_coalitions']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pp_coalitions']['separator'] = ' ';
  /* Sort criterion: Content: Spectrum Position (field_pp_weight) */
  $handler->display->display_options['sorts']['field_pp_weight_value']['id'] = 'field_pp_weight_value';
  $handler->display->display_options['sorts']['field_pp_weight_value']['table'] = 'field_data_field_pp_weight';
  $handler->display->display_options['sorts']['field_pp_weight_value']['field'] = 'field_pp_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'political_party' => 'political_party',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'political-parties';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'full');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'full';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_pp_logo']['id'] = 'field_pp_logo';
  $handler->display->display_options['fields']['field_pp_logo']['table'] = 'field_data_field_pp_logo';
  $handler->display->display_options['fields']['field_pp_logo']['field'] = 'field_pp_logo';
  $handler->display->display_options['fields']['field_pp_logo']['label'] = '';
  $handler->display->display_options['fields']['field_pp_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pp_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pp_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Issue */
  $handler->display->display_options['fields']['field_pp_issue']['id'] = 'field_pp_issue';
  $handler->display->display_options['fields']['field_pp_issue']['table'] = 'field_data_field_pp_issue';
  $handler->display->display_options['fields']['field_pp_issue']['field'] = 'field_pp_issue';
  $handler->display->display_options['fields']['field_pp_issue']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_pp_issue']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_pp_issue']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $export['political_parties'] = $view;

  return $export;
}
