<?php
/**
 * @file
 * films_package.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function films_package_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function films_package_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function films_package_node_info() {
  $items = array(
    'film' => array(
      'name' => t('Film'),
      'base' => 'node_content',
      'description' => t('Information and metadata about a film'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'film_series' => array(
      'name' => t('Film Series'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
