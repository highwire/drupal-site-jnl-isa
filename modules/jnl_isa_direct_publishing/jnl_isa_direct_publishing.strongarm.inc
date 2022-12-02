<?php
/**
 * @file
 * jnl_isa_direct_publishing.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jnl_isa_direct_publishing_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_highwire_news_story_pattern';
  $strongarm->value = '[node:field_highwire_a_cpath]';
  $export['pathauto_node_highwire_news_story_pattern'] = $strongarm;

  return $export;
}
