<?php
/**
 * @file
 * jnl_isa_alerts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function jnl_isa_alerts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'highwire_alerts_article_add_panel_context';
  $handler->task = 'highwire_alerts_article_add';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Article alert form',
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
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'article_add_form';
    $pane->subtype = 'article_add_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'show_citation' => 1,
      'manage_alerts_path' => '',
      'citation' => array(
        'citation_settings_source' => 'citation_manager',
        'citation_manager_wrapper' => array(
          'citation_manager_citation' => 'jcore_info_blurb',
        ),
        'corpus_config_wrapper' => array(
          'corpus_config_citation_context' => array(),
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
        'display_markup_snippet' => '',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
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
            'citation_style' => 'jcore_title_and_author',
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
            'display_markup_snippet' => '',
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
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'include_on_behalf' => 1,
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
              'display_markup_snippet' => '',
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
              'pdf_download' => array(
                'display_pdf_download' => 0,
                'pdf_download_icon' => 'icon-cloud-download',
                'pdf_download_text' => 'PDF',
              ),
              'include_on_behalf' => 1,
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
            'display_markup_snippet' => '',
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
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'include_on_behalf' => 1,
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
            'display_markup_snippet' => '',
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
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'include_on_behalf' => 0,
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
            'display_abstract_tooltip' => 0,
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
            'cache_time' => '600',
            'title_type' => 'full',
            'short_title_options' => array(
              'char_count' => '50',
              'add_ellipsis' => 0,
            ),
            'title_as_link' => 0,
            'display_subtitle' => 0,
            'choose_pubdate' => 'ppubdate',
            'display_markup_snippet' => '',
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
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'include_on_behalf' => 1,
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
          'highwire_comment' => array(
            'selector' => 0,
            'citation_style' => 'highwire_comment',
            'title_as_link' => 0,
            'title_as_link_type' => 'tab_view',
            'author_format_type' => 'fullname',
            'author_format_custom' => '',
            'author_list_separator' => ', ',
            'date_format' => '(j F Y)',
            'display_comment_body' => 1,
            'display_attachment' => 1,
            'display_conflict_of_interest' => 1,
          ),
          'highwire_fragment' => array(
            'selector' => 0,
            'citation_style' => 'jcore_title_and_author',
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
            'display_markup_snippet' => '',
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
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'include_on_behalf' => 1,
            'show_mark_citation' => 0,
            'display_infotrieve_link' => 0,
            'infotrieve_link_settings' => array(
              'icon' => 'icon-usd',
              'link_caption' => 'Order full text via Infotrieve',
            ),
            'display_highlight_image' => 0,
            'highlight_image_style' => '',
            'display_fragment_caption' => 1,
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
              'display_markup_snippet' => '',
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
              'pdf_download' => array(
                'display_pdf_download' => 0,
                'pdf_download_icon' => 'icon-cloud-download',
                'pdf_download_text' => 'PDF',
              ),
              'include_on_behalf' => 0,
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
              'display_abstract_tooltip' => 0,
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
            'cache_time' => '600',
            'title_type' => 'full',
            'short_title_options' => array(
              'char_count' => '50',
              'add_ellipsis' => 0,
            ),
            'title_as_link' => 0,
            'display_subtitle' => 0,
            'choose_pubdate' => 'ppubdate',
            'display_markup_snippet' => '',
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
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'include_on_behalf' => 1,
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
            'display_markup_snippet' => '',
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
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'include_on_behalf' => 1,
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
      'enabled_types' => array(
        'citedby' => 'citedby',
        'correction' => 'correction',
        'eletter' => 'eletter',
      ),
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'highwire_alerts_user',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'show_frequency' => 1,
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
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'content';
    $pane->type = 'alerts_login_form';
    $pane->subtype = 'alerts_login_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
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
    $display->content['new-2'] = $pane;
    $display->panels['content'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_alerts_dashboard_advertisement',
      'hide_title' => 0,
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
    $display->content['new-3'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'sidebar_right';
    $pane->type = 'panels_ajax_tab_tabs';
    $pane->subtype = 'panels_ajax_tab_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mini_panels' => array(
        'jnl_isa_search_box' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_accordion' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_art_info' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_art_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_art_tools' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_iss_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_share' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_art' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_data' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_info' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_pdf' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_hme_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_most_cited' => array(
          'selected' => 1,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_most_read' => array(
          'selected' => 1,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_top_topics' => array(
          'selected' => 1,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
      ),
      'container_id' => 'jnl_isa_top_topics_n_most_cited',
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'sidebar_right';
    $pane->type = 'panels_ajax_tab_container';
    $pane->subtype = 'panels_ajax_tab_container';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'container_id' => 'jnl_isa_top_topics_n_most_cited',
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['sidebar_right'][2] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['highwire_alerts_article_add_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'highwire_alerts_blog_edit_panel_context';
  $handler->task = 'highwire_alerts_blog_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog subscription',
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
      'content' => NULL,
      'sidebar_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Blog Alerts';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'content';
    $pane->type = 'blog_edit_form';
    $pane->subtype = 'blog_edit_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'blog_heading' => 'Alert me via email when blog content is published',
      'blog_checkbox' => 'Check the box to sign up for Blog alerts',
      'blog_display_name' => 'Blog',
      'enabled_alerts_panel' => array(
        'blog' => 'blog',
      ),
      'enabled_alerts' => array(
        0 => 'blog',
      ),
      'site_code' => '',
      'context' => 'highwire_alerts_user',
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
    $display->content['new-6'] = $pane;
    $display->panels['content'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'jnl_isa_alerts_dashboard_advertisement';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-7'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
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
    $display->content['new-8'] = $pane;
    $display->panels['top'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'top';
    $pane->type = 'snippet';
    $pane->subtype = 'jnl_isa_alerts_edit_blog_snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['top'][1] = 'new-9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['highwire_alerts_blog_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'highwire_alerts_collection_add_panel_context';
  $handler->task = 'highwire_alerts_collection_add';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Collection form',
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
  $display->title = 'Manage Collection Alert';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'content';
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
    $display->content['new-10'] = $pane;
    $display->panels['content'][0] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'content';
    $pane->type = 'collection_add';
    $pane->subtype = 'collection_add';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'collection_jcodes' => array(
        'jn' => 'jn',
      ),
      'form_type' => 'checkboxes',
      'seperate_emails' => 0,
      'site_codes' => '',
      'selected_collections' => '',
      'context' => 'highwire_alerts_user',
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
    $display->content['new-11'] = $pane;
    $display->panels['content'][1] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'content';
    $pane->type = 'alerts_login_form';
    $pane->subtype = 'alerts_login_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['content'][2] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_alerts_dashboard_advertisement',
      'hide_title' => 0,
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
    $display->content['new-13'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-13';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-11';
  $handler->conf['display'] = $display;
  $export['highwire_alerts_collection_add_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'highwire_alerts_news_edit_panel_context';
  $handler->task = 'highwire_alerts_news_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News subscription',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
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
      'content' => NULL,
      'sidebar_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News Alerts';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'content';
    $pane->type = 'news_edit_form';
    $pane->subtype = 'news_edit_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'news_heading' => 'Alert me via email when news content is published',
      'news_checkbox' => 'Check the box to sign up for News alerts',
      'enabled_alerts_panel' => array(
        'news' => 'news',
      ),
      'enabled_alerts' => array(
        0 => 'news',
      ),
      'site_code' => '',
      'context' => 'highwire_alerts_user',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'news_display_name' => 'News',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['content'][0] = 'new-14';
    $pane = new stdClass();
    $pane->pid = 'new-15';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'jnl_isa_alerts_dashboard_advertisement';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-15'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-15';
    $pane = new stdClass();
    $pane->pid = 'new-16';
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
    $display->content['new-16'] = $pane;
    $display->panels['top'][0] = 'new-16';
    $pane = new stdClass();
    $pane->pid = 'new-17';
    $pane->panel = 'top';
    $pane->type = 'snippet';
    $pane->subtype = 'jnl_isa_alerts_edit_news_snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-17'] = $pane;
    $display->panels['top'][1] = 'new-17';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['highwire_alerts_news_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'highwire_alerts_pref_panel_context';
  $handler->task = 'highwire_alerts_pref';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Pref form',
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
  $display->title = 'Manage Alert Preferences';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-18';
    $pane->panel = 'content';
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
    $display->content['new-18'] = $pane;
    $display->panels['content'][0] = 'new-18';
    $pane = new stdClass();
    $pane->pid = 'new-19';
    $pane->panel = 'content';
    $pane->type = 'alerts_pref_form';
    $pane->subtype = 'alerts_pref_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'site_code' => 'jn',
      'context' => 'highwire_alerts_user',
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
    $display->content['new-19'] = $pane;
    $display->panels['content'][1] = 'new-19';
    $pane = new stdClass();
    $pane->pid = 'new-20';
    $pane->panel = 'content';
    $pane->type = 'alerts_login_form';
    $pane->subtype = 'alerts_login_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-20'] = $pane;
    $display->panels['content'][2] = 'new-20';
    $pane = new stdClass();
    $pane->pid = 'new-21';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_alerts_dashboard_advertisement',
      'hide_title' => 0,
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
    $display->content['new-21'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-21';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-19';
  $handler->conf['display'] = $display;
  $export['highwire_alerts_pref_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'highwire_alerts_search_create_panel_context';
  $handler->task = 'highwire_alerts_search_create';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Search form',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Highwire Alerts User Context',
        'keyword' => 'highwire_alerts_user',
        'name' => 'highwire_alerts_user',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Current issue',
        'keyword' => 'current_issue',
        'name' => 'current_issue',
        'use_default_jcode' => 1,
        'id' => 1,
      ),
    ),
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
  $display->title = 'Manage Keyword/Author Alert';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-22';
    $pane->panel = 'content';
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
    $display->content['new-22'] = $pane;
    $display->panels['content'][0] = 'new-22';
    $pane = new stdClass();
    $pane->pid = 'new-23';
    $pane->panel = 'content';
    $pane->type = 'search_alert_create_form';
    $pane->subtype = 'search_alert_create_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'site_code' => '',
      'context' => 'argument_highwire_advanced_search_keywords_arg_2',
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
    $display->content['new-23'] = $pane;
    $display->panels['content'][1] = 'new-23';
    $pane = new stdClass();
    $pane->pid = 'new-24';
    $pane->panel = 'content';
    $pane->type = 'alerts_login_form';
    $pane->subtype = 'alerts_login_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-24'] = $pane;
    $display->panels['content'][2] = 'new-24';
    $pane = new stdClass();
    $pane->pid = 'new-25';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_alerts_dashboard_advertisement',
      'hide_title' => 0,
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
    $display->content['new-25'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-25';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['highwire_alerts_search_create_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'highwire_alerts_search_edit_panel_context';
  $handler->task = 'highwire_alerts_search_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Search edit form',
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
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-26';
    $pane->panel = 'content';
    $pane->type = 'search_edit_form';
    $pane->subtype = 'search_edit_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'site_code' => '',
      'context' => 'argument_highwire_alerts_alert_arg_2',
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
    $display->content['new-26'] = $pane;
    $display->panels['content'][0] = 'new-26';
    $pane = new stdClass();
    $pane->pid = 'new-27';
    $pane->panel = 'content';
    $pane->type = 'alerts_login_form';
    $pane->subtype = 'alerts_login_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
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
    $display->content['new-27'] = $pane;
    $display->panels['content'][1] = 'new-27';
    $pane = new stdClass();
    $pane->pid = 'new-28';
    $pane->panel = 'sidebar_right';
    $pane->type = 'highwire_issue_cover';
    $pane->subtype = 'highwire_issue_cover';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cover_size' => 'medium',
      'variant_link' => 'none',
      'context' => 'context_current_issue_1',
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
    $display->content['new-28'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-28';
    $pane = new stdClass();
    $pane->pid = 'new-29';
    $pane->panel = 'sidebar_right';
    $pane->type = 'highwire_issue_highlights';
    $pane->subtype = 'highwire_issue_highlights';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'context' => 'context_current_issue_1',
      'aligner_start' => NULL,
      'override_title' => 0,
      'override_title_text' => '',
      'aligner_stop' => NULL,
      'override_title_markup' => NULL,
      'citation_style' => 'jcore_title_only',
      'title_type' => 'full',
      'title_as_link' => 1,
      'choose_pubdate' => 'ppubdate',
      'display_markup_snippet' => '',
      'display_original_link' => 0,
      'display_access_indicator' => 0,
      'display_access_indicator_text' => 0,
      'display_variants' => 0,
      'display_supplements' => 0,
      'display_abstract_tooltip' => 0,
      'display_author_tooltip' => 0,
      'form_build_id' => 'form-pv1EEHobCu1WDd3lbavWXIHcp1xVUClgq_t7-nYTEaI',
      'form_token' => 'DTLEQlCwPExJNHbfMm2xV3I1KqkSP6IwU-9M0rn2Bow',
      'form_id' => 'highwire_highwire_issue_highlights_content_type_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-29'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-29';
    $pane = new stdClass();
    $pane->pid = 'new-30';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_alerts_dashboard_advertisement',
      'hide_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-30'] = $pane;
    $display->panels['sidebar_right'][2] = 'new-30';
    $pane = new stdClass();
    $pane->pid = 'new-31';
    $pane->panel = 'sidebar_right';
    $pane->type = 'panels_ajax_tab_tabs';
    $pane->subtype = 'panels_ajax_tab_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mini_panels' => array(
        'jnl_isa_search_box' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_accordion' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_art_info' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_art_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_art_tools' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_iss_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_share' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_art' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_data' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_info' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_pdf' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_hme_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_most_cited' => array(
          'selected' => 1,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_most_read' => array(
          'selected' => 1,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_top_topics' => array(
          'selected' => 1,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
      ),
      'container_id' => 'jnl_isa_top_topics_n_most_cited',
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-31'] = $pane;
    $display->panels['sidebar_right'][3] = 'new-31';
    $pane = new stdClass();
    $pane->pid = 'new-32';
    $pane->panel = 'sidebar_right';
    $pane->type = 'panels_ajax_tab_container';
    $pane->subtype = 'panels_ajax_tab_container';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'container_id' => 'jnl_isa_top_topics_n_most_cited',
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-32'] = $pane;
    $display->panels['sidebar_right'][4] = 'new-32';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-26';
  $handler->conf['display'] = $display;
  $export['highwire_alerts_search_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'highwire_alerts_toc_edit_panel_context';
  $handler->task = 'highwire_alerts_toc_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Etoc subscription',
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
  $display->title = 'Manage eTOC Alerts';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-33';
    $pane->panel = 'content';
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
    $display->content['new-33'] = $pane;
    $display->panels['content'][0] = 'new-33';
    $pane = new stdClass();
    $pane->pid = 'new-34';
    $pane->panel = 'content';
    $pane->type = 'snippet';
    $pane->subtype = 'jnl_isa_alerts_edit_toc_snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-34'] = $pane;
    $display->panels['content'][1] = 'new-34';
    $pane = new stdClass();
    $pane->pid = 'new-35';
    $pane->panel = 'content';
    $pane->type = 'toc_edit_form';
    $pane->subtype = 'toc_edit_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'etoc_heading' => 'Alert me via email when new issues are made available:',
      'etoc_full_checkbox' => 'Table of Contents (full)',
      'etoc_awareness_checkbox' => 'TOC Awareness (notice only)',
      'cpetoc_heading' => 'Alert me via email when new content is published:',
      'cpetoc_checkbox' => 'Alert me of new articles',
      'papetoc_heading' => 'Alert me when new articles are published online:',
      'papetoc_checkbox' => 'Publish ahead of print',
      'ann_heading' => 'Email me about related announcements:',
      'ann_checkbox' => 'Announcements',
      'enabled_alerts_panel' => array(
        'etoc' => 'etoc',
        'etoc_awareness' => 'etoc_awareness',
        'cpetoc' => 'cpetoc',
        'papetoc' => 'papetoc',
        'ann' => 'ann',
      ),
      'enabled_alerts' => array(
        0 => 'etoc',
        1 => 'etoc_awareness',
        2 => 'cpetoc',
        3 => 'papetoc',
        4 => 'ann',
      ),
      'site_code' => '',
      'context' => 'highwire_alerts_user',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-35'] = $pane;
    $display->panels['content'][2] = 'new-35';
    $pane = new stdClass();
    $pane->pid = 'new-36';
    $pane->panel = 'content';
    $pane->type = 'alerts_login_form';
    $pane->subtype = 'alerts_login_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-36'] = $pane;
    $display->panels['content'][3] = 'new-36';
    $pane = new stdClass();
    $pane->pid = 'new-37';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_alerts_dashboard_advertisement',
      'hide_title' => 0,
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
    $display->content['new-37'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-37';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-35';
  $handler->conf['display'] = $display;
  $export['highwire_alerts_toc_edit_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_alerts_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'highwire_alerts_article_edit';
  $page->task = 'page';
  $page->admin_title = 'Highwire Alerts Article Edit';
  $page->admin_description = '';
  $page->path = 'alerts/article/edit/%alert';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'alert' => array(
      'id' => 1,
      'identifier' => 'Highwire Alerts Alert',
      'name' => 'highwire_alerts_alert_arg',
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
  $handler->name = 'page_highwire_alerts_article_edit_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'highwire_alerts_article_edit';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'Current issue',
        'keyword' => 'current_issue',
        'name' => 'current_issue',
        'use_default_jcode' => 1,
        'highwire_jnl_jcode' => 'jn',
        'id' => 1,
      ),
    ),
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
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'article_edit_form';
    $pane->subtype = 'article_edit_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'citation' => array(
        'citation_style' => 'mla',
        'title_type' => 'full',
        'title_as_link' => 0,
        'choose_pubdate' => 'ppubdate',
        'display_markup_snippet' => '',
        'display_original_link' => 0,
        'display_access_indicator' => 0,
        'display_access_indicator_text' => 0,
        'display_variants' => 0,
        'display_supplements' => 0,
        'display_abstract_tooltip' => 0,
      ),
      'enabled_types' => array(
        'correction' => 'correction',
        'citedby' => 'citedby',
        'eletter' => 'eletter',
      ),
      'show_citation' => 0,
      'manage_alerts_path' => '',
      'context' => 'argument_highwire_alerts_alert_arg_1',
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
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'content';
    $pane->type = 'alerts_login_form';
    $pane->subtype = 'alerts_login_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
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
    $display->content['new-2'] = $pane;
    $display->panels['content'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_alerts_dashboard_advertisement',
      'hide_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'sidebar_right';
    $pane->type = 'panels_ajax_tab_tabs';
    $pane->subtype = 'panels_ajax_tab_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mini_panels' => array(
        'jnl_isa_tab_pdf' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_info' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_hme_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_most_cited' => array(
          'selected' => 1,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_top_topics' => array(
          'selected' => 1,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_most_read' => array(
          'selected' => 1,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_data' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_tab_art' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_art_info' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_accordion' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_art_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_art_tools' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_share' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_iss_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_search_box' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
      ),
      'container_id' => 'jnl_isa_top_topics_n_most_cited',
      'url_enabled' => 1,
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['highwire_alerts_article_edit'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_alerts_dashboard';
  $page->task = 'page';
  $page->admin_title = 'isa Alerts dashboard';
  $page->admin_description = '';
  $page->path = 'alerts';
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
  $handler->name = 'page_jnl_isa_alerts_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_alerts_dashboard';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'Highwire Alerts User Context',
        'keyword' => 'highwire_alerts_user',
        'name' => 'highwire_alerts_user',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Current issue',
        'keyword' => 'current_issue',
        'name' => 'current_issue',
        'use_default_jcode' => 1,
        'id' => 1,
      ),
    ),
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
  $display->title = 'My Alert Summary & Preferences';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'My Alerts',
      'body' => '<p>Manage individual alerts for <b>%highwire_alerts_user:user_email</b> by clicking on the individual Alert Criteria in the table below.</p>
',
      'format' => 'highwire_full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['content'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'content';
    $pane->type = 'snippet';
    $pane->subtype = 'jnl_isa_alerts_my_alerts_snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['content'][1] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'content';
    $pane->type = 'alerts_list';
    $pane->subtype = 'alerts_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'site_codes' => '',
      'context' => 'context_highwire_alerts_user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'show_correction_alerts' => 1,
      'show_eletter_alerts' => 1,
      'show_citedby_alerts' => 1,
      'show_etoc_alerts' => 1,
      'show_cme_alerts' => 1,
      'show_keyauth_alerts' => 1,
      'show_collection_alerts' => 1,
      'override_title_heading' => 'h2',
      'show_news_alerts' => 1,
      'show_blog_alerts' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['content'][2] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Add New Alerts',
      'body' => '<p>Subscribe to new alerts by clicking on the links below.</p>
',
      'format' => 'highwire_full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['content'][3] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'content';
    $pane->type = 'snippet';
    $pane->subtype = 'jnl_isa_alerts_add_new_alerts_snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['content'][4] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'content';
    $pane->type = 'alerts_add_links';
    $pane->subtype = 'alerts_add_links';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'article_link' => 'alerts/article/criteria',
      'etoc_link' => 'alerts/toc/edit',
      'collection_link' => 'alerts/collection/add',
      'search_link' => 'alerts/search/add',
      'pref_link' => 'alerts/pref',
      'context' => 'context_highwire_alerts_user_1',
      'show_citetrack_link' => 1,
      'citetrack_header_label' => 'Citetrack Alerts',
      'show_etoc_link' => 1,
      'etoc_header_label' => 'eTOC Alerts',
      'show_collection_link' => 1,
      'collection_header_label' => 'Collections Alerts',
      'show_search_link' => 1,
      'search_header_label' => 'Authors/Keyword Alerts',
      'show_pref_link' => 1,
      'pref_header_label' => 'Alert Preferences',
      'etoc_link_label' => 'Add a new eTOC Alert',
      'collection_link_label' => 'Add a new Collection Alert',
      'citetrack_link_label' => 'Add a new Citation Alert',
      'search_link_label' => 'Add a new Keyword/Author Alert',
      'pref_link_label' => 'How to change my email address',
      'override_title_heading' => 'h2',
      'show_news_link' => 1,
      'news_link' => 'alerts/news/edit',
      'news_header_label' => 'News Alerts',
      'news_link_label' => 'Add a new News Alert',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['content'][5] = 'new-13';
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h2 class="pane-title">My Alert Preferences</h2>
',
      'format' => 'highwire_full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['content'][6] = 'new-14';
    $pane = new stdClass();
    $pane->pid = 'new-15';
    $pane->panel = 'content';
    $pane->type = 'snippet';
    $pane->subtype = 'jnl_isa_alerts_my_alert_preferences_snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 7;
    $pane->locks = array();
    $display->content['new-15'] = $pane;
    $display->panels['content'][7] = 'new-15';
    $pane = new stdClass();
    $pane->pid = 'new-16';
    $pane->panel = 'content';
    $pane->type = 'alerts_pref_list';
    $pane->subtype = 'alerts_pref_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'site_code' => '',
      'context' => 'context_highwire_alerts_user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'show_pref_link' => 1,
      'pref_link' => 'email-alert-change-email',
      'pref_header_label' => 'How to change my email address',
      'pref_link_label' => 'How to change my email address',
      'user_alert_pref_link' => 'alerts/pref',
      'user_alert_pref_header_label' => 'Modify my alert preferences',
      'ser_alert_pref_link_label' => 'How to change my email address2',
      'user_alert_pref_link_label' => 'Modify my alert preferences',
      'pref_change_email_header_label' => 'How to change my email address',
      'pref_change_email_link_label' => 'How to change my email address',
      'pref_user_alert_link' => 'alerts/pref',
      'pref_user_alert_header_label' => 'Modify my alert preferences',
      'pref_user_alert_link_label' => 'Modify my alert preferences',
      'pref_change_email_link' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $display->content['new-16'] = $pane;
    $display->panels['content'][8] = 'new-16';
    $pane = new stdClass();
    $pane->pid = 'new-17';
    $pane->panel = 'content';
    $pane->type = 'alerts_login_form';
    $pane->subtype = 'alerts_login_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $display->content['new-17'] = $pane;
    $display->panels['content'][9] = 'new-17';
    $pane = new stdClass();
    $pane->pid = 'new-18';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_alerts_dashboard_advertisement',
      'hide_title' => 0,
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
    $display->content['new-18'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-18';
    $pane = new stdClass();
    $pane->pid = 'new-19';
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
    $display->content['new-19'] = $pane;
    $display->panels['top'][0] = 'new-19';
    $pane = new stdClass();
    $pane->pid = 'new-20';
    $pane->panel = 'top';
    $pane->type = 'snippet';
    $pane->subtype = 'jnl_isa_alerts_page_title_snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-20'] = $pane;
    $display->panels['top'][1] = 'new-20';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-16';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_alerts_dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_article_alerts_form';
  $page->task = 'page';
  $page->admin_title = 'isa article alerts form';
  $page->admin_description = '';
  $page->path = 'alerts/article/criteria';
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
  $handler->name = 'page_jnl_isa_article_alerts_form_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_article_alerts_form';
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
  $display->title = 'Manage Citation Alerts';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-21';
    $pane->panel = 'content';
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
    $display->content['new-21'] = $pane;
    $display->panels['content'][0] = 'new-21';
    $pane = new stdClass();
    $pane->pid = 'new-22';
    $pane->panel = 'content';
    $pane->type = 'article_criteria_form';
    $pane->subtype = 'article_criteria_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-22'] = $pane;
    $display->panels['content'][1] = 'new-22';
    $pane = new stdClass();
    $pane->pid = 'new-23';
    $pane->panel = 'content';
    $pane->type = 'alerts_login_form';
    $pane->subtype = 'alerts_login_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_alerts_user',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-23'] = $pane;
    $display->panels['content'][2] = 'new-23';
    $pane = new stdClass();
    $pane->pid = 'new-24';
    $pane->panel = 'sidebar_right';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_alerts_dashboard_advertisement',
      'hide_title' => 0,
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
    $display->content['new-24'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-24';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_article_alerts_form'] = $page;

  return $pages;

}
