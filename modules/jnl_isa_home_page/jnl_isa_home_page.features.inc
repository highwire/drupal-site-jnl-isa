<?php
/**
 * @file
 * jnl_isa_home_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jnl_isa_home_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "snippet" && $api == "default_snippet") {
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
function jnl_isa_home_page_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function jnl_isa_home_page_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: jnl_isa_art_carous
  $nodequeues['jnl_isa_art_carous'] = array(
    'name' => 'jnl_isa_art_carous',
    'title' => 'isa Article Carousel',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'insert_at_front' => NULL,
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'highwire_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: jnl_isa_top_topics
  $nodequeues['jnl_isa_top_topics'] = array(
    'name' => 'jnl_isa_top_topics',
    'title' => 'isa Top Topics',
    'subqueue_title' => '',
    'size' => '0',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'insert_at_front' => NULL,
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'highwire_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
