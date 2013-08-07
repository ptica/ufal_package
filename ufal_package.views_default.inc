<?php
/**
 * @file
 * ufal_package.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ufal_package_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rlist';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_position',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Name with degrees */
  $handler->display->display_options['fields']['field_name_with_degrees']['id'] = 'field_name_with_degrees';
  $handler->display->display_options['fields']['field_name_with_degrees']['table'] = 'field_data_field_name_with_degrees';
  $handler->display->display_options['fields']['field_name_with_degrees']['field'] = 'field_name_with_degrees';
  $handler->display->display_options['fields']['field_name_with_degrees']['label'] = '';
  $handler->display->display_options['fields']['field_name_with_degrees']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_name_with_degrees']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_name_with_degrees']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_with_degrees']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Sort order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
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
    'personal_profile' => 'personal_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'people';
  $export['people'] = $view;

  return $export;
}
