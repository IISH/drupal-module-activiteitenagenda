<?php
/**
 * @file
 * iishagenda_room.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iishagenda_room_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rooms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rooms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Zaaloverzicht';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'room',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_room_type']['id'] = 'field_room_type';
  $handler->display->display_options['fields']['field_room_type']['table'] = 'field_data_field_room_type';
  $handler->display->display_options['fields']['field_room_type']['field'] = 'field_room_type';
  $handler->display->display_options['fields']['field_room_type']['hide_empty'] = TRUE;
  /* Field: Content: Telefoon */
  $handler->display->display_options['fields']['field_room_phone']['id'] = 'field_room_phone';
  $handler->display->display_options['fields']['field_room_phone']['table'] = 'field_data_field_room_phone';
  $handler->display->display_options['fields']['field_room_phone']['field'] = 'field_room_phone';
  $handler->display->display_options['fields']['field_room_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_room_phone']['type'] = 'text_plain';
  /* Field: Content: Maximale capaciteit */
  $handler->display->display_options['fields']['field_capacity']['id'] = 'field_capacity';
  $handler->display->display_options['fields']['field_capacity']['table'] = 'field_data_field_capacity';
  $handler->display->display_options['fields']['field_capacity']['field'] = 'field_capacity';
  $handler->display->display_options['fields']['field_capacity']['label'] = 'Max. capaciteit';
  $handler->display->display_options['fields']['field_capacity']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_capacity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Capaciteit toelichting */
  $handler->display->display_options['fields']['field_capacity_note']['id'] = 'field_capacity_note';
  $handler->display->display_options['fields']['field_capacity_note']['table'] = 'field_data_field_capacity_note';
  $handler->display->display_options['fields']['field_capacity_note']['field'] = 'field_capacity_note';
  $handler->display->display_options['fields']['field_capacity_note']['label'] = 'Toelichting';
  $handler->display->display_options['fields']['field_capacity_note']['element_label_colon'] = FALSE;
  /* Field: Content: Setup */
  $handler->display->display_options['fields']['field_setup']['id'] = 'field_setup';
  $handler->display->display_options['fields']['field_setup']['table'] = 'field_data_field_setup';
  $handler->display->display_options['fields']['field_setup']['field'] = 'field_setup';
  $handler->display->display_options['fields']['field_setup']['label'] = 'Opstelling';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
    'room' => 'room',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'rooms';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Zalen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-agenda';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['rooms'] = $view;

  return $export;
}
