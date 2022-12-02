<?php
/**
 * @file
 * jnl_isa.default_highwire_corpus_config_settings.inc
 */

/**
 * Implements hook_default_highwire_corpus_config_settings().
 */
function jnl_isa_default_highwire_corpus_config_settings() {
  $export = array();

  $corpus_config = new stdClass();
  $corpus_config->disabled = FALSE; /* Edit this to true to make a default corpus_config disabled initially */
  $corpus_config->api_version = 1;
  $corpus_config->name = 'default';
  $corpus_config->admin_title = 'Default Corpus Configuration';
  $corpus_config->description = 'Default corpus configuration';
  $corpus_config->corpus_config = array(
    'citations' => array(
      'toc' => array(
        'context' => 'toc',
        'citation' => 'jcore_list_full',
        'admin_title' => 'Table of Contents',
        'custom' => FALSE,
      ),
      'full_search' => array(
        'context' => 'full_search',
        'citation' => 'jcore_list_full',
        'admin_title' => 'Full Search Results',
        'custom' => FALSE,
      ),
      'cond_search' => array(
        'context' => 'cond_search',
        'citation' => 'jcore_list_full',
        'admin_title' => 'Condensed Search Result',
        'custom' => FALSE,
      ),
      'full_browse' => array(
        'context' => 'full_browse',
        'citation' => 'jcore_list_full',
        'admin_title' => 'Full Browse',
        'custom' => FALSE,
      ),
      'cond_browse' => array(
        'context' => 'cond_browse',
        'citation' => 'jcore_list_full',
        'admin_title' => 'Condensed Browse',
        'custom' => FALSE,
      ),
      'archive' => array(
        'context' => 'archive',
        'citation' => 'jcore_archive_list_complete',
        'admin_title' => 'Archive',
        'custom' => FALSE,
      ),
      'home_featured' => array(
        'context' => 'home_featured',
        'citation' => 'jcore_list_full',
        'admin_title' => 'Homepage/Featured',
        'custom' => FALSE,
      ),
      'full_page_titles' => array(
        'context' => 'full_page_titles',
        'citation' => 'jcore_page_title_complete',
        'admin_title' => 'Full Page Titles',
        'custom' => FALSE,
      ),
      'cond_page_titles' => array(
        'context' => 'cond_page_titles',
        'citation' => 'jcore_page_title_compact',
        'admin_title' => 'Condensed Page Titles',
        'custom' => FALSE,
      ),
    ),
  );
  $export['default'] = $corpus_config;

  return $export;
}
