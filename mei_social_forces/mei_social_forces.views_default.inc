<?php
/**
 * @file
 * mei_social_forces.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mei_social_forces_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'social_forces';
  $view->description = '';
  $view->tag = 'Interactives';
  $view->base_table = 'node';
  $view->human_name = 'Social Forces';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Social Forces';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'container';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Main Display */
  $handler->display->display_options['fields']['field_sf_images_1']['id'] = 'field_sf_images_1';
  $handler->display->display_options['fields']['field_sf_images_1']['table'] = 'field_data_field_sf_images';
  $handler->display->display_options['fields']['field_sf_images_1']['field'] = 'field_sf_images';
  $handler->display->display_options['fields']['field_sf_images_1']['ui_name'] = 'Main Display';
  $handler->display->display_options['fields']['field_sf_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_sf_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sf_images_1']['settings'] = array(
    'image_style' => 'sf_main',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_sf_images_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_sf_images']['id'] = 'field_sf_images';
  $handler->display->display_options['fields']['field_sf_images']['table'] = 'field_data_field_sf_images';
  $handler->display->display_options['fields']['field_sf_images']['field'] = 'field_sf_images';
  $handler->display->display_options['fields']['field_sf_images']['label'] = '';
  $handler->display->display_options['fields']['field_sf_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sf_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sf_images']['settings'] = array(
    'image_style' => 'sf_internal',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_sf_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_sf_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sf_images']['multi_type'] = 'ul';
  /* Field: Content: Founded */
  $handler->display->display_options['fields']['field_sf_founded']['id'] = 'field_sf_founded';
  $handler->display->display_options['fields']['field_sf_founded']['table'] = 'field_data_field_sf_founded';
  $handler->display->display_options['fields']['field_sf_founded']['field'] = 'field_sf_founded';
  $handler->display->display_options['fields']['field_sf_founded']['label'] = '';
  $handler->display->display_options['fields']['field_sf_founded']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sf_founded']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sf_founded']['alter']['text'] = '<li><span class="label">Founded:</span> [field_sf_founded] </li>';
  $handler->display->display_options['fields']['field_sf_founded']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_founded']['hide_empty'] = TRUE;
  /* Field: Content: Leadership */
  $handler->display->display_options['fields']['field_sf_leadership']['id'] = 'field_sf_leadership';
  $handler->display->display_options['fields']['field_sf_leadership']['table'] = 'field_data_field_sf_leadership';
  $handler->display->display_options['fields']['field_sf_leadership']['field'] = 'field_sf_leadership';
  $handler->display->display_options['fields']['field_sf_leadership']['label'] = '';
  $handler->display->display_options['fields']['field_sf_leadership']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sf_leadership']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sf_leadership']['alter']['text'] = '<li><span class="label">Leadership:</span> [field_sf_leadership] </li>';
  $handler->display->display_options['fields']['field_sf_leadership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_leadership']['hide_empty'] = TRUE;
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_sf_membership']['id'] = 'field_sf_membership';
  $handler->display->display_options['fields']['field_sf_membership']['table'] = 'field_data_field_sf_membership';
  $handler->display->display_options['fields']['field_sf_membership']['field'] = 'field_sf_membership';
  $handler->display->display_options['fields']['field_sf_membership']['label'] = '';
  $handler->display->display_options['fields']['field_sf_membership']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sf_membership']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sf_membership']['alter']['text'] = '<li><span class="label">Membership:</span> [field_sf_membership] </li>';
  $handler->display->display_options['fields']['field_sf_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_membership']['hide_empty'] = TRUE;
  /* Field: Content: Slogan */
  $handler->display->display_options['fields']['field_sf_slogan']['id'] = 'field_sf_slogan';
  $handler->display->display_options['fields']['field_sf_slogan']['table'] = 'field_data_field_sf_slogan';
  $handler->display->display_options['fields']['field_sf_slogan']['field'] = 'field_sf_slogan';
  $handler->display->display_options['fields']['field_sf_slogan']['label'] = '';
  $handler->display->display_options['fields']['field_sf_slogan']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sf_slogan']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sf_slogan']['alter']['text'] = '<li><span class="label">Slogan:</span> [field_sf_slogan] </li>';
  $handler->display->display_options['fields']['field_sf_slogan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_slogan']['hide_empty'] = TRUE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_sf_website']['id'] = 'field_sf_website';
  $handler->display->display_options['fields']['field_sf_website']['table'] = 'field_data_field_sf_website';
  $handler->display->display_options['fields']['field_sf_website']['field'] = 'field_sf_website';
  $handler->display->display_options['fields']['field_sf_website']['label'] = '';
  $handler->display->display_options['fields']['field_sf_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sf_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sf_website']['alter']['text'] = '<li><span class="label">Website:</span> [field_sf_website] </li>';
  $handler->display->display_options['fields']['field_sf_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sf_website']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Sources */
  $handler->display->display_options['fields']['field_sf_sources']['id'] = 'field_sf_sources';
  $handler->display->display_options['fields']['field_sf_sources']['table'] = 'field_data_field_sf_sources';
  $handler->display->display_options['fields']['field_sf_sources']['field'] = 'field_sf_sources';
  $handler->display->display_options['fields']['field_sf_sources']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sf_sources']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sf_sources']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<label class="size-fix">[title_1]</label>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Lightbox: Lightbox trigger */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = '';
  $handler->display->display_options['fields']['lightbox2']['element_type'] = 'h2';
  $handler->display->display_options['fields']['lightbox2']['element_class'] = 'target';
  $handler->display->display_options['fields']['lightbox2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['lightbox2']['trigger_field'] = 'title_1';
  $handler->display->display_options['fields']['lightbox2']['popup'] = '<div class="gallery">
  [field_sf_images]
</div>
<div class="right">
<h2>[title]</h2>
<ul>
  [field_sf_founded]
  [field_sf_leadership]
  [field_sf_membership]
  [field_sf_slogan]
  [field_sf_website]
</ul>
</div>
<div class="lower">
  <div class="description">
    [body]
  </div>
  <div class="sources">
    [field_sf_sources]
  </div>
</div>
';
  $handler->display->display_options['fields']['lightbox2']['rel_group'] = 0;
  $handler->display->display_options['fields']['lightbox2']['custom_group'] = 'social-forces';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'social_forces' => 'social_forces',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'social-forces';
  $export['social_forces'] = $view;

  $view = new view();
  $view->name = 'social_forces2';
  $view->description = '';
  $view->tag = 'Interactives';
  $view->base_table = 'node';
  $view->human_name = 'Social Forces2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Social Forces';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'container';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: main-image */
  $handler->display->display_options['fields']['field_sf_images_1']['id'] = 'field_sf_images_1';
  $handler->display->display_options['fields']['field_sf_images_1']['table'] = 'field_data_field_sf_images';
  $handler->display->display_options['fields']['field_sf_images_1']['field'] = 'field_sf_images';
  $handler->display->display_options['fields']['field_sf_images_1']['ui_name'] = 'main-image';
  $handler->display->display_options['fields']['field_sf_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_sf_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sf_images_1']['settings'] = array(
    'image_style' => 'sf_internal',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_sf_images_1']['delta_offset'] = '0';
  /* Field: main-title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'main-title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'target';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: left start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'left start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'internal left\'>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_sf_images']['id'] = 'field_sf_images';
  $handler->display->display_options['fields']['field_sf_images']['table'] = 'field_data_field_sf_images';
  $handler->display->display_options['fields']['field_sf_images']['field'] = 'field_sf_images';
  $handler->display->display_options['fields']['field_sf_images']['label'] = '';
  $handler->display->display_options['fields']['field_sf_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_images']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sf_images']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_sf_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sf_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sf_images']['settings'] = array(
    'image_style' => 'sf_main',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_sf_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_sf_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sf_images']['multi_type'] = 'ul';
  /* Field: Content: Founded */
  $handler->display->display_options['fields']['field_sf_founded']['id'] = 'field_sf_founded';
  $handler->display->display_options['fields']['field_sf_founded']['table'] = 'field_data_field_sf_founded';
  $handler->display->display_options['fields']['field_sf_founded']['field'] = 'field_sf_founded';
  $handler->display->display_options['fields']['field_sf_founded']['label'] = 'founded';
  $handler->display->display_options['fields']['field_sf_founded']['alter']['text'] = '<li><span class="label">Founded:</span> [field_sf_founded] </li>';
  $handler->display->display_options['fields']['field_sf_founded']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_sf_founded']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sf_founded']['element_wrapper_class'] = 'founded';
  $handler->display->display_options['fields']['field_sf_founded']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sf_founded']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sf_founded']['type'] = 'text_plain';
  /* Field: Content: Leadership */
  $handler->display->display_options['fields']['field_sf_leadership']['id'] = 'field_sf_leadership';
  $handler->display->display_options['fields']['field_sf_leadership']['table'] = 'field_data_field_sf_leadership';
  $handler->display->display_options['fields']['field_sf_leadership']['field'] = 'field_sf_leadership';
  $handler->display->display_options['fields']['field_sf_leadership']['label'] = 'leadership';
  $handler->display->display_options['fields']['field_sf_leadership']['alter']['text'] = '<li><span class="label">Leadership:</span> [field_sf_leadership] </li>';
  $handler->display->display_options['fields']['field_sf_leadership']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_sf_leadership']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sf_leadership']['element_wrapper_class'] = 'leadership';
  $handler->display->display_options['fields']['field_sf_leadership']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sf_leadership']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sf_leadership']['type'] = 'text_plain';
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_sf_membership']['id'] = 'field_sf_membership';
  $handler->display->display_options['fields']['field_sf_membership']['table'] = 'field_data_field_sf_membership';
  $handler->display->display_options['fields']['field_sf_membership']['field'] = 'field_sf_membership';
  $handler->display->display_options['fields']['field_sf_membership']['label'] = 'membership';
  $handler->display->display_options['fields']['field_sf_membership']['alter']['text'] = '<li><span class="label">Membership:</span> [field_sf_membership] </li>';
  $handler->display->display_options['fields']['field_sf_membership']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_sf_membership']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sf_membership']['element_wrapper_class'] = 'membership';
  $handler->display->display_options['fields']['field_sf_membership']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sf_membership']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sf_membership']['type'] = 'text_plain';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_sf_website']['id'] = 'field_sf_website';
  $handler->display->display_options['fields']['field_sf_website']['table'] = 'field_data_field_sf_website';
  $handler->display->display_options['fields']['field_sf_website']['field'] = 'field_sf_website';
  $handler->display->display_options['fields']['field_sf_website']['label'] = 'website';
  $handler->display->display_options['fields']['field_sf_website']['alter']['text'] = '<li><span class="label">Website:</span> [field_sf_website] </li>';
  $handler->display->display_options['fields']['field_sf_website']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_sf_website']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sf_website']['element_wrapper_class'] = 'website';
  $handler->display->display_options['fields']['field_sf_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sf_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sf_website']['click_sort_column'] = 'url';
  /* Field: split */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'split';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div><div class=\'internal right\'>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<label class="size-fix">[title_1]</label>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'sf-title';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Slogan */
  $handler->display->display_options['fields']['field_sf_slogan']['id'] = 'field_sf_slogan';
  $handler->display->display_options['fields']['field_sf_slogan']['table'] = 'field_data_field_sf_slogan';
  $handler->display->display_options['fields']['field_sf_slogan']['field'] = 'field_sf_slogan';
  $handler->display->display_options['fields']['field_sf_slogan']['label'] = '';
  $handler->display->display_options['fields']['field_sf_slogan']['alter']['text'] = '<li><span class="label">Slogan:</span> [field_sf_slogan] </li>';
  $handler->display->display_options['fields']['field_sf_slogan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_slogan']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sf_slogan']['element_wrapper_class'] = 'slogan';
  $handler->display->display_options['fields']['field_sf_slogan']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Sources */
  $handler->display->display_options['fields']['field_sf_sources']['id'] = 'field_sf_sources';
  $handler->display->display_options['fields']['field_sf_sources']['table'] = 'field_data_field_sf_sources';
  $handler->display->display_options['fields']['field_sf_sources']['field'] = 'field_sf_sources';
  $handler->display->display_options['fields']['field_sf_sources']['label'] = '';
  $handler->display->display_options['fields']['field_sf_sources']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sf_sources']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sf_sources']['element_wrapper_class'] = 'sources';
  $handler->display->display_options['fields']['field_sf_sources']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sf_sources']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sf_sources']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sf_sources']['multi_type'] = 'ul';
  /* Field: right end */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'right end';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'social_forces' => 'social_forces',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'social-forces2';
  $export['social_forces2'] = $view;

  return $export;
}
