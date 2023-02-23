<?php
/**
 * @file
 * jnl_isa.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'highwire_altmetric_most_shared';
  $page->task = 'page';
  $page->admin_title = 'Highwire altmetric most shared';
  $page->admin_description = 'Highwire ALTMETRIC most shared page';
  $page->path = 'most-shared-altmetric';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_highwire_altmetric_most_shared__panel';
  $handler->task = 'page';
  $handler->subtask = 'highwire_altmetric_most_shared';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'highwire_2col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content_left' => NULL,
      'content_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b8978311-d973-4ad3-9fc2-2ba4298eb531';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_highwire_altmetric_most_shared__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-918a700c-8a37-4d09-829b-860a62274821';
  $pane->panel = 'content_left';
  $pane->type = 'highwire_altmetrics_most_share';
  $pane->subtype = 'highwire_altmetrics_most_share';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'title' => 'Altmetric Data',
    'description' => 'Altmetric tracks attention and engagement of scholarly articles.',
    'month' => '6m',
    'issns' => '0960-1643,1478-5242',
    'number_per_page' => '25',
    'show_pager' => 1,
    'more_link' => 0,
    'more_link_label' => 'See more',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '918a700c-8a37-4d09-829b-860a62274821';
  $display->content['new-918a700c-8a37-4d09-829b-860a62274821'] = $pane;
  $display->panels['content_left'][0] = 'new-918a700c-8a37-4d09-829b-860a62274821';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-918a700c-8a37-4d09-829b-860a62274821';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['highwire_altmetric_most_shared'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'highwire_metrics';
  $page->task = 'page';
  $page->admin_title = 'Highwire Metrics';
  $page->admin_description = '';
  $page->path = 'metrics/%node';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
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
  $handler->name = 'page_highwire_metrics__highwire_metrics';
  $handler->task = 'page';
  $handler->subtask = 'highwire_metrics';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'highwire_metrics',
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
    'name' => 'highwire_metrics',
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Highwire Metrics';
  $display->uuid = '93b320df-7c99-4db0-9287-367745a0f8bc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_highwire_metrics__highwire_metrics';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bac5e834-6969-4aa6-ada3-8d84029be7e8';
  $pane->panel = 'content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_metrics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->uuid = 'bac5e834-6969-4aa6-ada3-8d84029be7e8';
  $display->content['new-bac5e834-6969-4aa6-ada3-8d84029be7e8'] = $pane;
  $display->panels['content'][0] = 'new-bac5e834-6969-4aa6-ada3-8d84029be7e8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['highwire_metrics'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'highwire_similar_articles';
  $page->task = 'page';
  $page->admin_title = 'Similar Articles';
  $page->admin_description = '';
  $page->path = 'similar/articles/%node';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
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
  $handler->name = 'page_highwire_similar_articles__panel_context_cbfbdcfa-cbad-4a76-8274-3b6d57ec08cd';
  $handler->task = 'page';
  $handler->subtask = 'highwire_similar_articles';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content_left' => NULL,
      'content_right' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Similar Articles';
  $display->uuid = '9b3da812-81dc-4b42-b69c-bc146a227236';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_highwire_similar_articles__panel_context_cbfbdcfa-cbad-4a76-8274-3b6d57ec08cd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-03241462-7955-4a4c-9e93-fd087637a80e';
  $pane->panel = 'content';
  $pane->type = 'highwire_simillar_articles';
  $pane->subtype = 'highwire_simillar_articles';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'ajax_loading_icon_classes' => 'icon-spinner icon-spin icon-2x',
    'ajax_loading_text' => '',
    'number_per_page' => '20',
    'show_pager' => 1,
    'more_link_path' => '',
    'more_link' => 0,
    'empty_message' => 'No similar articles are available.',
    'citation_settings_source' => 'corpus_config',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_full',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'full_browse',
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
    'include_on_behalf' => 1,
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
        'citation_style' => 'highwire_article_info',
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
        'highlight_image_style' => 'thumbnail',
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
        'display_contributors' => 0,
        'include_on_behalf' => 1,
        'display_orcid_icon' => 0,
        'display_author_settings' => array(
          'author_format_type' => 'hw_shortname',
          'author_format_custom' => 'Yc',
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
            'author_format_type' => 'hw_shortname',
            'author_format_custom' => 'Yc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'editor' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => 'hw_shortname',
            'author_format_custom' => 'Yc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'group-author' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => 'hw_shortname',
            'author_format_custom' => 'Yc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'guest-editor' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => 'hw_shortname',
            'author_format_custom' => 'Yc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'presenter' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => 'hw_shortname',
            'author_format_custom' => 'Yc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'translator' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => 'hw_shortname',
            'author_format_custom' => 'Yc',
            'separator' => ', ',
            'and' => 0,
            'show-orcid-icon' => 0,
          ),
          'reviewer' => array(
            'label_display' => 0,
            'label' => '',
            'author_format_type' => 'hw_shortname',
            'author_format_custom' => 'Yc',
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
        'citation_style' => 'highwire_article_info',
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
    'more_link_label' => 'See more',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '03241462-7955-4a4c-9e93-fd087637a80e';
  $display->content['new-03241462-7955-4a4c-9e93-fd087637a80e'] = $pane;
  $display->panels['content'][0] = 'new-03241462-7955-4a4c-9e93-fd087637a80e';
  $pane = new stdClass();
  $pane->pid = 'new-0c8f5a3a-754f-4b69-a67d-acbc8c22be51';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->uuid = '0c8f5a3a-754f-4b69-a67d-acbc8c22be51';
  $display->content['new-0c8f5a3a-754f-4b69-a67d-acbc8c22be51'] = $pane;
  $display->panels['top'][0] = 'new-0c8f5a3a-754f-4b69-a67d-acbc8c22be51';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['highwire_similar_articles'] = $page;

  return $pages;

}
