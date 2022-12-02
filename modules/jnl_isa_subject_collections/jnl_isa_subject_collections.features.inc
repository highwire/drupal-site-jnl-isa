<?php
/**
 * @file
 * jnl_isa_subject_collections.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jnl_isa_subject_collections_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "snippet" && $api == "default_snippet") {
    return array("version" => "1");
  }
}
