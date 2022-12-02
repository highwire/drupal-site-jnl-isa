<?php
/**
 * @file
 * jnl_isa_content_by_tag.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jnl_isa_content_by_tag_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
