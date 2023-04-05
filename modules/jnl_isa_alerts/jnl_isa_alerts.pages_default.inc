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
  $display->uuid = '828b8c77-ab61-4ee3-a54c-059d8c9dd7a9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'highwire_alerts_article_add_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-98173961-e01f-4891-843c-43193a7a778e';
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
  $pane->uuid = '98173961-e01f-4891-843c-43193a7a778e';
  $display->content['new-98173961-e01f-4891-843c-43193a7a778e'] = $pane;
  $display->panels['content'][0] = 'new-98173961-e01f-4891-843c-43193a7a778e';
  $pane = new stdClass();
  $pane->pid = 'new-459e2d4f-1194-4797-aebb-b9f23dcb867c';
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
  $pane->uuid = '459e2d4f-1194-4797-aebb-b9f23dcb867c';
  $display->content['new-459e2d4f-1194-4797-aebb-b9f23dcb867c'] = $pane;
  $display->panels['content'][1] = 'new-459e2d4f-1194-4797-aebb-b9f23dcb867c';
  $pane = new stdClass();
  $pane->pid = 'new-8d4b8d25-677e-4149-b9f2-f2d64e177263';
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
  $pane->uuid = '8d4b8d25-677e-4149-b9f2-f2d64e177263';
  $display->content['new-8d4b8d25-677e-4149-b9f2-f2d64e177263'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-8d4b8d25-677e-4149-b9f2-f2d64e177263';
  $pane = new stdClass();
  $pane->pid = 'new-ba567043-bddf-4e08-a8a6-930e10d7f6b5';
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
  $pane->uuid = 'ba567043-bddf-4e08-a8a6-930e10d7f6b5';
  $display->content['new-ba567043-bddf-4e08-a8a6-930e10d7f6b5'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-ba567043-bddf-4e08-a8a6-930e10d7f6b5';
  $pane = new stdClass();
  $pane->pid = 'new-3cdf2230-43fc-4bb1-aa08-4c2566e7cdab';
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
  $pane->uuid = '3cdf2230-43fc-4bb1-aa08-4c2566e7cdab';
  $display->content['new-3cdf2230-43fc-4bb1-aa08-4c2566e7cdab'] = $pane;
  $display->panels['sidebar_right'][2] = 'new-3cdf2230-43fc-4bb1-aa08-4c2566e7cdab';
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
  $display->uuid = '6a3a78fc-13c7-434c-af86-e90489051c72';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'highwire_alerts_blog_edit_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-52589fc8-7265-4893-b290-12d0ce6aeb35';
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
  $pane->uuid = '52589fc8-7265-4893-b290-12d0ce6aeb35';
  $display->content['new-52589fc8-7265-4893-b290-12d0ce6aeb35'] = $pane;
  $display->panels['content'][0] = 'new-52589fc8-7265-4893-b290-12d0ce6aeb35';
  $pane = new stdClass();
  $pane->pid = 'new-0270bef6-c092-4fef-a77d-bb22c523266a';
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
  $pane->uuid = '0270bef6-c092-4fef-a77d-bb22c523266a';
  $display->content['new-0270bef6-c092-4fef-a77d-bb22c523266a'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-0270bef6-c092-4fef-a77d-bb22c523266a';
  $pane = new stdClass();
  $pane->pid = 'new-46ad3468-b146-48a0-be2e-48c92034574e';
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
  $pane->uuid = '46ad3468-b146-48a0-be2e-48c92034574e';
  $display->content['new-46ad3468-b146-48a0-be2e-48c92034574e'] = $pane;
  $display->panels['top'][0] = 'new-46ad3468-b146-48a0-be2e-48c92034574e';
  $pane = new stdClass();
  $pane->pid = 'new-6c8d7c7b-acce-4da8-b40f-5dcf0bf00a8c';
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
  $pane->uuid = '6c8d7c7b-acce-4da8-b40f-5dcf0bf00a8c';
  $display->content['new-6c8d7c7b-acce-4da8-b40f-5dcf0bf00a8c'] = $pane;
  $display->panels['top'][1] = 'new-6c8d7c7b-acce-4da8-b40f-5dcf0bf00a8c';
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
  $display->uuid = '7d6d9a91-e042-471f-ba63-18e9ec64a74e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'highwire_alerts_collection_add_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ed077a01-ff1b-44b7-8188-ddb56ec3c45b';
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
  $pane->uuid = 'ed077a01-ff1b-44b7-8188-ddb56ec3c45b';
  $display->content['new-ed077a01-ff1b-44b7-8188-ddb56ec3c45b'] = $pane;
  $display->panels['content'][0] = 'new-ed077a01-ff1b-44b7-8188-ddb56ec3c45b';
  $pane = new stdClass();
  $pane->pid = 'new-381225b2-1182-43a8-b73f-fad93ae04096';
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
  $pane->uuid = '381225b2-1182-43a8-b73f-fad93ae04096';
  $display->content['new-381225b2-1182-43a8-b73f-fad93ae04096'] = $pane;
  $display->panels['content'][1] = 'new-381225b2-1182-43a8-b73f-fad93ae04096';
  $pane = new stdClass();
  $pane->pid = 'new-3b9e7c52-59bc-42d8-93e2-0ccd6eec4c1a';
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
  $pane->uuid = '3b9e7c52-59bc-42d8-93e2-0ccd6eec4c1a';
  $display->content['new-3b9e7c52-59bc-42d8-93e2-0ccd6eec4c1a'] = $pane;
  $display->panels['content'][2] = 'new-3b9e7c52-59bc-42d8-93e2-0ccd6eec4c1a';
  $pane = new stdClass();
  $pane->pid = 'new-5bbf7f94-564b-4361-b5c3-c73e66dc14fc';
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
  $pane->uuid = '5bbf7f94-564b-4361-b5c3-c73e66dc14fc';
  $display->content['new-5bbf7f94-564b-4361-b5c3-c73e66dc14fc'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-5bbf7f94-564b-4361-b5c3-c73e66dc14fc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-381225b2-1182-43a8-b73f-fad93ae04096';
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
  $display->uuid = '68288517-953c-4536-89ca-a4b75d0c505c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'highwire_alerts_news_edit_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-85c1a8f9-65d4-4ccb-9b94-571a2403218e';
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
  $pane->uuid = '85c1a8f9-65d4-4ccb-9b94-571a2403218e';
  $display->content['new-85c1a8f9-65d4-4ccb-9b94-571a2403218e'] = $pane;
  $display->panels['content'][0] = 'new-85c1a8f9-65d4-4ccb-9b94-571a2403218e';
  $pane = new stdClass();
  $pane->pid = 'new-ac9c08ca-45ef-4d8c-9333-c7de0be9f4ec';
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
  $pane->uuid = 'ac9c08ca-45ef-4d8c-9333-c7de0be9f4ec';
  $display->content['new-ac9c08ca-45ef-4d8c-9333-c7de0be9f4ec'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-ac9c08ca-45ef-4d8c-9333-c7de0be9f4ec';
  $pane = new stdClass();
  $pane->pid = 'new-7931f35c-dc27-4c23-aa92-e7f603fbc0a8';
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
  $pane->uuid = '7931f35c-dc27-4c23-aa92-e7f603fbc0a8';
  $display->content['new-7931f35c-dc27-4c23-aa92-e7f603fbc0a8'] = $pane;
  $display->panels['top'][0] = 'new-7931f35c-dc27-4c23-aa92-e7f603fbc0a8';
  $pane = new stdClass();
  $pane->pid = 'new-5380e272-5e05-4f0c-829e-f3b196dacf86';
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
  $pane->uuid = '5380e272-5e05-4f0c-829e-f3b196dacf86';
  $display->content['new-5380e272-5e05-4f0c-829e-f3b196dacf86'] = $pane;
  $display->panels['top'][1] = 'new-5380e272-5e05-4f0c-829e-f3b196dacf86';
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
  $display->uuid = 'f58d1d5b-8428-4821-ad16-1af17c5ae8ee';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'highwire_alerts_pref_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8aff2a05-8c55-4924-a261-dba803e9c558';
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
  $pane->uuid = '8aff2a05-8c55-4924-a261-dba803e9c558';
  $display->content['new-8aff2a05-8c55-4924-a261-dba803e9c558'] = $pane;
  $display->panels['content'][0] = 'new-8aff2a05-8c55-4924-a261-dba803e9c558';
  $pane = new stdClass();
  $pane->pid = 'new-cce76ccf-dbc0-4260-8612-93e2b112d11c';
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
  $pane->uuid = 'cce76ccf-dbc0-4260-8612-93e2b112d11c';
  $display->content['new-cce76ccf-dbc0-4260-8612-93e2b112d11c'] = $pane;
  $display->panels['content'][1] = 'new-cce76ccf-dbc0-4260-8612-93e2b112d11c';
  $pane = new stdClass();
  $pane->pid = 'new-215dfeae-e068-41d6-b7e4-f3118b609641';
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
  $pane->uuid = '215dfeae-e068-41d6-b7e4-f3118b609641';
  $display->content['new-215dfeae-e068-41d6-b7e4-f3118b609641'] = $pane;
  $display->panels['content'][2] = 'new-215dfeae-e068-41d6-b7e4-f3118b609641';
  $pane = new stdClass();
  $pane->pid = 'new-bdbc61b3-b6ea-49ce-a188-8d2fd67ceaba';
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
  $pane->uuid = 'bdbc61b3-b6ea-49ce-a188-8d2fd67ceaba';
  $display->content['new-bdbc61b3-b6ea-49ce-a188-8d2fd67ceaba'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-bdbc61b3-b6ea-49ce-a188-8d2fd67ceaba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cce76ccf-dbc0-4260-8612-93e2b112d11c';
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
  $display->uuid = '67630c20-3a15-4659-b649-d074bdd41359';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'highwire_alerts_search_create_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0a9ac5ea-b8db-4c5f-a679-e9fcc0118c6d';
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
  $pane->uuid = '0a9ac5ea-b8db-4c5f-a679-e9fcc0118c6d';
  $display->content['new-0a9ac5ea-b8db-4c5f-a679-e9fcc0118c6d'] = $pane;
  $display->panels['content'][0] = 'new-0a9ac5ea-b8db-4c5f-a679-e9fcc0118c6d';
  $pane = new stdClass();
  $pane->pid = 'new-e5e397f3-b82b-48ad-b045-15186fff9488';
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
  $pane->uuid = 'e5e397f3-b82b-48ad-b045-15186fff9488';
  $display->content['new-e5e397f3-b82b-48ad-b045-15186fff9488'] = $pane;
  $display->panels['content'][1] = 'new-e5e397f3-b82b-48ad-b045-15186fff9488';
  $pane = new stdClass();
  $pane->pid = 'new-2f16ceb6-8839-4479-8539-240fbc257679';
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
  $pane->uuid = '2f16ceb6-8839-4479-8539-240fbc257679';
  $display->content['new-2f16ceb6-8839-4479-8539-240fbc257679'] = $pane;
  $display->panels['content'][2] = 'new-2f16ceb6-8839-4479-8539-240fbc257679';
  $pane = new stdClass();
  $pane->pid = 'new-ca4b1d44-c44c-4746-9a19-68470f17c856';
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
  $pane->uuid = 'ca4b1d44-c44c-4746-9a19-68470f17c856';
  $display->content['new-ca4b1d44-c44c-4746-9a19-68470f17c856'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-ca4b1d44-c44c-4746-9a19-68470f17c856';
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
  $display->uuid = 'abfa6153-cb3a-40bb-b70f-e3fa739abf60';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'highwire_alerts_search_edit_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-52b7b5d6-0055-4733-910c-e9d180aacfc4';
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
  $pane->uuid = '52b7b5d6-0055-4733-910c-e9d180aacfc4';
  $display->content['new-52b7b5d6-0055-4733-910c-e9d180aacfc4'] = $pane;
  $display->panels['content'][0] = 'new-52b7b5d6-0055-4733-910c-e9d180aacfc4';
  $pane = new stdClass();
  $pane->pid = 'new-dc0d7ebd-6f25-433c-8f74-92852115425d';
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
  $pane->uuid = 'dc0d7ebd-6f25-433c-8f74-92852115425d';
  $display->content['new-dc0d7ebd-6f25-433c-8f74-92852115425d'] = $pane;
  $display->panels['content'][1] = 'new-dc0d7ebd-6f25-433c-8f74-92852115425d';
  $pane = new stdClass();
  $pane->pid = 'new-2e143937-67c0-4e0b-ba2b-2ff3f0d65af2';
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
  $pane->uuid = '2e143937-67c0-4e0b-ba2b-2ff3f0d65af2';
  $display->content['new-2e143937-67c0-4e0b-ba2b-2ff3f0d65af2'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-2e143937-67c0-4e0b-ba2b-2ff3f0d65af2';
  $pane = new stdClass();
  $pane->pid = 'new-7cf4d2f2-d6bb-47c2-a68d-cc6beffc10f1';
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
  $pane->uuid = '7cf4d2f2-d6bb-47c2-a68d-cc6beffc10f1';
  $display->content['new-7cf4d2f2-d6bb-47c2-a68d-cc6beffc10f1'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-7cf4d2f2-d6bb-47c2-a68d-cc6beffc10f1';
  $pane = new stdClass();
  $pane->pid = 'new-bd70e2d7-0326-410f-91d2-f3cecd9a0ebc';
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
  $pane->uuid = 'bd70e2d7-0326-410f-91d2-f3cecd9a0ebc';
  $display->content['new-bd70e2d7-0326-410f-91d2-f3cecd9a0ebc'] = $pane;
  $display->panels['sidebar_right'][2] = 'new-bd70e2d7-0326-410f-91d2-f3cecd9a0ebc';
  $pane = new stdClass();
  $pane->pid = 'new-35f111f6-0afa-4dd7-a404-954a6c6a82c7';
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
  $pane->uuid = '35f111f6-0afa-4dd7-a404-954a6c6a82c7';
  $display->content['new-35f111f6-0afa-4dd7-a404-954a6c6a82c7'] = $pane;
  $display->panels['sidebar_right'][3] = 'new-35f111f6-0afa-4dd7-a404-954a6c6a82c7';
  $pane = new stdClass();
  $pane->pid = 'new-2550d3d1-79ed-4d57-b355-6a74e8b6179a';
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
  $pane->uuid = '2550d3d1-79ed-4d57-b355-6a74e8b6179a';
  $display->content['new-2550d3d1-79ed-4d57-b355-6a74e8b6179a'] = $pane;
  $display->panels['sidebar_right'][4] = 'new-2550d3d1-79ed-4d57-b355-6a74e8b6179a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-52b7b5d6-0055-4733-910c-e9d180aacfc4';
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
  $display->uuid = '983cb319-e5e3-4ae0-988a-e90a6faeaffb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'highwire_alerts_toc_edit_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e9e039ef-e935-4890-a33a-5642361d266c';
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
  $pane->uuid = 'e9e039ef-e935-4890-a33a-5642361d266c';
  $display->content['new-e9e039ef-e935-4890-a33a-5642361d266c'] = $pane;
  $display->panels['content'][0] = 'new-e9e039ef-e935-4890-a33a-5642361d266c';
  $pane = new stdClass();
  $pane->pid = 'new-3117f2f2-84dd-45ea-8ac6-643e8d4e263d';
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
  $pane->uuid = '3117f2f2-84dd-45ea-8ac6-643e8d4e263d';
  $display->content['new-3117f2f2-84dd-45ea-8ac6-643e8d4e263d'] = $pane;
  $display->panels['content'][1] = 'new-3117f2f2-84dd-45ea-8ac6-643e8d4e263d';
  $pane = new stdClass();
  $pane->pid = 'new-0d13170d-2cf5-4c78-ad98-2087acb59796';
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
      'papetoc' => 'papetoc',
      'etoc_awareness' => 0,
      'cpetoc' => 0,
      'ann' => 0,
    ),
    'enabled_alerts' => array(
      0 => 'etoc',
      1 => 'papetoc',
    ),
    'site_code' => '',
    'context' => 'highwire_alerts_user',
    'override_title' => 0,
    'override_title_text' => '',
    'etoc_full_content_display_name' => 'Table of Contents',
    'etoc_awareness_display_name' => 'Table of Contents Awareness',
    'cpetoc_display_name' => 'Continuous publication etoc',
    'papetoc_display_name' => 'Publish Ahead of Print',
    'ann_display_name' => 'Announcement',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0d13170d-2cf5-4c78-ad98-2087acb59796';
  $display->content['new-0d13170d-2cf5-4c78-ad98-2087acb59796'] = $pane;
  $display->panels['content'][2] = 'new-0d13170d-2cf5-4c78-ad98-2087acb59796';
  $pane = new stdClass();
  $pane->pid = 'new-631be42a-8514-4a89-9c97-01ee9a5e5ca6';
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
  $pane->uuid = '631be42a-8514-4a89-9c97-01ee9a5e5ca6';
  $display->content['new-631be42a-8514-4a89-9c97-01ee9a5e5ca6'] = $pane;
  $display->panels['content'][3] = 'new-631be42a-8514-4a89-9c97-01ee9a5e5ca6';
  $pane = new stdClass();
  $pane->pid = 'new-b5b844b3-1112-4c07-a308-b6b8ef6f3876';
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
  $pane->uuid = 'b5b844b3-1112-4c07-a308-b6b8ef6f3876';
  $display->content['new-b5b844b3-1112-4c07-a308-b6b8ef6f3876'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-b5b844b3-1112-4c07-a308-b6b8ef6f3876';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0d13170d-2cf5-4c78-ad98-2087acb59796';
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
  $display->uuid = '7eb03bd5-8944-47eb-a5b5-f4c54c8b7fc4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_highwire_alerts_article_edit_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-506296fd-df07-4c78-9e79-0ea3b79a6fcc';
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
  $pane->uuid = '506296fd-df07-4c78-9e79-0ea3b79a6fcc';
  $display->content['new-506296fd-df07-4c78-9e79-0ea3b79a6fcc'] = $pane;
  $display->panels['content'][0] = 'new-506296fd-df07-4c78-9e79-0ea3b79a6fcc';
  $pane = new stdClass();
  $pane->pid = 'new-cdb7ef4a-0f10-4ddc-80f2-11f245b8bc10';
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
  $pane->uuid = 'cdb7ef4a-0f10-4ddc-80f2-11f245b8bc10';
  $display->content['new-cdb7ef4a-0f10-4ddc-80f2-11f245b8bc10'] = $pane;
  $display->panels['content'][1] = 'new-cdb7ef4a-0f10-4ddc-80f2-11f245b8bc10';
  $pane = new stdClass();
  $pane->pid = 'new-1755526e-bcd3-467f-8d99-229c2ac5af77';
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
  $pane->uuid = '1755526e-bcd3-467f-8d99-229c2ac5af77';
  $display->content['new-1755526e-bcd3-467f-8d99-229c2ac5af77'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-1755526e-bcd3-467f-8d99-229c2ac5af77';
  $pane = new stdClass();
  $pane->pid = 'new-c9a5280a-4785-4c16-a74e-c2f8e4a2c799';
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
  $pane->uuid = 'c9a5280a-4785-4c16-a74e-c2f8e4a2c799';
  $display->content['new-c9a5280a-4785-4c16-a74e-c2f8e4a2c799'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-c9a5280a-4785-4c16-a74e-c2f8e4a2c799';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-506296fd-df07-4c78-9e79-0ea3b79a6fcc';
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
  $display->uuid = 'fd0ebd10-d331-4944-807e-03787e345248';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_alerts_dashboard_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-18278de5-16bc-401a-ab5e-c318cad4534a';
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
  $pane->uuid = '18278de5-16bc-401a-ab5e-c318cad4534a';
  $display->content['new-18278de5-16bc-401a-ab5e-c318cad4534a'] = $pane;
  $display->panels['content'][0] = 'new-18278de5-16bc-401a-ab5e-c318cad4534a';
  $pane = new stdClass();
  $pane->pid = 'new-0f26226c-7f20-4f76-b9c9-81936ad4e848';
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
  $pane->uuid = '0f26226c-7f20-4f76-b9c9-81936ad4e848';
  $display->content['new-0f26226c-7f20-4f76-b9c9-81936ad4e848'] = $pane;
  $display->panels['content'][1] = 'new-0f26226c-7f20-4f76-b9c9-81936ad4e848';
  $pane = new stdClass();
  $pane->pid = 'new-464741fc-30e4-4727-a965-e476dc75fd68';
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
    'show_correction_alerts' => 0,
    'show_eletter_alerts' => 0,
    'show_citedby_alerts' => 0,
    'show_etoc_alerts' => 1,
    'show_cme_alerts' => 0,
    'show_keyauth_alerts' => 1,
    'show_collection_alerts' => 0,
    'override_title_heading' => 'h2',
    'show_news_alerts' => 0,
    'show_blog_alerts' => 0,
    'keyword_alert_type_label' => 'Keyword/Author Alerts',
    'collection_alert_type_label' => 'Collection Alerts',
    'correction_alert_type_label' => 'Correction Alerts',
    'news_alert_type_label' => 'News Alerts',
    'blog_alert_type_label' => 'Blog Alerts',
    'eletter_alert_type_label' => 'eLetter Alerts',
    'citedby_alert_type_label' => 'Citation Alerts',
    'etoc_alert_type_label' => 'eTOC Alerts',
    'cme_alert_type_label' => 'CME Alerts',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '464741fc-30e4-4727-a965-e476dc75fd68';
  $display->content['new-464741fc-30e4-4727-a965-e476dc75fd68'] = $pane;
  $display->panels['content'][2] = 'new-464741fc-30e4-4727-a965-e476dc75fd68';
  $pane = new stdClass();
  $pane->pid = 'new-cc090bf8-df62-4323-bec2-f97c527f0614';
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
  $pane->uuid = 'cc090bf8-df62-4323-bec2-f97c527f0614';
  $display->content['new-cc090bf8-df62-4323-bec2-f97c527f0614'] = $pane;
  $display->panels['content'][3] = 'new-cc090bf8-df62-4323-bec2-f97c527f0614';
  $pane = new stdClass();
  $pane->pid = 'new-23a70513-87c6-40a2-b0be-b5438c2c6817';
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
  $pane->uuid = '23a70513-87c6-40a2-b0be-b5438c2c6817';
  $display->content['new-23a70513-87c6-40a2-b0be-b5438c2c6817'] = $pane;
  $display->panels['content'][4] = 'new-23a70513-87c6-40a2-b0be-b5438c2c6817';
  $pane = new stdClass();
  $pane->pid = 'new-c5de8376-0f1e-42f9-a883-c4cf7c7d5738';
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
    'context' => 'context_highwire_alerts_user_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'show_etoc_link' => 1,
    'etoc_link' => 'alerts/toc/edit',
    'etoc_header_label' => 'eTOC Alerts',
    'etoc_link_label' => 'Add a new eTOC Alert',
    'show_collection_link' => 0,
    'collection_link' => 'alerts/collection/add',
    'collection_header_label' => 'Collections Alerts',
    'collection_link_label' => 'Add a new Collection Alert',
    'show_cme_link' => 0,
    'cme_link' => 'alerts/cme/add',
    'cme_header_label' => 'CME Alerts',
    'cme_link_label' => 'Add a new CME Alert',
    'show_citetrack_link' => 0,
    'article_link' => 'alerts/article/criteria',
    'citetrack_header_label' => 'Citetrack Alerts',
    'citetrack_link_label' => 'Add a new Citation Alert',
    'show_search_link' => 1,
    'search_link' => 'alerts/search/add',
    'search_header_label' => 'Authors/Keyword Alerts',
    'search_link_label' => 'Add a new Keyword/Author Alert',
    'show_news_link' => 0,
    'news_link' => 'alerts/news/edit',
    'news_header_label' => 'News Alerts',
    'news_link_label' => 'Add a new News Alert',
    'show_blog_link' => 0,
    'blog_link' => 'alerts/blog/edit',
    'blog_header_label' => 'Blog Alerts',
    'blog_link_label' => 'Add a new Blog Alert',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c5de8376-0f1e-42f9-a883-c4cf7c7d5738';
  $display->content['new-c5de8376-0f1e-42f9-a883-c4cf7c7d5738'] = $pane;
  $display->panels['content'][5] = 'new-c5de8376-0f1e-42f9-a883-c4cf7c7d5738';
  $pane = new stdClass();
  $pane->pid = 'new-896faf28-9472-4d89-a7d3-dbc4f1e97553';
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
  $pane->uuid = '896faf28-9472-4d89-a7d3-dbc4f1e97553';
  $display->content['new-896faf28-9472-4d89-a7d3-dbc4f1e97553'] = $pane;
  $display->panels['content'][6] = 'new-896faf28-9472-4d89-a7d3-dbc4f1e97553';
  $pane = new stdClass();
  $pane->pid = 'new-f27e5581-1877-43d5-aa21-79abc8c91a3f';
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
  $pane->uuid = 'f27e5581-1877-43d5-aa21-79abc8c91a3f';
  $display->content['new-f27e5581-1877-43d5-aa21-79abc8c91a3f'] = $pane;
  $display->panels['content'][7] = 'new-f27e5581-1877-43d5-aa21-79abc8c91a3f';
  $pane = new stdClass();
  $pane->pid = 'new-60c6f623-5cad-4ea2-b1a1-274ab0943ba3';
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
  $pane->uuid = '60c6f623-5cad-4ea2-b1a1-274ab0943ba3';
  $display->content['new-60c6f623-5cad-4ea2-b1a1-274ab0943ba3'] = $pane;
  $display->panels['content'][8] = 'new-60c6f623-5cad-4ea2-b1a1-274ab0943ba3';
  $pane = new stdClass();
  $pane->pid = 'new-a929a76d-104c-449b-93a5-9917979d45af';
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
  $pane->uuid = 'a929a76d-104c-449b-93a5-9917979d45af';
  $display->content['new-a929a76d-104c-449b-93a5-9917979d45af'] = $pane;
  $display->panels['content'][9] = 'new-a929a76d-104c-449b-93a5-9917979d45af';
  $pane = new stdClass();
  $pane->pid = 'new-14e0c448-e282-4de2-8cc6-1983954b2a77';
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
  $pane->uuid = '14e0c448-e282-4de2-8cc6-1983954b2a77';
  $display->content['new-14e0c448-e282-4de2-8cc6-1983954b2a77'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-14e0c448-e282-4de2-8cc6-1983954b2a77';
  $pane = new stdClass();
  $pane->pid = 'new-c2e0c948-ebda-4ac4-8691-d96aa97ddf5f';
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
  $pane->uuid = 'c2e0c948-ebda-4ac4-8691-d96aa97ddf5f';
  $display->content['new-c2e0c948-ebda-4ac4-8691-d96aa97ddf5f'] = $pane;
  $display->panels['top'][0] = 'new-c2e0c948-ebda-4ac4-8691-d96aa97ddf5f';
  $pane = new stdClass();
  $pane->pid = 'new-b2f81a32-2d40-4912-af22-af7fab752df6';
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
  $pane->uuid = 'b2f81a32-2d40-4912-af22-af7fab752df6';
  $display->content['new-b2f81a32-2d40-4912-af22-af7fab752df6'] = $pane;
  $display->panels['top'][1] = 'new-b2f81a32-2d40-4912-af22-af7fab752df6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-60c6f623-5cad-4ea2-b1a1-274ab0943ba3';
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
  $display->uuid = '4098b609-e33a-4716-bcf4-03dd798c4c64';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_article_alerts_form_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a24004f2-f427-48a7-8ea3-36637a5dbf56';
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
  $pane->uuid = 'a24004f2-f427-48a7-8ea3-36637a5dbf56';
  $display->content['new-a24004f2-f427-48a7-8ea3-36637a5dbf56'] = $pane;
  $display->panels['content'][0] = 'new-a24004f2-f427-48a7-8ea3-36637a5dbf56';
  $pane = new stdClass();
  $pane->pid = 'new-4fcd6691-e7b3-45f2-ace2-7fd63245fcd3';
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
  $pane->uuid = '4fcd6691-e7b3-45f2-ace2-7fd63245fcd3';
  $display->content['new-4fcd6691-e7b3-45f2-ace2-7fd63245fcd3'] = $pane;
  $display->panels['content'][1] = 'new-4fcd6691-e7b3-45f2-ace2-7fd63245fcd3';
  $pane = new stdClass();
  $pane->pid = 'new-b89fb9ad-484d-4909-bb37-762b3713cc43';
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
  $pane->uuid = 'b89fb9ad-484d-4909-bb37-762b3713cc43';
  $display->content['new-b89fb9ad-484d-4909-bb37-762b3713cc43'] = $pane;
  $display->panels['content'][2] = 'new-b89fb9ad-484d-4909-bb37-762b3713cc43';
  $pane = new stdClass();
  $pane->pid = 'new-d7a51112-d327-43fb-a97b-413c8c87e7fb';
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
  $pane->uuid = 'd7a51112-d327-43fb-a97b-413c8c87e7fb';
  $display->content['new-d7a51112-d327-43fb-a97b-413c8c87e7fb'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-d7a51112-d327-43fb-a97b-413c8c87e7fb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_article_alerts_form'] = $page;

  return $pages;

}
