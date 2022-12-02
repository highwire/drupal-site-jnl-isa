<?php
/**
 * @file
 * jnl_isa_image_gallery.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_image_gallery_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'jnl_isa About Image Gallery';
  $snippet->name = 'jnl_isa_about_image_gallery';
  $snippet->title = '';
  $export['jnl_isa_about_image_gallery'] = $snippet;

  return $export;
}
