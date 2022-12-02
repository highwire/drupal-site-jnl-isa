<?php
/**
 * @file
 * jnl_isa_manage_citations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jnl_isa_manage_citations_ctools_plugin_api() {
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
}

/**
 * Implements hook_views_api().
 */
function jnl_isa_manage_citations_views_api() {
  return array("version" => "3.0");
}
