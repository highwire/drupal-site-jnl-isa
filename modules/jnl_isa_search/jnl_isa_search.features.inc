<?php
/**
 * @file
 * jnl_isa_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jnl_isa_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
