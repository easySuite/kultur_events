<?php
/**
 * @file
 * kultur_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kultur_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kultur_events';
  $view->description = '';
  $view->tag = 'ding_event';
  $view->base_table = 'node';
  $view->human_name = 'Kultur events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'See all events';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Indsend';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'event-list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No events where found.';
  $handler->display->display_options['empty']['area']['format'] = 'ding_wysiwyg';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: Day (excluded) */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['ui_name'] = 'Day (excluded)';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'day_text_full',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Day of the month (excluded) */
  $handler->display->display_options['fields']['field_ding_event_date_1']['id'] = 'field_ding_event_date_1';
  $handler->display->display_options['fields']['field_ding_event_date_1']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['ui_name'] = 'Day of the month (excluded)';
  $handler->display->display_options['fields']['field_ding_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['settings'] = array(
    'format_type' => 'day_of_the_month_without_leading_zeros',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Month (excluded) */
  $handler->display->display_options['fields']['field_ding_event_date_2']['id'] = 'field_ding_event_date_2';
  $handler->display->display_options['fields']['field_ding_event_date_2']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_2']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_2']['ui_name'] = 'Month (excluded)';
  $handler->display->display_options['fields']['field_ding_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_2']['settings'] = array(
    'format_type' => 'month_text_full',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Location (excluded) */
  $handler->display->display_options['fields']['field_ding_event_location']['id'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['field'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['ui_name'] = 'Location (excluded)';
  $handler->display->display_options['fields']['field_ding_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['click_sort_column'] = 'name_line';
  $handler->display->display_options['fields']['field_ding_event_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Time (excluded) */
  $handler->display->display_options['fields']['field_ding_event_date_3']['id'] = 'field_ding_event_date_3';
  $handler->display->display_options['fields']['field_ding_event_date_3']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_3']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_3']['ui_name'] = 'Time (excluded)';
  $handler->display->display_options['fields']['field_ding_event_date_3']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_3']['settings'] = array(
    'format_type' => 'ding_time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Price (excluded) */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['ui_name'] = 'Price (excluded)';
  $handler->display->display_options['fields']['field_ding_event_price']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'event-list-title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Day, date and month */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Day, date and month';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="event-list-date-wrapper">
  <span class="event-list-day">[field_ding_event_date]</span>
  <div class="event-list-inner-wrapper">
    <span class="event-list-date">[field_ding_event_date_1]</span>
    <span class="event-list-month">[field_ding_event_date_2]</span>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Location, time and price */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Location, time and price';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="event-list-info">
  <span class="event-list-location">[field_ding_event_location]</span>
  <span class="event-list-time">[field_ding_event_date_3]</span>
  <span class="event-list-price">[field_ding_event_price]</span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'event_category' => 'event_category',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_event' => 'ding_event',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ding_event_date.field_ding_event_date_value' => 'field_data_field_ding_event_date.field_ding_event_date_value',
    'field_data_field_ding_event_date.field_ding_event_date_value2' => 'field_data_field_ding_event_date.field_ding_event_date_value2',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'ding_library' => 'ding_library',
  );

  /* Display: Kultur events list */
  $handler = $view->new_display('panel_pane', 'Kultur events list', 'kultur_event_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kultur events list';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'arrangementer';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'og_group_ref_target_id_entityreference_filter' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_ding_event_category_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'ding_wysiwyg';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Number of elements';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« First';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Last »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_ding_event_date_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['class'] = 'list event-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'OG node group';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Date (for group header) (excluded) */
  $handler->display->display_options['fields']['field_ding_event_date_1']['id'] = 'field_ding_event_date_1';
  $handler->display->display_options['fields']['field_ding_event_date_1']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['ui_name'] = 'Date (for group header) (excluded)';
  $handler->display->display_options['fields']['field_ding_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['type'] = 'calendar_header';
  $handler->display->display_options['fields']['field_ding_event_date_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: List image */
  $handler->display->display_options['fields']['field_ding_event_list_image']['id'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['table'] = 'field_data_field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['field'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['ui_name'] = 'List image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_wrapper_class'] = 'event-image-wrapper';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_event_list_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_list_medium',
      'breakpoint_2' => '500',
      'style_2' => 'ding_list_small',
      'max_style' => 'ding_list_medium',
      'fallback_style' => 'ding_list_medium',
    ),
  );
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'event-list-heading';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Description (content) */
  $handler->display->display_options['fields']['field_ding_event_lead']['id'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['table'] = 'field_data_field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['field'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['ui_name'] = 'Description (content)';
  $handler->display->display_options['fields']['field_ding_event_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_class'] = 'event-list-description';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'event-list-location';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Field: Location */
  $handler->display->display_options['fields']['field_ding_event_location']['id'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['field'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_ding_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_location']['element_class'] = 'event-list-location';
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['click_sort_column'] = 'name_line';
  $handler->display->display_options['fields']['field_ding_event_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Time (from - to) */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['ui_name'] = 'Time (from - to)';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_date']['element_class'] = 'event-list-time';
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'ding_time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Price */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['ui_name'] = 'Price';
  $handler->display->display_options['fields']['field_ding_event_price']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_price']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_price']['element_class'] = 'event-list-price';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Link (arrow) */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Link (arrow)';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<i class="icon-chevron-right"></i>';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'event-arrow-link';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Ding event date */
  $handler->display->display_options['sorts']['ding_event_date']['id'] = 'ding_event_date';
  $handler->display->display_options['sorts']['ding_event_date']['table'] = 'node';
  $handler->display->display_options['sorts']['ding_event_date']['field'] = 'ding_event_date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'event_category' => 'event_category',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ding_event' => 'ding_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ding_event_date.field_ding_event_date_value' => 'field_data_field_ding_event_date.field_ding_event_date_value',
    'field_data_field_ding_event_date.field_ding_event_date_value2' => 'field_data_field_ding_event_date.field_ding_event_date_value2',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'ding_library' => 'ding_library',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Field: Library (og_group_ref) (reference filter) */
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['id'] = 'og_group_ref_target_id_entityreference_filter';
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['field'] = 'og_group_ref_target_id_entityreference_filter';
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['expose']['operator_id'] = 'og_group_ref_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['expose']['label'] = 'Library';
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['expose']['operator'] = 'og_group_ref_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['expose']['identifier'] = 'og_group_ref_target_id_entityreference_filter';
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['group_info']['label'] = 'Library (og_group_ref) (reference filter)';
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['group_info']['identifier'] = 'og_group_ref_target_id_entityreference_filter';
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['og_group_ref_target_id_entityreference_filter']['reference_display'] = 'kultur_events:entityreference_1';
  /* Filter criterion: Content: Category (field_ding_event_category) */
  $handler->display->display_options['filters']['field_ding_event_category_tid']['id'] = 'field_ding_event_category_tid';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['table'] = 'field_data_field_ding_event_category';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['field'] = 'field_ding_event_category_tid';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ding_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['operator_id'] = 'field_ding_event_category_tid_op';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['operator'] = 'field_ding_event_category_tid_op';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['identifier'] = 'field_ding_event_category_tid';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_ding_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['vocabulary'] = 'event_category';
  $handler->display->display_options['pane_category']['name'] = 'Event panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '%tid',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Kultur events libraries */
  $handler = $view->new_display('entityreference', 'Kultur events libraries', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kultur events libraries';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_ding_event_date' => 0,
    'field_ding_event_date_1' => 0,
    'field_ding_event_date_2' => 0,
    'field_ding_event_location' => 0,
    'field_ding_event_date_3' => 0,
    'field_ding_event_price' => 0,
    'nothing_1' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'event-list-title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'ding_library' => 'ding_library',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';
  $translatables['kultur_events'] = array(
    t('Master'),
    t('See all events'),
    t('Indsend'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Empty text'),
    t('No events where found.'),
    t('OG membership from node'),
    t('<div class="event-list-date-wrapper">
  <span class="event-list-day">[field_ding_event_date]</span>
  <div class="event-list-inner-wrapper">
    <span class="event-list-date">[field_ding_event_date_1]</span>
    <span class="event-list-month">[field_ding_event_date_2]</span>
  </div>
</div>'),
    t('<div class="event-list-info">
  <span class="event-list-location">[field_ding_event_location]</span>
  <span class="event-list-time">[field_ding_event_date_3]</span>
  <span class="event-list-price">[field_ding_event_price]</span>
</div>'),
    t('Alle'),
    t('Kultur events list'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Number of elements'),
    t('- Alle -'),
    t('Forskydning'),
    t('« First'),
    t('‹ previous'),
    t('Next ›'),
    t('Last »'),
    t('OG node group'),
    t('<i class="icon-chevron-right"></i>'),
    t('Læs mere'),
    t('Library'),
    t('Library (og_group_ref) (reference filter)'),
    t('Category'),
    t('Event panes'),
    t('Kultur events libraries'),
  );
  $export['kultur_events'] = $view;

  return $export;
}
