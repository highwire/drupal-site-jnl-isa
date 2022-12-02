<?php
/**
 * @file
 * jnl_isa_entity_pages.default_snippet.inc
 */

/**
 * Implements hook_default_snippet().
 */
function jnl_isa_entity_pages_default_snippet() {
  $export = array();

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'Article Access Text';
  $snippet->name = 'article_access_text';
  $snippet->title = '';
  $export['article_access_text'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'Highwire Jnl Template Article Page Ad';
  $snippet->name = 'jnl_isa_article_page_ad';
  $snippet->title = '';
  $export['jnl_isa_article_page_ad'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa e-Letters';
  $snippet->name = 'jnl_isa_e_letters';
  $snippet->title = '';
  $export['jnl_isa_e_letters'] = $snippet;

  $snippet = new stdClass();
  $snippet->disabled = FALSE; /* Edit this to true to make a default snippet disabled initially */
  $snippet->api_version = 1;
  $snippet->admin_title = 'isa TOC Page Ad';
  $snippet->name = 'jnl_isa_toc_page_ad';
  $snippet->title = '';
  $export['jnl_isa_toc_page_ad'] = $snippet;

  return $export;
}
