<?php
/**
 * @file
 * CTools plugin definition file.
 */

/**
 * General ctools plugin settings.
 */
$plugin = array(
  'title' => t('Kultur events filters'),
  'category' => t('KulturØen'),
  'description' => t('Define library filter'),
  'single' => TRUE,
  'render callback' => 'kultur_events_filters_plugin_render',
);

/**
 * Render events filters wrapper and attach js scripts.
 */
function kultur_events_filters_plugin_render($subtype, $conf, $panel_args, $context) {
  $plugin_data = new stdClass();
  $plugin_data->content = '';

  $path = drupal_get_path('module', 'kultur_events');
  $plugin_data->content['#markup'] = '<div id="kultur-events-filters"></div>';
  $plugin_data->content['#attached'] = array(
    'js' => array(
      array('data' => $path . '/js/kultur_events.js'),
    ),
  );

  return $plugin_data;
}
