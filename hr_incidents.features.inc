<?php
/**
 * @file
 * hr_incidents.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_incidents_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hr_incidents_node_info() {
  $items = array(
    'incident' => array(
      'name' => t('Incident'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}