<?php
/**
 * @file
 * jnl_isa_alerts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jnl_isa_alerts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_alerts_article_add_disabled';
  $strongarm->value = FALSE;
  $export['highwire_alerts_article_add_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_alerts_article_view_disabled';
  $strongarm->value = FALSE;
  $export['highwire_alerts_article_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_alerts_blog_edit_disabled';
  $strongarm->value = FALSE;
  $export['highwire_alerts_blog_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_alerts_collection_add_disabled';
  $strongarm->value = FALSE;
  $export['highwire_alerts_collection_add_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_alerts_highwire_alerts_pref_disabled';
  $strongarm->value = FALSE;
  $export['highwire_alerts_highwire_alerts_pref_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_alerts_news_edit_disabled';
  $strongarm->value = FALSE;
  $export['highwire_alerts_news_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_alerts_search_highwire_alerts_search_create_disabled';
  $strongarm->value = FALSE;
  $export['highwire_alerts_search_highwire_alerts_search_create_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_alerts_search_highwire_alerts_search_edit_disabled';
  $strongarm->value = FALSE;
  $export['highwire_alerts_search_highwire_alerts_search_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_alerts_search_highwire_alerts_search_view_disabled';
  $strongarm->value = FALSE;
  $export['highwire_alerts_search_highwire_alerts_search_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_alerts_toc_edit_disabled';
  $strongarm->value = FALSE;
  $export['highwire_alerts_toc_edit_disabled'] = $strongarm;

  return $export;
}
