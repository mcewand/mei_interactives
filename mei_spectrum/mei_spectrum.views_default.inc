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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $export['political_parties'] = $view;

  return $export;
}
