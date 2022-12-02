<?php
/**
 * @file
 * jnl_isa_issue_supplemental.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_issue_supplemental_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa Issue Supplemental';
  $snippet->name = 'jnl_isa_issue_supplemental';
  $snippet->title = '';
  $export['jnl_isa_issue_supplemental'] = $snippet;

  return $export;
}
