<?php
/**
 * @file
 * jnl_isa_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function jnl_isa_search_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'highwire_advanced_search_panel_context';
  $handler->task = 'highwire_advanced_search';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Form',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Current issue',
        'keyword' => 'current_issue',
        'name' => 'current_issue',
        'use_default_jcode' => 1,
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'argument_highwire_advanced_search_keywords_arg_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Advanced Search';
  $display->uuid = '06b28be3-c4f9-4078-bb08-f133bd3690e3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'highwire_advanced_search_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bb965fa0-b376-4e31-9201-fa22a43845a2';
  $pane->panel = 'content';
  $pane->type = 'highwire_search_form';
  $pane->subtype = 'highwire_search_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'search_form_parts' => array(
      'txtsimple' => 'txtsimple',
      'citation' => 'citation',
      'pubyear' => 'pubyear',
      'volume' => 'volume',
      'issue' => 'issue',
      'firstpage' => 'firstpage',
      'doi' => 'doi',
      'keywords' => 'keywords',
      'author1' => 'author1',
      'author2' => 'author2',
      'title' => 'title',
      'title_flags' => 'title_flags',
      'abstract_title' => 'abstract_title',
      'abstract_title_flags' => 'abstract_title_flags',
      'text_abstract_title' => 'text_abstract_title',
      'text_abstract_title_flags' => 'text_abstract_title_flags',
      'references' => 'references',
      'references_flags' => 'references_flags',
      'limits' => 'limits',
      'limit_from' => 'limit_from',
      'limit_to' => 'limit_to',
      'subject_collection_code' => 'subject_collection_code',
      'toc_section' => 'toc_section',
      'flag' => 'flag',
      'format' => 'format',
      'numresults' => 'numresults',
      'sort' => 'sort',
      'format_result' => 'format_result',
      'jcode' => 0,
    ),
    'search_target_path' => '',
    'selected_journal' => 'isa|isa',
    'collections' => '0|  -- All Collections -- ',
    'toc_sections' => ' |  -- All Sections -- ',
    'toc_sections_multiple_selection' => 1,
    'collections_multiple_selection' => 1,
    'selected_journal_multiple_selection' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'jcode' => ' |  -- All Journals -- ',
    'jcode_multiple_selection' => 1,
    'context' => array(
      0 => 'empty',
      1 => 'empty',
    ),
    'override_default_collections' => 0,
    'override_default_toc' => 0,
    'hide_labels_description' => 0,
    'use_date_popup' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bb965fa0-b376-4e31-9201-fa22a43845a2';
  $display->content['new-bb965fa0-b376-4e31-9201-fa22a43845a2'] = $pane;
  $display->panels['content'][0] = 'new-bb965fa0-b376-4e31-9201-fa22a43845a2';
  $pane = new stdClass();
  $pane->pid = 'new-d0bb019e-621d-43a4-99e8-d798577084a5';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_iss_issue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_current_issue_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Current Issue',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '600',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-style-alt-content',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd0bb019e-621d-43a4-99e8-d798577084a5';
  $display->content['new-d0bb019e-621d-43a4-99e8-d798577084a5'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-d0bb019e-621d-43a4-99e8-d798577084a5';
  $pane = new stdClass();
  $pane->pid = 'new-6a912333-e4d8-4094-a766-4e905758eef1';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => 'page-title',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6a912333-e4d8-4094-a766-4e905758eef1';
  $display->content['new-6a912333-e4d8-4094-a766-4e905758eef1'] = $pane;
  $display->panels['top'][0] = 'new-6a912333-e4d8-4094-a766-4e905758eef1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bb965fa0-b376-4e31-9201-fa22a43845a2';
  $handler->conf['display'] = $display;
  $export['highwire_advanced_search_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'highwire_advanced_search_panel_context_2';
  $handler->task = 'highwire_advanced_search';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Results',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Current issue',
        'keyword' => 'current_issue',
        'name' => 'current_issue',
        'use_default_jcode' => 1,
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_highwire_advanced_search_keywords_arg_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'sidebar_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search Results';
  $display->uuid = '4a953f48-1ff9-4910-bbbe-9f30ed5689be';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'highwire_advanced_search_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a393eaa7-546f-47cc-bb84-5bb9cc63cb07';
  $pane->panel = 'content';
  $pane->type = 'highwire_search_results_tool';
  $pane->subtype = 'highwire_search_results_tool';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'show_inline' => 1,
    'edit_link_title' => '',
    'edit_link_icon' => 'icon-pencil icon-large',
    'save_link_title' => '',
    'save_link_icon' => 'icon-save icon-large',
    'alert_link_title' => '',
    'alert_link_icon' => 'icon-rss icon-large',
    'context' => 'argument_highwire_advanced_search_keywords_arg_2',
    'override_title' => 0,
    'override_title_text' => '',
    'search_target_path' => 'search',
    'toggle_extra_form_items' => 1,
    'toggle_search_menu' => 1,
    'sort_by_label' => 'Order by',
    'items_per_page_label' => 'Results/page',
    'config_id' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a393eaa7-546f-47cc-bb84-5bb9cc63cb07';
  $display->content['new-a393eaa7-546f-47cc-bb84-5bb9cc63cb07'] = $pane;
  $display->panels['content'][0] = 'new-a393eaa7-546f-47cc-bb84-5bb9cc63cb07';
  $pane = new stdClass();
  $pane->pid = 'new-d630fe96-da61-4a32-81d6-5659524003c2';
  $pane->panel = 'content';
  $pane->type = 'highwire_search_form';
  $pane->subtype = 'highwire_search_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'search_form_parts' => array(
      'txtsimple' => 'txtsimple',
      'citation' => 'citation',
      'pubyear' => 'pubyear',
      'volume' => 'volume',
      'issue' => 'issue',
      'firstpage' => 'firstpage',
      'doi' => 'doi',
      'keywords' => 'keywords',
      'author1' => 'author1',
      'author2' => 'author2',
      'title' => 'title',
      'title_flags' => 'title_flags',
      'abstract_title' => 'abstract_title',
      'abstract_title_flags' => 'abstract_title_flags',
      'text_abstract_title' => 'text_abstract_title',
      'text_abstract_title_flags' => 'text_abstract_title_flags',
      'references' => 'references',
      'references_flags' => 'references_flags',
      'limits' => 'limits',
      'limit_from' => 'limit_from',
      'limit_to' => 'limit_to',
      'jcode' => 'jcode',
      'subject_collection_code' => 'subject_collection_code',
      'toc_section' => 'toc_section',
      'flag' => 'flag',
      'format' => 'format',
      'numresults' => 'numresults',
      'sort' => 'sort',
      'format_result' => 'format_result',
    ),
    'search_target_path' => 'search',
    'jcode' => ' |  -- All Journals -- ',
    'collections' => '0|  -- All Collections --',
    'override_default_collections' => 0,
    'override_default_toc' => 0,
    'toc_sections' => ' |  -- All Sections -- ',
    'toc_sections_multiple_selection' => 1,
    'collections_multiple_selection' => 1,
    'jcode_multiple_selection' => 1,
    'hide_labels_description' => 0,
    'use_date_popup' => 1,
    'context' => array(
      0 => 'argument_highwire_advanced_search_keywords_arg_2',
      1 => 'empty',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'hw-advance-search-form',
    'css_class' => 'search-hidden',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd630fe96-da61-4a32-81d6-5659524003c2';
  $display->content['new-d630fe96-da61-4a32-81d6-5659524003c2'] = $pane;
  $display->panels['content'][1] = 'new-d630fe96-da61-4a32-81d6-5659524003c2';
  $pane = new stdClass();
  $pane->pid = 'new-2b16bc7c-dbde-41eb-96e4-772331da3102';
  $pane->panel = 'content';
  $pane->type = 'highwire_search_results';
  $pane->subtype = 'highwire_search_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'configuration_name' => '',
    'fast_search_url' => 'http://fds-search.highwire.org/search-basic',
    'domain' => array(
      'highwire' => 'highwire',
      'medline' => 0,
    ),
    'enrichment' => array(
      'atom' => 0,
      'medline' => 0,
      'atom_medline' => 0,
    ),
    'restrict_xml' => '',
    'defaults' => 'jcode|[site:default_jcode]',
    'pager_style' => 'pager',
    'empty_override' => 1,
    'empty_override_title' => '',
    'empty_override_text' => 'No results found',
    'empty_override_format' => NULL,
    'format_prefix' => NULL,
    'search_type' => '',
    'overrides' => '',
    'facets' => array(
      'corpus-code' => 'corpus-code',
      'group-code' => 'group-code',
      'toc-section-id' => 'toc-section-id',
      'temis-category' => 'temis-category',
      'temis-broad-category' => 'temis-broad-category',
      'resource-type' => 'resource-type',
      'publication-date' => 'publication-date',
      'subject-collection' => 'subject-collection',
    ),
    'use_article_citation' => 1,
    'article_citation' => array(
      'citation_settings_source' => 'corpus_config',
      'citation_manager_wrapper' => array(
        'citation_manager_citation' => 'jcore_list_full',
      ),
      'corpus_config_wrapper' => array(
        'corpus_config_citation_context' => 'full_search',
      ),
      'citation_style' => 'jcore_standard',
      'cache_enabled' => 1,
      'cache_time' => '86400',
      'title_type' => 'full',
      'short_title_options' => array(
        'char_count' => '50',
        'add_ellipsis' => 0,
      ),
      'title_as_link' => 1,
      'display_subtitle' => 0,
      'choose_pubdate' => 'ppubdate',
      'pubdate_format_type' => '',
      'pubdate_format_custom' => '',
      'display_markup_snippet' => '',
      'highlight_image_toggle' => 0,
      'display_original_link' => 0,
      'display_access_indicator' => 1,
      'access_indicator_settings' => array(
        'open_access' => array(
          'icon' => 'icon-unlock-alt',
          'title' => 'Open Access',
        ),
        'user_access' => array(
          'icon' => 'icon-ok-sign',
          'title' => 'You have access',
        ),
        'no_access' => array(
          'icon' => '',
          'title' => '',
        ),
      ),
      'display_variants' => 0,
      'display_supplements' => 0,
      'display_variants_list_inline' => 1,
      'pdf_download' => array(
        'display_pdf_download' => 0,
        'pdf_download_icon' => 'icon-cloud-download',
        'pdf_download_text' => 'PDF',
      ),
      'cpath_prefix' => '',
      'show_mark_citation' => 0,
      'display_infotrieve_link' => 0,
      'infotrieve_link_settings' => array(
        'icon' => 'icon-usd',
        'link_caption' => 'Order full text via Infotrieve',
      ),
      'bundle_overrides_checkboxes' => array(
        'highwire_book_fragment' => array(
          'selector' => 0,
        ),
        'highwire_news_story' => array(
          'selector' => 0,
        ),
        'highwire_book_edition' => array(
          'selector' => 0,
        ),
        'highwire_article' => array(
          'selector' => 0,
        ),
        'highwire_issue' => array(
          'selector' => 0,
        ),
        'highwire_comment' => array(
          'selector' => 0,
        ),
        'highwire_fragment' => array(
          'selector' => 0,
        ),
        'highwire_book_section' => array(
          'selector' => 0,
        ),
        'highwire_journal' => array(
          'selector' => 0,
        ),
      ),
      'bundle_overrides' => array(
        'highwire_book_fragment' => array(
          'selector' => 0,
          'citation_style' => 'folio_book_sections_search',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => '0',
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock-alt',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => '',
              'title' => '',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => 'thumbnail',
          'display_fragment_caption' => 1,
          'display_parent_citation' => 1,
          'parent_citation_type' => 'highwire_book_section',
          'parent_citation_settings' => array(
            'citation_style' => 'folio_book_sections_standard',
            'cache_enabled' => 1,
            'cache_time' => '86400',
            'title_type' => 'full',
            'short_title_options' => array(
              'char_count' => '50',
              'add_ellipsis' => 0,
            ),
            'title_as_link' => 0,
            'display_subtitle' => 0,
            'choose_pubdate' => 'ppubdate',
            'pubdate_format_type' => '',
            'pubdate_format_custom' => '',
            'display_markup_snippet' => '',
            'highlight_image_toggle' => 0,
            'display_original_link' => 0,
            'display_access_indicator' => 0,
            'access_indicator_settings' => array(
              'open_access' => array(
                'icon' => 'icon-unlock',
                'title' => 'Open Access',
              ),
              'user_access' => array(
                'icon' => 'icon-ok-sign',
                'title' => 'You have access',
              ),
              'no_access' => array(
                'icon' => 'icon-lock',
                'title' => 'Restricted access',
              ),
            ),
            'display_variants' => 0,
            'display_supplements' => 0,
            'display_variants_list_inline' => 1,
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'cpath_prefix' => '',
            'show_mark_citation' => 0,
            'display_infotrieve_link' => 0,
            'infotrieve_link_settings' => array(
              'icon' => 'icon-usd',
              'link_caption' => 'Order full text via Infotrieve',
            ),
            'display_highlight_image' => 0,
            'highlight_image_style' => '',
            'display_abstract_tooltip' => 0,
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 1,
            'display_pubmed_tooltip' => 1,
            'display_advanced_search_tooltip' => 1,
            'display_author_landing_page_tooltip' => 0,
            'author_site_search_path' => 'search/',
          ),
        ),
        'highwire_news_story' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_click_image' => 'nothing',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 0,
          'display_pubmed_tooltip' => 0,
          'display_advanced_search_tooltip' => 0,
        ),
        'highwire_book_edition' => array(
          'selector' => 0,
          'citation_style' => 'folio_books_standard',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 1,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
        'highwire_article' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'colorbox',
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
          'display_abstract_tooltip' => 0,
          'display_contributors' => 0,
          'include_on_behalf' => 0,
          'display_orcid_icon' => 0,
          'display_author_settings' => array(
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
          ),
          'display_author_types' => array(
            'author' => 0,
            'editor' => 0,
            'group-author' => 0,
            'guest-editor' => 0,
            'presenter' => 0,
            'translator' => 0,
            'reviewer' => 0,
          ),
          'display_author_types_settings' => array(
            'author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'group-author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'guest-editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'presenter' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'translator' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'reviewer' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
          ),
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 1,
          'display_orcid_tooltip' => 1,
          'display_ads_search_tooltip' => 0,
          'display_agricola_tooltip' => 0,
          'author_site_search_path' => 'search/',
          'display_translations' => 0,
          'display_translations_text' => 'Translations Available',
          'display_translations_text_icon' => 'icon-globe',
        ),
        'highwire_issue' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'featured_image_click_image' => 'nothing',
          'display_contributors' => 0,
          'include_on_behalf' => 1,
          'display_orcid_icon' => 0,
          'display_author_settings' => array(
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
          ),
          'display_author_types' => array(
            'author' => 0,
            'editor' => 0,
            'group-author' => 0,
            'guest-editor' => 0,
            'presenter' => 0,
            'translator' => 0,
            'reviewer' => 0,
          ),
          'display_author_types_settings' => array(
            'author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'group-author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'guest-editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'presenter' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'translator' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'reviewer' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
          ),
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
        'highwire_comment' => array(
          'selector' => 0,
          'citation_style' => 'highwire_comment',
          'show_title' => 0,
          'title_as_link' => 0,
          'title_as_link_type' => 'tab_view',
          'add_title_anchor' => 0,
          'author_format_type' => 'fullname',
          'author_format_custom' => '',
          'author_list_separator' => ', ',
          'date_label' => '',
          'date_format_type' => 'custom',
          'date_format' => '(j F Y)',
          'display_comment_body' => 1,
          'style_comment_body' => array(
            'enable_show_more_link' => 1,
            'show_more_link_title' => 'Show More',
            'show_less_link_title' => 'Show Less',
            'full_text_body_length' => '1500',
          ),
          'display_attachment' => 1,
          'display_conflict_of_interest' => 1,
        ),
        'highwire_fragment' => array(
          'selector' => 0,
          'citation_style' => 'folio_book_sections_search',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => '0',
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock-alt',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => '',
              'title' => '',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => 'thumbnail',
          'display_fragment_caption' => 1,
          'enable_show_more_link' => array(
            'is_checked_enable_show_more_link' => 0,
            'show_more_link_title' => 'Show More',
            'show_less_link_title' => 'Show Less',
            'snippet_max_length' => '150',
          ),
          'fragment_image_settings' => array(
            'fragment_image_variant' => 'medium',
            'fragment_click_image' => 'colorbox',
            'show_download_links' => 1,
          ),
          'display_parent_citation' => 1,
          'parent_citation_type' => 'highwire_article',
          'parent_citation_settings' => array(
            'citation_style' => 'mla',
            'cache_enabled' => 1,
            'cache_time' => '86400',
            'title_type' => 'full',
            'short_title_options' => array(
              'char_count' => '50',
              'add_ellipsis' => 0,
            ),
            'title_as_link' => 0,
            'display_subtitle' => 0,
            'choose_pubdate' => 'ppubdate',
            'pubdate_format_type' => '',
            'pubdate_format_custom' => '',
            'display_markup_snippet' => '',
            'highlight_image_toggle' => 0,
            'display_original_link' => 0,
            'display_access_indicator' => 0,
            'access_indicator_settings' => array(
              'open_access' => array(
                'icon' => 'icon-unlock',
                'title' => 'Open Access',
              ),
              'user_access' => array(
                'icon' => 'icon-ok-sign',
                'title' => 'You have access',
              ),
              'no_access' => array(
                'icon' => 'icon-lock',
                'title' => 'Restricted access',
              ),
            ),
            'display_variants' => 0,
            'display_supplements' => 0,
            'display_variants_list_inline' => 1,
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'cpath_prefix' => '',
            'show_mark_citation' => 0,
            'display_infotrieve_link' => 0,
            'infotrieve_link_settings' => array(
              'icon' => 'icon-usd',
              'link_caption' => 'Order full text via Infotrieve',
            ),
            'display_highlight_image' => '0',
            'highlight_image_style' => '',
            'featured_image_variant' => 'large',
            'featured_image_click_image' => 'colorbox',
            'display_cme_link' => 0,
            'display_cme_link_attributes' => array(
              'target' => '',
            ),
            'display_abstract_tooltip' => 0,
            'display_contributors' => 0,
            'include_on_behalf' => 0,
            'display_orcid_icon' => 0,
            'display_author_settings' => array(
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
            ),
            'display_author_types' => array(
              'author' => 0,
              'editor' => 0,
              'group-author' => 0,
              'guest-editor' => 0,
              'presenter' => 0,
              'translator' => 0,
              'reviewer' => 0,
            ),
            'display_author_types_settings' => array(
              'author' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'editor' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'group-author' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'guest-editor' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'presenter' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'translator' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'reviewer' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
            ),
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 1,
            'display_pubmed_tooltip' => 1,
            'display_advanced_search_tooltip' => 1,
            'display_author_landing_page_tooltip' => 1,
            'display_orcid_tooltip' => 1,
            'display_ads_search_tooltip' => 0,
            'display_agricola_tooltip' => 0,
            'author_site_search_path' => 'search/',
            'display_translations' => 0,
            'display_translations_text' => 'Translations Available',
            'display_translations_text_icon' => 'icon-globe',
          ),
        ),
        'highwire_book_section' => array(
          'selector' => 0,
          'citation_style' => 'folio_book_sections_standard',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'author_site_search_path' => 'search/',
        ),
        'highwire_journal' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
      ),
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'available_journals' => 'isa|isa',
    'show_abstract' => 0,
    'context' => 'argument_highwire_advanced_search_keywords_arg_2',
    'show_format_selector' => NULL,
    'use_article_citation_condensed' => 1,
    'article_citation_condensed' => array(
      'citation_settings_source' => 'corpus_config',
      'citation_manager_wrapper' => array(
        'citation_manager_citation' => 'jcore_list_condensed',
      ),
      'corpus_config_wrapper' => array(
        'corpus_config_citation_context' => 'cond_search',
      ),
      'citation_style' => 'highwire_search_condensed',
      'cache_enabled' => 1,
      'cache_time' => '86400',
      'title_type' => 'full',
      'short_title_options' => array(
        'char_count' => '50',
        'add_ellipsis' => 0,
      ),
      'title_as_link' => 1,
      'display_subtitle' => 0,
      'choose_pubdate' => 'ppubdate',
      'pubdate_format_type' => '',
      'pubdate_format_custom' => '',
      'display_markup_snippet' => '',
      'highlight_image_toggle' => 0,
      'display_original_link' => 0,
      'display_access_indicator' => 1,
      'access_indicator_settings' => array(
        'open_access' => array(
          'icon' => 'icon-unlock-alt',
          'title' => 'Open Access',
        ),
        'user_access' => array(
          'icon' => 'icon-ok-sign',
          'title' => 'You have access',
        ),
        'no_access' => array(
          'icon' => '',
          'title' => '',
        ),
      ),
      'display_variants' => 0,
      'display_supplements' => 0,
      'display_variants_list_inline' => 1,
      'pdf_download' => array(
        'display_pdf_download' => 0,
        'pdf_download_icon' => 'icon-cloud-download',
        'pdf_download_text' => 'PDF',
      ),
      'cpath_prefix' => '',
      'show_mark_citation' => 0,
      'display_infotrieve_link' => 0,
      'infotrieve_link_settings' => array(
        'icon' => 'icon-usd',
        'link_caption' => 'Order full text via Infotrieve',
      ),
      'bundle_overrides_checkboxes' => array(
        'highwire_book_fragment' => array(
          'selector' => 0,
        ),
        'highwire_news_story' => array(
          'selector' => 0,
        ),
        'highwire_book_edition' => array(
          'selector' => 0,
        ),
        'highwire_article' => array(
          'selector' => 0,
        ),
        'highwire_issue' => array(
          'selector' => 0,
        ),
        'highwire_comment' => array(
          'selector' => 0,
        ),
        'highwire_fragment' => array(
          'selector' => 0,
        ),
        'highwire_book_section' => array(
          'selector' => 0,
        ),
        'highwire_journal' => array(
          'selector' => 0,
        ),
      ),
      'bundle_overrides' => array(
        'highwire_book_fragment' => array(
          'selector' => 0,
          'citation_style' => 'folio_book_sections_search',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => '0',
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock-alt',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => '',
              'title' => '',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => 'thumbnail',
          'display_fragment_caption' => 1,
          'display_parent_citation' => 1,
          'parent_citation_type' => 'highwire_book_section',
          'parent_citation_settings' => array(
            'citation_style' => 'folio_book_sections_standard',
            'cache_enabled' => 1,
            'cache_time' => '86400',
            'title_type' => 'full',
            'short_title_options' => array(
              'char_count' => '50',
              'add_ellipsis' => 0,
            ),
            'title_as_link' => 0,
            'display_subtitle' => 0,
            'choose_pubdate' => 'ppubdate',
            'pubdate_format_type' => '',
            'pubdate_format_custom' => '',
            'display_markup_snippet' => '',
            'highlight_image_toggle' => 0,
            'display_original_link' => 0,
            'display_access_indicator' => 0,
            'access_indicator_settings' => array(
              'open_access' => array(
                'icon' => 'icon-unlock',
                'title' => 'Open Access',
              ),
              'user_access' => array(
                'icon' => 'icon-ok-sign',
                'title' => 'You have access',
              ),
              'no_access' => array(
                'icon' => 'icon-lock',
                'title' => 'Restricted access',
              ),
            ),
            'display_variants' => 0,
            'display_supplements' => 0,
            'display_variants_list_inline' => 1,
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'cpath_prefix' => '',
            'show_mark_citation' => 0,
            'display_infotrieve_link' => 0,
            'infotrieve_link_settings' => array(
              'icon' => 'icon-usd',
              'link_caption' => 'Order full text via Infotrieve',
            ),
            'display_highlight_image' => 0,
            'highlight_image_style' => '',
            'display_abstract_tooltip' => 0,
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 1,
            'display_pubmed_tooltip' => 1,
            'display_advanced_search_tooltip' => 1,
            'display_author_landing_page_tooltip' => 0,
            'author_site_search_path' => 'search/',
          ),
        ),
        'highwire_news_story' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_click_image' => 'nothing',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 0,
          'display_pubmed_tooltip' => 0,
          'display_advanced_search_tooltip' => 0,
        ),
        'highwire_book_edition' => array(
          'selector' => 0,
          'citation_style' => 'folio_books_standard',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 1,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
        'highwire_article' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'colorbox',
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
          'display_abstract_tooltip' => 0,
          'display_contributors' => 0,
          'include_on_behalf' => 0,
          'display_orcid_icon' => 0,
          'display_author_settings' => array(
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
          ),
          'display_author_types' => array(
            'author' => 0,
            'editor' => 0,
            'group-author' => 0,
            'guest-editor' => 0,
            'presenter' => 0,
            'translator' => 0,
            'reviewer' => 0,
          ),
          'display_author_types_settings' => array(
            'author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'group-author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'guest-editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'presenter' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'translator' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'reviewer' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
          ),
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 1,
          'display_orcid_tooltip' => 1,
          'display_ads_search_tooltip' => 0,
          'display_agricola_tooltip' => 0,
          'author_site_search_path' => 'search/',
          'display_translations' => 0,
          'display_translations_text' => 'Translations Available',
          'display_translations_text_icon' => 'icon-globe',
        ),
        'highwire_issue' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'featured_image_click_image' => 'nothing',
          'display_contributors' => 0,
          'include_on_behalf' => 1,
          'display_orcid_icon' => 0,
          'display_author_settings' => array(
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
          ),
          'display_author_types' => array(
            'author' => 0,
            'editor' => 0,
            'group-author' => 0,
            'guest-editor' => 0,
            'presenter' => 0,
            'translator' => 0,
            'reviewer' => 0,
          ),
          'display_author_types_settings' => array(
            'author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'group-author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'guest-editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'presenter' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'translator' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'reviewer' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
          ),
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
        'highwire_comment' => array(
          'selector' => 0,
          'citation_style' => 'highwire_comment',
          'show_title' => 0,
          'title_as_link' => 0,
          'title_as_link_type' => 'tab_view',
          'add_title_anchor' => 0,
          'author_format_type' => 'fullname',
          'author_format_custom' => '',
          'author_list_separator' => ', ',
          'date_label' => '',
          'date_format_type' => 'custom',
          'date_format' => '(j F Y)',
          'display_comment_body' => 1,
          'style_comment_body' => array(
            'enable_show_more_link' => 1,
            'show_more_link_title' => 'Show More',
            'show_less_link_title' => 'Show Less',
            'full_text_body_length' => '1500',
          ),
          'display_attachment' => 1,
          'display_conflict_of_interest' => 1,
        ),
        'highwire_fragment' => array(
          'selector' => 0,
          'citation_style' => 'folio_book_sections_search',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => '0',
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock-alt',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => '',
              'title' => '',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => 'thumbnail',
          'display_fragment_caption' => 1,
          'enable_show_more_link' => array(
            'is_checked_enable_show_more_link' => 0,
            'show_more_link_title' => 'Show More',
            'show_less_link_title' => 'Show Less',
            'snippet_max_length' => '150',
          ),
          'fragment_image_settings' => array(
            'fragment_image_variant' => 'medium',
            'fragment_click_image' => 'colorbox',
            'show_download_links' => 1,
          ),
          'display_parent_citation' => 1,
          'parent_citation_type' => 'highwire_article',
          'parent_citation_settings' => array(
            'citation_style' => 'mla',
            'cache_enabled' => 1,
            'cache_time' => '86400',
            'title_type' => 'full',
            'short_title_options' => array(
              'char_count' => '50',
              'add_ellipsis' => 0,
            ),
            'title_as_link' => 0,
            'display_subtitle' => 0,
            'choose_pubdate' => 'ppubdate',
            'pubdate_format_type' => '',
            'pubdate_format_custom' => '',
            'display_markup_snippet' => '',
            'highlight_image_toggle' => 0,
            'display_original_link' => 0,
            'display_access_indicator' => 0,
            'access_indicator_settings' => array(
              'open_access' => array(
                'icon' => 'icon-unlock',
                'title' => 'Open Access',
              ),
              'user_access' => array(
                'icon' => 'icon-ok-sign',
                'title' => 'You have access',
              ),
              'no_access' => array(
                'icon' => 'icon-lock',
                'title' => 'Restricted access',
              ),
            ),
            'display_variants' => 0,
            'display_supplements' => 0,
            'display_variants_list_inline' => 1,
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'cpath_prefix' => '',
            'show_mark_citation' => 0,
            'display_infotrieve_link' => 0,
            'infotrieve_link_settings' => array(
              'icon' => 'icon-usd',
              'link_caption' => 'Order full text via Infotrieve',
            ),
            'display_highlight_image' => '0',
            'highlight_image_style' => '',
            'featured_image_variant' => 'large',
            'featured_image_click_image' => 'colorbox',
            'display_cme_link' => 0,
            'display_cme_link_attributes' => array(
              'target' => '',
            ),
            'display_abstract_tooltip' => 0,
            'display_contributors' => 0,
            'include_on_behalf' => 0,
            'display_orcid_icon' => 0,
            'display_author_settings' => array(
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
            ),
            'display_author_types' => array(
              'author' => 0,
              'editor' => 0,
              'group-author' => 0,
              'guest-editor' => 0,
              'presenter' => 0,
              'translator' => 0,
              'reviewer' => 0,
            ),
            'display_author_types_settings' => array(
              'author' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'editor' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'group-author' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'guest-editor' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'presenter' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'translator' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'reviewer' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
            ),
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 1,
            'display_pubmed_tooltip' => 1,
            'display_advanced_search_tooltip' => 1,
            'display_author_landing_page_tooltip' => 1,
            'display_orcid_tooltip' => 1,
            'display_ads_search_tooltip' => 0,
            'display_agricola_tooltip' => 0,
            'author_site_search_path' => 'search/',
            'display_translations' => 0,
            'display_translations_text' => 'Translations Available',
            'display_translations_text_icon' => 'icon-globe',
          ),
        ),
        'highwire_book_section' => array(
          'selector' => 0,
          'citation_style' => 'folio_book_sections_standard',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'author_site_search_path' => 'search/',
        ),
        'highwire_journal' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
      ),
      'hide_body' => 1,
    ),
    'config_id' => '',
    'search_obj_source' => 'keywords',
    'resource_type' => array(
      'HWCIT' => 'HWCIT',
      'story' => 0,
      'blog' => 0,
      'HWFIG' => 0,
      'HWBOOK' => 0,
      'HWBOOKFIG' => 0,
      'HWEMPTY' => 0,
    ),
    'pager_key' => '0',
    'pager_visible_pages' => '0',
    'disable_logging' => 0,
    'override_title_heading' => 'h2',
    'default_match_behavior' => 'match-all',
    'parse_boolean_tokens' => 0,
    'use_quicksearch_keyword' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'hw-advance-search-result',
    'css_class' => 'active',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2b16bc7c-dbde-41eb-96e4-772331da3102';
  $display->content['new-2b16bc7c-dbde-41eb-96e4-772331da3102'] = $pane;
  $display->panels['content'][2] = 'new-2b16bc7c-dbde-41eb-96e4-772331da3102';
  $pane = new stdClass();
  $pane->pid = 'new-2799a4a9-0225-4da4-9215-0cf1db3e92f1';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_iss_issue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_current_issue_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Current Issue',
  );
  $pane->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-style-alt-content',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2799a4a9-0225-4da4-9215-0cf1db3e92f1';
  $display->content['new-2799a4a9-0225-4da4-9215-0cf1db3e92f1'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-2799a4a9-0225-4da4-9215-0cf1db3e92f1';
  $pane = new stdClass();
  $pane->pid = 'new-50b40f5e-f2e5-420b-b9bf-a128a7c676f0';
  $pane->panel = 'sidebar_right';
  $pane->type = 'highwire_search_facets';
  $pane->subtype = 'highwire_search_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'search_result_conf' => array(
      'configuration_name' => '',
      'fast_search_url' => 'http://fds-search.highwire.org/search-basic',
      'domain' => array(
        'highwire' => 'highwire',
        'medline' => 0,
      ),
      'enrichment' => array(
        'atom' => 0,
        'medline' => 0,
        'atom_medline' => 0,
      ),
      'restrict_xml' => '',
      'defaults' => 'jcode|[site:default_jcode]',
      'pager_style' => 'pager',
      'empty_override' => 1,
      'empty_override_title' => '',
      'empty_override_text' => 'No results found',
      'empty_override_format' => NULL,
      'format_prefix' => NULL,
      'search_type' => '',
      'overrides' => '',
      'facets' => array(
        'corpus-code' => 'corpus-code',
        'group-code' => 'group-code',
        'toc-section-id' => 'toc-section-id',
        'temis-category' => 'temis-category',
        'temis-broad-category' => 'temis-broad-category',
        'resource-type' => 'resource-type',
        'publication-date' => 'publication-date',
        'subject-collection' => 'subject-collection',
      ),
      'use_article_citation' => 1,
      'article_citation' => array(
        'citation_style' => 'jcore_standard',
        'title_type' => 'full',
        'title_as_link' => 1,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'display_access_indicator_text' => 0,
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_abstract_tooltip' => 1,
        'display_author_tooltip' => 0,
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'available_journals' => 'isa|isa',
      'show_abstract' => 0,
      'context' => 'argument_highwire_advanced_search_keywords_arg_2',
      'show_format_selector' => NULL,
      'use_article_citation_condensed' => 1,
      'article_citation_condensed' => array(
        'citation_style' => 'highwire_search_condensed',
        'title_type' => 'full',
        'title_as_link' => 1,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'display_access_indicator_text' => 0,
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_abstract_tooltip' => 1,
        'display_author_tooltip' => 0,
        'hide_body' => 1,
      ),
      'config_id' => '',
    ),
    'search_result_pane' => 'new-6',
    'context' => 'argument_highwire_advanced_search_keywords_arg_2',
    'override_title' => 0,
    'override_title_text' => '',
    'selected_faceted_title' => 'Selected Facets',
    'remove_faceted_icon' => 'icon-remove',
    'facets' => array(
      'toc-section-id' => 'toc-section-id',
      'temis-category' => 'temis-category',
      'temis-broad-category' => 'temis-broad-category',
      'publication-date' => 'publication-date',
      'subject-collection' => 'subject-collection',
    ),
    'corpus-code' => array(
      'title' => '',
      'limit' => '5',
      'show_links' => 1,
      'link_type' => 'links',
      'weight' => '0',
    ),
    'group-code' => array(
      'title' => '',
      'limit' => '5',
      'show_links' => 1,
      'link_type' => 'links',
      'weight' => '0',
    ),
    'toc-section-id' => array(
      'title' => '',
      'limit' => '5',
      'show_links' => 1,
      'link_type' => 'links',
      'weight' => '0',
    ),
    'temis-category' => array(
      'title' => '',
      'limit' => '5',
      'show_links' => 1,
      'link_type' => 'links',
      'weight' => '0',
    ),
    'temis-broad-category' => array(
      'title' => '',
      'limit' => '5',
      'show_links' => 1,
      'link_type' => 'links',
      'weight' => '0',
    ),
    'resource-type' => array(
      'title' => '',
      'limit' => '5',
      'show_links' => 1,
      'link_type' => 'links',
      'weight' => '0',
    ),
    'publication-date' => array(
      'title' => '',
      'limit' => '5',
      'show_links' => 1,
      'link_type' => 'links',
      'weight' => '0',
    ),
    'subject-collection' => array(
      'title' => '',
      'limit' => '5',
      'show_links' => 1,
      'link_type' => 'links',
      'weight' => '0',
    ),
    'config_id' => '',
    'more-link' => array(
      'title' => 'Show More',
      'icon' => 'icon-arrow-down',
    ),
    'less-link' => array(
      'title' => 'Show Less',
      'icon' => 'icon-arrow-up',
    ),
    'active_facet_style' => 'top',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-style-alt-content',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '50b40f5e-f2e5-420b-b9bf-a128a7c676f0';
  $display->content['new-50b40f5e-f2e5-420b-b9bf-a128a7c676f0'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-50b40f5e-f2e5-420b-b9bf-a128a7c676f0';
  $pane = new stdClass();
  $pane->pid = 'new-73f3a803-9aba-418a-af8a-97eb875f7e6e';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => 'page-title',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '73f3a803-9aba-418a-af8a-97eb875f7e6e';
  $display->content['new-73f3a803-9aba-418a-af8a-97eb875f7e6e'] = $pane;
  $display->panels['top'][0] = 'new-73f3a803-9aba-418a-af8a-97eb875f7e6e';
  $pane = new stdClass();
  $pane->pid = 'new-847bd027-2e71-4c24-b123-8e2ed82f54b8';
  $pane->panel = 'top';
  $pane->type = 'highwire_search_token_summary';
  $pane->subtype = 'highwire_search_token_summary';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'summary_txt' => array(
      'value' => '<h1 id="page-title">
	[highwire_search:total] Results</h1>
',
      'format' => 'highwire_full_html',
    ),
    'config_id' => '',
    'context' => 'argument_highwire_advanced_search_keywords_arg_2',
    'override_title' => 0,
    'override_title_text' => '',
    'no_results_txt' => array(
      'value' => '<h1 id="page-title">
	No Results</h1>
',
      'format' => 'highwire_full_html',
    ),
    'override_txt_no_results' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-page-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '847bd027-2e71-4c24-b123-8e2ed82f54b8';
  $display->content['new-847bd027-2e71-4c24-b123-8e2ed82f54b8'] = $pane;
  $display->panels['top'][1] = 'new-847bd027-2e71-4c24-b123-8e2ed82f54b8';
  $pane = new stdClass();
  $pane->pid = 'new-e12c6be8-ae80-418c-8161-0d522532e89a';
  $pane->panel = 'top';
  $pane->type = 'highwire_search_token_summary';
  $pane->subtype = 'highwire_search_token_summary';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'summary_txt' => array(
      'value' => '<p>for [highwire_search:summary]</p>
',
      'format' => 'highwire_full_html',
    ),
    'config_id' => '',
    'context' => 'argument_highwire_advanced_search_keywords_arg_2',
    'override_title' => 0,
    'override_title_text' => '',
    'no_results_txt' => array(
      'value' => '',
      'format' => 'highwire_full_html',
    ),
    'override_txt_no_results' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-page-title-suffix',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e12c6be8-ae80-418c-8161-0d522532e89a';
  $display->content['new-e12c6be8-ae80-418c-8161-0d522532e89a'] = $pane;
  $display->panels['top'][2] = 'new-e12c6be8-ae80-418c-8161-0d522532e89a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2b16bc7c-dbde-41eb-96e4-772331da3102';
  $handler->conf['display'] = $display;
  $export['highwire_advanced_search_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_editorial_search';
  $page->task = 'page';
  $page->admin_title = 'isa Editorial Search ';
  $page->admin_description = '';
  $page->path = 'editorial-search/!keywords';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'keywords' => array(
      'id' => 1,
      'identifier' => 'Highwire Advanced Search Keywords',
      'name' => 'highwire_advanced_search_keywords_arg',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jnl_isa_editorial_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_editorial_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Editorial Search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Searching journal content';
  $display->uuid = 'af23c215-6e2c-4c28-a2c0-48f661e18901';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_editorial_search_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-900a95d6-68f6-4218-b069-30d025469f01';
  $pane->panel = 'content';
  $pane->type = 'highwire_search_results';
  $pane->subtype = 'highwire_search_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'domain' => array(
      'highwire' => 'highwire',
      'medline' => 0,
    ),
    'show_abstract' => 0,
    'pager_style' => 'none',
    'use_article_citation' => 1,
    'article_citation' => array(
      'citation_settings_source' => 'corpus_config',
      'citation_manager_wrapper' => array(
        'citation_manager_citation' => 'jcore_list_full',
      ),
      'corpus_config_wrapper' => array(
        'corpus_config_citation_context' => 'full_search',
      ),
      'citation_style' => 'jcore_standard',
      'cache_enabled' => 1,
      'cache_time' => '600',
      'title_type' => 'full',
      'short_title_options' => array(
        'char_count' => '50',
        'add_ellipsis' => 0,
      ),
      'title_as_link' => 1,
      'display_subtitle' => 0,
      'choose_pubdate' => 'ppubdate',
      'pubdate_format_type' => '',
      'pubdate_format_custom' => '',
      'highlight_image_toggle' => 0,
      'display_original_link' => 0,
      'display_access_indicator' => 0,
      'access_indicator_settings' => array(
        'open_access' => array(
          'icon' => 'icon-unlock',
          'title' => 'Open Access',
        ),
        'user_access' => array(
          'icon' => 'icon-ok-sign',
          'title' => 'You have access',
        ),
        'no_access' => array(
          'icon' => 'icon-lock',
          'title' => 'Restricted access',
        ),
      ),
      'display_variants' => 0,
      'display_supplements' => 0,
      'display_variants_list_inline' => 1,
      'pdf_download' => array(
        'display_pdf_download' => 0,
        'pdf_download_icon' => 'icon-cloud-download',
        'pdf_download_text' => 'PDF',
      ),
      'cpath_prefix' => '',
      'show_mark_citation' => 0,
      'display_infotrieve_link' => 0,
      'infotrieve_link_settings' => array(
        'icon' => 'icon-usd',
        'link_caption' => 'Order full text via Infotrieve',
      ),
      'display_highlight_image' => '0',
      'highlight_image_style' => '',
      'featured_image_variant' => 'large',
      'featured_image_click_image' => 'colorbox',
      'display_cme_link' => 0,
      'display_cme_link_attributes' => array(
        'target' => '',
      ),
      'display_abstract_tooltip' => 0,
      'display_contributors' => 0,
      'include_on_behalf' => 0,
      'display_orcid_icon' => 0,
      'display_author_settings' => array(
        'author_format_type' => '_custom',
        'author_format_custom' => 'f lc',
        'separator' => ', ',
        'and' => 0,
      ),
      'display_author_types' => array(
        'author' => 0,
        'editor' => 0,
        'group-author' => 0,
        'guest-editor' => 0,
        'presenter' => 0,
        'translator' => 0,
        'reviewer' => 0,
      ),
      'display_author_types_settings' => array(
        'author' => array(
          'label_display' => 0,
          'label' => '',
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
          'separator' => ', ',
          'and' => 0,
          'show-orcid-icon' => 0,
        ),
        'editor' => array(
          'label_display' => 0,
          'label' => '',
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
          'separator' => ', ',
          'and' => 0,
          'show-orcid-icon' => 0,
        ),
        'group-author' => array(
          'label_display' => 0,
          'label' => '',
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
          'separator' => ', ',
          'and' => 0,
          'show-orcid-icon' => 0,
        ),
        'guest-editor' => array(
          'label_display' => 0,
          'label' => '',
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
          'separator' => ', ',
          'and' => 0,
          'show-orcid-icon' => 0,
        ),
        'presenter' => array(
          'label_display' => 0,
          'label' => '',
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
          'separator' => ', ',
          'and' => 0,
          'show-orcid-icon' => 0,
        ),
        'translator' => array(
          'label_display' => 0,
          'label' => '',
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
          'separator' => ', ',
          'and' => 0,
          'show-orcid-icon' => 0,
        ),
        'reviewer' => array(
          'label_display' => 0,
          'label' => '',
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
          'separator' => ', ',
          'and' => 0,
          'show-orcid-icon' => 0,
        ),
      ),
      'display_author_tooltip' => 0,
      'display_google_scholar_tooltip' => 1,
      'display_pubmed_tooltip' => 1,
      'display_advanced_search_tooltip' => 1,
      'display_author_landing_page_tooltip' => 0,
      'display_orcid_tooltip' => 0,
      'display_ads_search_tooltip' => 0,
      'display_agricola_tooltip' => 0,
      'author_site_search_path' => '',
      'display_translations' => 0,
      'display_translations_text' => '',
      'display_translations_text_icon' => '',
      'bundle_overrides_checkboxes' => array(
        'highwire_book_fragment' => array(
          'selector' => 0,
        ),
        'highwire_news_story' => array(
          'selector' => 0,
        ),
        'highwire_book_edition' => array(
          'selector' => 0,
        ),
        'highwire_article' => array(
          'selector' => 0,
        ),
        'highwire_issue' => array(
          'selector' => 0,
        ),
        'highwire_comment' => array(
          'selector' => 0,
        ),
        'highwire_fragment' => array(
          'selector' => 0,
        ),
        'highwire_book_section' => array(
          'selector' => 0,
        ),
        'highwire_journal' => array(
          'selector' => 0,
        ),
      ),
      'bundle_overrides' => array(
        'highwire_book_fragment' => array(
          'selector' => 0,
          'citation_style' => 'advanced_fragments_search',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => '0',
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => 'hw_citation_fragments_small',
          'display_fragment_caption' => 1,
          'display_parent_citation' => 1,
          'parent_citation_type' => 'highwire_book_section',
          'parent_citation_settings' => array(
            'citation_style' => 'folio_book_sections_standard',
            'cache_enabled' => 1,
            'cache_time' => '600',
            'title_type' => 'full',
            'short_title_options' => array(
              'char_count' => '50',
              'add_ellipsis' => 0,
            ),
            'title_as_link' => 0,
            'display_subtitle' => 0,
            'choose_pubdate' => 'ppubdate',
            'pubdate_format_type' => '',
            'pubdate_format_custom' => '',
            'display_markup_snippet' => '',
            'highlight_image_toggle' => 0,
            'display_original_link' => 0,
            'display_access_indicator' => 0,
            'access_indicator_settings' => array(
              'open_access' => array(
                'icon' => 'icon-unlock',
                'title' => 'Open Access',
              ),
              'user_access' => array(
                'icon' => 'icon-ok-sign',
                'title' => 'You have access',
              ),
              'no_access' => array(
                'icon' => 'icon-lock',
                'title' => 'Restricted access',
              ),
            ),
            'display_variants' => 0,
            'display_supplements' => 0,
            'display_variants_list_inline' => 1,
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'cpath_prefix' => '',
            'show_mark_citation' => 0,
            'display_infotrieve_link' => 0,
            'infotrieve_link_settings' => array(
              'icon' => 'icon-usd',
              'link_caption' => 'Order full text via Infotrieve',
            ),
            'display_highlight_image' => 0,
            'highlight_image_style' => '',
            'display_abstract_tooltip' => 0,
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 1,
            'display_pubmed_tooltip' => 1,
            'display_advanced_search_tooltip' => 1,
            'display_author_landing_page_tooltip' => 0,
            'author_site_search_path' => 'search/',
          ),
        ),
        'highwire_news_story' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_click_image' => 'nothing',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 0,
          'display_pubmed_tooltip' => 0,
          'display_advanced_search_tooltip' => 0,
        ),
        'highwire_book_edition' => array(
          'selector' => 0,
          'citation_style' => 'folio_books_standard',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 1,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
        'highwire_article' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'nothing',
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
          'display_abstract_tooltip' => 0,
          'display_contributors' => 1,
          'include_on_behalf' => 1,
          'display_orcid_icon' => 0,
          'display_author_settings' => array(
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
          ),
          'display_author_types' => array(
            'author' => 0,
            'editor' => 0,
            'group-author' => 0,
            'guest-editor' => 0,
            'presenter' => 0,
            'translator' => 0,
            'reviewer' => 0,
          ),
          'display_author_types_settings' => array(
            'author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'group-author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'guest-editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'presenter' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'translator' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'reviewer' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
          ),
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'display_ads_search_tooltip' => 0,
          'display_agricola_tooltip' => 0,
          'author_site_search_path' => 'search/',
          'display_translations' => 0,
          'display_translations_text' => 'Translations Available',
          'display_translations_text_icon' => 'icon-globe',
        ),
        'highwire_issue' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'featured_image_click_image' => 'node',
          'display_contributors' => 1,
          'include_on_behalf' => 1,
          'display_orcid_icon' => 0,
          'display_author_settings' => array(
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
          ),
          'display_author_types' => array(
            'author' => 0,
            'editor' => 0,
            'group-author' => 0,
            'guest-editor' => 0,
            'presenter' => 0,
            'translator' => 0,
            'reviewer' => 0,
          ),
          'display_author_types_settings' => array(
            'author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'group-author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'guest-editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'presenter' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'translator' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'reviewer' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
          ),
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
        'highwire_comment' => array(
          'selector' => 0,
          'citation_style' => 'highwire_comment',
          'show_title' => 1,
          'title_as_link' => 0,
          'title_as_link_type' => 'tab_view',
          'add_title_anchor' => 0,
          'author_format_type' => 'fullname',
          'author_format_custom' => '',
          'author_list_separator' => ', ',
          'date_label' => '',
          'date_format_type' => 'custom',
          'date_format' => '(j F Y)',
          'display_comment_body' => 1,
          'style_comment_body' => array(
            'enable_show_more_link' => 1,
            'show_more_link_title' => 'Show More',
            'show_less_link_title' => 'Show Less',
            'full_text_body_length' => '1500',
          ),
          'display_attachment' => 1,
          'display_conflict_of_interest' => 1,
        ),
        'highwire_fragment' => array(
          'selector' => 0,
          'citation_style' => 'advanced_fragments_search',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => '0',
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_fragment_caption' => 1,
          'enable_show_more_link' => array(
            'is_checked_enable_show_more_link' => 0,
            'show_more_link_title' => 'Show More',
            'show_less_link_title' => 'Show Less',
            'snippet_max_length' => '150',
          ),
          'fragment_image_settings' => array(
            'fragment_image_variant' => 'medium',
            'fragment_click_image' => 'colorbox',
            'show_download_links' => 1,
          ),
          'display_parent_citation' => 1,
          'parent_citation_type' => 'highwire_article',
          'parent_citation_settings' => array(
            'citation_style' => 'mla',
            'cache_enabled' => 1,
            'cache_time' => '600',
            'title_type' => 'full',
            'short_title_options' => array(
              'char_count' => '50',
              'add_ellipsis' => 0,
            ),
            'title_as_link' => 0,
            'display_subtitle' => 0,
            'choose_pubdate' => 'ppubdate',
            'pubdate_format_type' => '',
            'pubdate_format_custom' => '',
            'display_markup_snippet' => '',
            'highlight_image_toggle' => 0,
            'display_original_link' => 0,
            'display_access_indicator' => 0,
            'access_indicator_settings' => array(
              'open_access' => array(
                'icon' => 'icon-unlock',
                'title' => 'Open Access',
              ),
              'user_access' => array(
                'icon' => 'icon-ok-sign',
                'title' => 'You have access',
              ),
              'no_access' => array(
                'icon' => 'icon-lock',
                'title' => 'Restricted access',
              ),
            ),
            'display_variants' => 0,
            'display_supplements' => 0,
            'display_variants_list_inline' => 1,
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'cpath_prefix' => '',
            'show_mark_citation' => 0,
            'display_infotrieve_link' => 0,
            'infotrieve_link_settings' => array(
              'icon' => 'icon-usd',
              'link_caption' => 'Order full text via Infotrieve',
            ),
            'display_highlight_image' => '0',
            'highlight_image_style' => '',
            'featured_image_variant' => 'large',
            'featured_image_click_image' => 'nothing',
            'display_cme_link' => 0,
            'display_cme_link_attributes' => array(
              'target' => '',
            ),
            'display_abstract_tooltip' => 0,
            'display_contributors' => 1,
            'include_on_behalf' => 1,
            'display_orcid_icon' => 0,
            'display_author_settings' => array(
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
            ),
            'display_author_types' => array(
              'author' => 0,
              'editor' => 0,
              'group-author' => 0,
              'guest-editor' => 0,
              'presenter' => 0,
              'translator' => 0,
              'reviewer' => 0,
            ),
            'display_author_types_settings' => array(
              'author' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'editor' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'group-author' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'guest-editor' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'presenter' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'translator' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'reviewer' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
            ),
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 1,
            'display_pubmed_tooltip' => 1,
            'display_advanced_search_tooltip' => 1,
            'display_author_landing_page_tooltip' => 0,
            'display_orcid_tooltip' => 1,
            'display_ads_search_tooltip' => 0,
            'display_agricola_tooltip' => 0,
            'author_site_search_path' => 'search/',
            'display_translations' => 0,
            'display_translations_text' => 'Translations Available',
            'display_translations_text_icon' => 'icon-globe',
          ),
        ),
        'highwire_book_section' => array(
          'selector' => 0,
          'citation_style' => 'folio_book_sections_standard',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'author_site_search_path' => 'search/',
        ),
        'highwire_journal' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
      ),
    ),
    'enrichment' => array(
      'atom' => 0,
      'medline' => 0,
      'atom_medline' => 0,
    ),
    'empty_override_title' => '',
    'empty_override_text' => '',
    'restrict_xml' => '',
    'defaults' => '',
    'format_prefix' => NULL,
    'overrides' => '',
    'facets' => array(
      'corpus-code' => 'corpus-code',
      'group-code' => 'group-code',
      'toc-section-id' => 'toc-section-id',
      'temis-category' => 'temis-category',
      'temis-broad-category' => 'temis-broad-category',
      'resource-type' => 'resource-type',
      'publication-date' => 'publication-date',
      'subject-collection' => 'subject-collection',
    ),
    'context' => 'argument_highwire_advanced_search_keywords_arg_1',
    'override_title' => 0,
    'override_title_text' => '',
    'default_match_behavior' => 'match-all',
    'search_obj_source' => 'keywords',
    'resource_type' => array(
      'HWCIT' => 0,
      'story' => 0,
      'blog' => 0,
      'HWFIG' => 0,
      'HWBOOK' => 0,
      'HWBOOKFIG' => 0,
      'HWEMPTY' => 0,
    ),
    'pager_key' => '0',
    'pager_visible_pages' => '5',
    'show_format_selector' => NULL,
    'use_article_citation_condensed' => 1,
    'article_citation_condensed' => array(
      'citation_settings_source' => 'corpus_config',
      'citation_manager_wrapper' => array(
        'citation_manager_citation' => 'jcore_list_full',
      ),
      'corpus_config_wrapper' => array(
        'corpus_config_citation_context' => 'cond_search',
      ),
      'citation_style' => 'mla',
      'cache_enabled' => 1,
      'cache_time' => '600',
      'title_type' => 'full',
      'short_title_options' => array(
        'char_count' => '50',
        'add_ellipsis' => 0,
      ),
      'title_as_link' => 0,
      'display_subtitle' => 0,
      'choose_pubdate' => 'ppubdate',
      'pubdate_format_type' => '',
      'pubdate_format_custom' => '',
      'display_markup_snippet' => '',
      'highlight_image_toggle' => 0,
      'display_original_link' => 0,
      'display_access_indicator' => 0,
      'access_indicator_settings' => array(
        'open_access' => array(
          'icon' => 'icon-unlock',
          'title' => 'Open Access',
        ),
        'user_access' => array(
          'icon' => 'icon-ok-sign',
          'title' => 'You have access',
        ),
        'no_access' => array(
          'icon' => 'icon-lock',
          'title' => 'Restricted access',
        ),
      ),
      'display_variants' => 0,
      'display_supplements' => 0,
      'display_variants_list_inline' => 1,
      'pdf_download' => array(
        'display_pdf_download' => 0,
        'pdf_download_icon' => 'icon-cloud-download',
        'pdf_download_text' => 'PDF',
      ),
      'cpath_prefix' => '',
      'show_mark_citation' => 0,
      'display_infotrieve_link' => 0,
      'infotrieve_link_settings' => array(
        'icon' => 'icon-usd',
        'link_caption' => 'Order full text via Infotrieve',
      ),
      'bundle_overrides_checkboxes' => array(
        'highwire_book_fragment' => array(
          'selector' => 0,
        ),
        'highwire_news_story' => array(
          'selector' => 0,
        ),
        'highwire_book_edition' => array(
          'selector' => 0,
        ),
        'highwire_article' => array(
          'selector' => 0,
        ),
        'highwire_issue' => array(
          'selector' => 0,
        ),
        'highwire_comment' => array(
          'selector' => 0,
        ),
        'highwire_fragment' => array(
          'selector' => 0,
        ),
        'highwire_book_section' => array(
          'selector' => 0,
        ),
        'highwire_journal' => array(
          'selector' => 0,
        ),
      ),
      'bundle_overrides' => array(
        'highwire_book_fragment' => array(
          'selector' => 0,
          'citation_style' => 'advanced_fragments_search',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => '0',
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => 'hw_citation_fragments_small',
          'display_fragment_caption' => 1,
          'display_parent_citation' => 1,
          'parent_citation_type' => 'highwire_book_section',
          'parent_citation_settings' => array(
            'citation_style' => 'folio_book_sections_standard',
            'cache_enabled' => 1,
            'cache_time' => '600',
            'title_type' => 'full',
            'short_title_options' => array(
              'char_count' => '50',
              'add_ellipsis' => 0,
            ),
            'title_as_link' => 0,
            'display_subtitle' => 0,
            'choose_pubdate' => 'ppubdate',
            'pubdate_format_type' => '',
            'pubdate_format_custom' => '',
            'display_markup_snippet' => '',
            'highlight_image_toggle' => 0,
            'display_original_link' => 0,
            'display_access_indicator' => 0,
            'access_indicator_settings' => array(
              'open_access' => array(
                'icon' => 'icon-unlock',
                'title' => 'Open Access',
              ),
              'user_access' => array(
                'icon' => 'icon-ok-sign',
                'title' => 'You have access',
              ),
              'no_access' => array(
                'icon' => 'icon-lock',
                'title' => 'Restricted access',
              ),
            ),
            'display_variants' => 0,
            'display_supplements' => 0,
            'display_variants_list_inline' => 1,
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'cpath_prefix' => '',
            'show_mark_citation' => 0,
            'display_infotrieve_link' => 0,
            'infotrieve_link_settings' => array(
              'icon' => 'icon-usd',
              'link_caption' => 'Order full text via Infotrieve',
            ),
            'display_highlight_image' => 0,
            'highlight_image_style' => '',
            'display_abstract_tooltip' => 0,
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 1,
            'display_pubmed_tooltip' => 1,
            'display_advanced_search_tooltip' => 1,
            'display_author_landing_page_tooltip' => 0,
            'author_site_search_path' => 'search/',
          ),
        ),
        'highwire_news_story' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_click_image' => 'nothing',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 0,
          'display_pubmed_tooltip' => 0,
          'display_advanced_search_tooltip' => 0,
        ),
        'highwire_book_edition' => array(
          'selector' => 0,
          'citation_style' => 'folio_books_standard',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 1,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
        'highwire_article' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => '0',
          'highlight_image_style' => '',
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'nothing',
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
          'display_abstract_tooltip' => 0,
          'display_contributors' => 1,
          'include_on_behalf' => 1,
          'display_orcid_icon' => 0,
          'display_author_settings' => array(
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
          ),
          'display_author_types' => array(
            'author' => 0,
            'editor' => 0,
            'group-author' => 0,
            'guest-editor' => 0,
            'presenter' => 0,
            'translator' => 0,
            'reviewer' => 0,
          ),
          'display_author_types_settings' => array(
            'author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'group-author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'guest-editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'presenter' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'translator' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'reviewer' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
          ),
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'display_ads_search_tooltip' => 0,
          'display_agricola_tooltip' => 0,
          'author_site_search_path' => 'search/',
          'display_translations' => 0,
          'display_translations_text' => 'Translations Available',
          'display_translations_text_icon' => 'icon-globe',
        ),
        'highwire_issue' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'featured_image_click_image' => 'node',
          'display_contributors' => 1,
          'include_on_behalf' => 1,
          'display_orcid_icon' => 0,
          'display_author_settings' => array(
            'author_format_type' => '_custom',
            'author_format_custom' => 'f lc',
            'separator' => ', ',
            'and' => 0,
          ),
          'display_author_types' => array(
            'author' => 0,
            'editor' => 0,
            'group-author' => 0,
            'guest-editor' => 0,
            'presenter' => 0,
            'translator' => 0,
            'reviewer' => 0,
          ),
          'display_author_types_settings' => array(
            'author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'group-author' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'guest-editor' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'presenter' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'translator' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
            'reviewer' => array(
              'label_display' => 0,
              'label' => '',
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
              'show-orcid-icon' => 0,
            ),
          ),
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
        'highwire_comment' => array(
          'selector' => 0,
          'citation_style' => 'highwire_comment',
          'show_title' => 1,
          'title_as_link' => 0,
          'title_as_link_type' => 'tab_view',
          'add_title_anchor' => 0,
          'author_format_type' => 'fullname',
          'author_format_custom' => '',
          'author_list_separator' => ', ',
          'date_label' => '',
          'date_format_type' => 'custom',
          'date_format' => '(j F Y)',
          'display_comment_body' => 1,
          'style_comment_body' => array(
            'enable_show_more_link' => 1,
            'show_more_link_title' => 'Show More',
            'show_less_link_title' => 'Show Less',
            'full_text_body_length' => '1500',
          ),
          'display_attachment' => 1,
          'display_conflict_of_interest' => 1,
        ),
        'highwire_fragment' => array(
          'selector' => 0,
          'citation_style' => 'advanced_fragments_search',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => '0',
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_fragment_caption' => 1,
          'enable_show_more_link' => array(
            'is_checked_enable_show_more_link' => 0,
            'show_more_link_title' => 'Show More',
            'show_less_link_title' => 'Show Less',
            'snippet_max_length' => '150',
          ),
          'fragment_image_settings' => array(
            'fragment_image_variant' => 'medium',
            'fragment_click_image' => 'colorbox',
            'show_download_links' => 1,
          ),
          'display_parent_citation' => 1,
          'parent_citation_type' => 'highwire_article',
          'parent_citation_settings' => array(
            'citation_style' => 'mla',
            'cache_enabled' => 1,
            'cache_time' => '600',
            'title_type' => 'full',
            'short_title_options' => array(
              'char_count' => '50',
              'add_ellipsis' => 0,
            ),
            'title_as_link' => 0,
            'display_subtitle' => 0,
            'choose_pubdate' => 'ppubdate',
            'pubdate_format_type' => '',
            'pubdate_format_custom' => '',
            'display_markup_snippet' => '',
            'highlight_image_toggle' => 0,
            'display_original_link' => 0,
            'display_access_indicator' => 0,
            'access_indicator_settings' => array(
              'open_access' => array(
                'icon' => 'icon-unlock',
                'title' => 'Open Access',
              ),
              'user_access' => array(
                'icon' => 'icon-ok-sign',
                'title' => 'You have access',
              ),
              'no_access' => array(
                'icon' => 'icon-lock',
                'title' => 'Restricted access',
              ),
            ),
            'display_variants' => 0,
            'display_supplements' => 0,
            'display_variants_list_inline' => 1,
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'cpath_prefix' => '',
            'show_mark_citation' => 0,
            'display_infotrieve_link' => 0,
            'infotrieve_link_settings' => array(
              'icon' => 'icon-usd',
              'link_caption' => 'Order full text via Infotrieve',
            ),
            'display_highlight_image' => '0',
            'highlight_image_style' => '',
            'featured_image_variant' => 'large',
            'featured_image_click_image' => 'nothing',
            'display_cme_link' => 0,
            'display_cme_link_attributes' => array(
              'target' => '',
            ),
            'display_abstract_tooltip' => 0,
            'display_contributors' => 1,
            'include_on_behalf' => 1,
            'display_orcid_icon' => 0,
            'display_author_settings' => array(
              'author_format_type' => '_custom',
              'author_format_custom' => 'f lc',
              'separator' => ', ',
              'and' => 0,
            ),
            'display_author_types' => array(
              'author' => 0,
              'editor' => 0,
              'group-author' => 0,
              'guest-editor' => 0,
              'presenter' => 0,
              'translator' => 0,
              'reviewer' => 0,
            ),
            'display_author_types_settings' => array(
              'author' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'editor' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'group-author' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'guest-editor' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'presenter' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'translator' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
              'reviewer' => array(
                'label_display' => 0,
                'label' => '',
                'author_format_type' => '_custom',
                'author_format_custom' => 'f lc',
                'separator' => ', ',
                'and' => 0,
                'show-orcid-icon' => 0,
              ),
            ),
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 1,
            'display_pubmed_tooltip' => 1,
            'display_advanced_search_tooltip' => 1,
            'display_author_landing_page_tooltip' => 0,
            'display_orcid_tooltip' => 1,
            'display_ads_search_tooltip' => 0,
            'display_agricola_tooltip' => 0,
            'author_site_search_path' => 'search/',
            'display_translations' => 0,
            'display_translations_text' => 'Translations Available',
            'display_translations_text_icon' => 'icon-globe',
          ),
        ),
        'highwire_book_section' => array(
          'selector' => 0,
          'citation_style' => 'folio_book_sections_standard',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'author_site_search_path' => 'search/',
        ),
        'highwire_journal' => array(
          'selector' => 0,
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'access_indicator_settings' => array(
            'open_access' => array(
              'icon' => 'icon-unlock',
              'title' => 'Open Access',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_variants_list_inline' => 1,
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'cpath_prefix' => '',
          'show_mark_citation' => 0,
          'display_infotrieve_link' => 0,
          'infotrieve_link_settings' => array(
            'icon' => 'icon-usd',
            'link_caption' => 'Order full text via Infotrieve',
          ),
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'display_author_tooltip' => 0,
          'display_google_scholar_tooltip' => 1,
          'display_pubmed_tooltip' => 1,
          'display_advanced_search_tooltip' => 1,
          'display_author_landing_page_tooltip' => 0,
          'display_orcid_tooltip' => 1,
          'author_site_search_path' => 'search/',
        ),
      ),
      'hide_body' => 1,
    ),
    'config_id' => '',
    'disable_logging' => 0,
    'parse_boolean_tokens' => 0,
    'use_quicksearch_keyword' => 0,
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '900a95d6-68f6-4218-b069-30d025469f01';
  $display->content['new-900a95d6-68f6-4218-b069-30d025469f01'] = $pane;
  $display->panels['content'][0] = 'new-900a95d6-68f6-4218-b069-30d025469f01';
  $pane = new stdClass();
  $pane->pid = 'new-fcf592f5-030b-4fcf-8620-6664d92f18ca';
  $pane->panel = 'sidebar_right';
  $pane->type = 'highwire_search_facets';
  $pane->subtype = 'highwire_search_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'search_result_conf' => array(
      'domain' => array(
        'highwire' => 'highwire',
        'medline' => 0,
      ),
      'show_abstract' => 0,
      'pager_style' => 'none',
      'use_article_citation' => 0,
      'article_citation' => array(
        'citation_style' => 'mla',
        'title_type' => 'full',
        'title_as_link' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'display_access_indicator_text' => 0,
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_abstract_tooltip' => 0,
      ),
      'enrichment' => array(
        'atom' => 0,
        'medline' => 0,
        'atom_medline' => 0,
      ),
      'empty_override_title' => '',
      'empty_override_text' => '',
      'restrict_xml' => '',
      'defaults' => '',
      'format_prefix' => NULL,
      'overrides' => '',
      'facets' => array(
        'corpus-code' => 'corpus-code',
        'group-code' => 'group-code',
        'toc-section-id' => 'toc-section-id',
        'temis-category' => 'temis-category',
        'temis-broad-category' => 'temis-broad-category',
        'resource-type' => 'resource-type',
        'publication-date' => 'publication-date',
        'subject-collection' => 'subject-collection',
      ),
      'context' => 'argument_highwire_advanced_search_keywords_arg_1',
      'override_title' => 0,
      'override_title_text' => '',
    ),
    'search_result_pane' => 'new-3',
    'context' => 'argument_highwire_advanced_search_keywords_arg_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fcf592f5-030b-4fcf-8620-6664d92f18ca';
  $display->content['new-fcf592f5-030b-4fcf-8620-6664d92f18ca'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-fcf592f5-030b-4fcf-8620-6664d92f18ca';
  $pane = new stdClass();
  $pane->pid = 'new-c5badbf9-7f8b-42a2-9e8a-4d01aabff8db';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => 'page-title',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c5badbf9-7f8b-42a2-9e8a-4d01aabff8db';
  $display->content['new-c5badbf9-7f8b-42a2-9e8a-4d01aabff8db'] = $pane;
  $display->panels['top'][0] = 'new-c5badbf9-7f8b-42a2-9e8a-4d01aabff8db';
  $pane = new stdClass();
  $pane->pid = 'new-5a8f8dc0-ed5f-48ab-9958-9e6c33543884';
  $pane->panel = 'top';
  $pane->type = 'highwire_search_summary';
  $pane->subtype = 'highwire_search_summary';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'display_type' => 0,
    'context' => 'argument_highwire_advanced_search_keywords_arg_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5a8f8dc0-ed5f-48ab-9958-9e6c33543884';
  $display->content['new-5a8f8dc0-ed5f-48ab-9958-9e6c33543884'] = $pane;
  $display->panels['top'][1] = 'new-5a8f8dc0-ed5f-48ab-9958-9e6c33543884';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c5badbf9-7f8b-42a2-9e8a-4d01aabff8db';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_editorial_search'] = $page;

  return $pages;

}
