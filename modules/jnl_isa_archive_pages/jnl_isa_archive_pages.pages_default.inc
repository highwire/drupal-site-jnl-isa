<?php
/**
 * @file
 * jnl_isa_archive_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_archive_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_issue_archive';
  $page->task = 'page';
  $page->admin_title = 'isa Issue Archive';
  $page->admin_description = '';
  $page->path = 'content/by/year/!year';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'year' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
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
  $handler->name = 'page_jnl_isa_issue_archive_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_issue_archive';
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
        'identifier' => 'Default Journal',
        'keyword' => 'node',
        'name' => 'default_journal',
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
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $title_year = arg(3);
  $jcode = variable_get('highwire_default_jcode', FALSE);
  $years = highwire_issue_archive_get_years('field_highwire_a_ppubdate', $jcode,'');
  $display->title = 'Archive of all online content ' . ((in_array($title_year, $years)) ? $title_year : '');
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'highwire_citation_image_toggle';
    $pane->subtype = 'highwire_citation_image_toggle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'toggle_highlight_image' => '0',
      'citation_list_selector' => 'div.highwire-cite-highlight',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'float-me-right no-margin-bottom',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<span class = "issue-archive-link link-volume"><a href="/content/by/volume">Browse by Volumes </a></span>',
      'format' => 'highwire_full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['content'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'content';
    $pane->type = 'highwire_issue_archive_date_nav';
    $pane->subtype = 'highwire_issue_archive_date_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'empty',
      'override_title' => 0,
      'override_title_text' => '',
      'year_url_prefix' => 'content/by/year/',
      'highwire_date_type' => '',
      'slider_speed' => '500',
      'slider_toDisplay' => '20',
      'slider_toDisplay_min' => '1',
      'slider_moveSlides' => '0',
      'slider_slideWidth' => '68',
      'slider_slideMargin' => '0',
      'slider_controls' => 1,
      'slider_infiniteLoop' => 1,
      'slider_hideControlOnEnd' => 1,
      'slider_prevText' => '<i class="icon-chevron-left"></i><span class="element-invisible">Previous page</span>',
      'slider_nextText' => '<span class="element-invisible">Next page</span><i class="icon-chevron-right"></i>',
      'slider_pager' => 0,
      'slider_styles' => 0,
      'slider_responsive' => 1,
      'slider_touchEnabled' => 1,
      'slider_oneToOneTouch' => 1,
    );
    $pane->cache = array(
      'method' => 'panels_hash_cache',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => array(
          'args' => 'args',
          'context' => 0,
          'user' => 0,
          'user_role' => 0,
          'url' => 0,
          'path' => 0,
        ),
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['content'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'content';
    $pane->type = 'highwire_issue_archive';
    $pane->subtype = 'highwire_issue_archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'argument_type' => 'year',
      'override_title' => 0,
      'override_title_text' => '',
      'issue_metadata_toggle' => 1,
      'issue_metadata_format' => '<span class="date-day-ordinal-[node:ppubdate:j]">[node:ppubdate:j]</span>: Vol [node:field_highwire_a_vol_num], Issue [node:field_highwire_a_issue_num]',
      'buttons' => NULL,
      'context' => 'empty',
      'aligner_start' => NULL,
      'aligner_stop' => NULL,
      'override_title_markup' => NULL,
      'sorting' => 'DESC',
      'issue_grouping' => 'date',
      'issue_grouping_xpath' => '',
      'issue_grouping_date_format' => 'F',
      'issue_cover_style' => '',
      'token_help' => NULL,
      'date_type' => 'field_highwire_a_ppubdate',
      'form_build_id' => 'form-b4VmNt1fRTatcVrukREemgVL3QsfLmACp00cxzBcrTU',
      'form_token' => 'KWb2qVpL11-sOXtG0IGETwKRCoHgmfvUw688q5QklDE',
      'form_id' => 'highwire_highwire_issue_archive_content_type_edit_form',
      'override_title_heading' => 'h2',
      'hide_issue_grouping_label' => 0,
      'issue_published_date' => NULL,
      'display_type' => 'citation',
      'highwire_citation_settings' => array(
        'citation_settings_source' => 'corpus_config',
        'citation_manager_wrapper' => array(
          'citation_manager_citation' => 'jcore_list_full',
        ),
        'corpus_config_wrapper' => array(
          'corpus_config_citation_context' => 'archive',
        ),
        'citation_style' => 'mla',
        'cache_enabled' => 0,
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
            'selector' => 1,
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
            'citation_style' => 'ama',
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
            'selector' => 1,
            'citation_style' => 'highwire_issue_archives',
            'cache_enabled' => 1,
            'cache_time' => '86400',
            'title_type' => 'none',
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
            'highlight_image_toggle' => 1,
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
            'display_highlight_image' => 1,
            'highlight_image_style' => 'medium',
            'featured_image_click_image' => 'node',
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
            'display_google_scholar_tooltip' => 0,
            'display_pubmed_tooltip' => 0,
            'display_advanced_search_tooltip' => 0,
            'display_author_landing_page_tooltip' => 0,
            'display_orcid_tooltip' => 0,
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
            'citation_style' => 'ama',
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
      'issue_title_hide' => 0,
    );
    $pane->cache = array(
      'method' => 'panels_hash_cache',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => array(
          'args' => 'args',
          'context' => 0,
          'user' => 0,
          'user_role' => 0,
          'url' => 0,
          'path' => 0,
        ),
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['content'][3] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'content';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_issue_archive_footer',
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
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['content'][4] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'content';
    $pane->type = 'highwire_issue_archive_pager';
    $pane->subtype = 'highwire_issue_archive_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'argument_type' => 'year',
      'override_title' => 0,
      'override_title_text' => '',
      'year_url_prefix' => 'content/by/year/',
      'volume_url_prefix' => 'content/by/volume/',
      'previous_link_title' => '',
      'previous_link_icon' => 'icon-circle-arrow-left',
      'next_link_title' => '',
      'next_link_icon' => 'icon-circle-arrow-right',
      'context' => 'empty',
    );
    $pane->cache = array(
      'method' => 'panels_hash_cache',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => array(
          'args' => 'args',
          'context' => 0,
          'user' => 0,
          'user_role' => 0,
          'url' => 0,
          'path' => 0,
        ),
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['content'][5] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'content';
    $pane->type = 'highwire_back_to_top';
    $pane->subtype = 'highwire_back_to_top';
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
      'form_build_id' => 'form-XJvseBVMB10yt-DMIBMdkHSATOY4YJw_XaN_-7hte1E',
      'form_token' => 'YVY2_rme9EhSyTW8PW8YPWA_jodgx2kDGYMB147UWfE',
      'form_id' => 'highwire_highwire_back_to_top_content_type_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['content'][6] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'sidebar_right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'jnl_isa_arcpage';
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
    $display->content['new-8'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
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
      'override_title_text' => 'Archive of all online content',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['top'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'top';
    $pane->type = 'highwire_content_range';
    $pane->subtype = 'highwire_content_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'date_format' => 'F d, Y',
      'override_title' => 0,
      'override_title_text' => '',
      'buttons' => NULL,
      'context' => 'empty',
      'aligner_start' => NULL,
      'aligner_stop' => NULL,
      'override_title_markup' => NULL,
      'date_field' => 'field_highwire_a_ppubdate',
      'form_build_id' => 'form-kJW7cyG9v2DR8ugeoddTma7sjgH0arlzIsK6yrClkpE',
      'form_token' => 'Nyeq_zuc7vBSjpxk3LyQCHQqjz_W2VGJa1rtq3N1Z2c',
      'form_id' => 'highwire_highwire_content_range_content_type_edit_form',
    );
    $pane->cache = array(
      'method' => 'panels_hash_cache',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => array(
          'args' => 0,
          'context' => 0,
          'user' => 0,
          'user_role' => 0,
          'url' => 0,
          'path' => 0,
        ),
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-page-title-suffix',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['top'][1] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'top';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_issue_archive_header',
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
    $display->content['new-11'] = $pane;
    $display->panels['top'][2] = 'new-11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_issue_archive'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_issue_archive_volume';
  $page->task = 'page';
  $page->admin_title = 'isa  Issue Archive Volume';
  $page->admin_description = '';
  $page->path = 'content/by/volume/!volume';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'volume' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
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
  $handler->name = 'page_jnl_isa_issue_archive_volume_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_issue_archive_volume';
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
      1 => array(
        'identifier' => 'Default Journal',
        'keyword' => 'node',
        'name' => 'default_journal',
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
      'content' => NULL,
      'sidebar_right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $title_volume = arg(3);
  $volume_data = highwire_issue_archive_get_vol_nums($jcode);
  $display->title = ((isset($volume_data[$jcode]) && !in_array($title_volume, $volume_data[$jcode])) ? 'Archive of all online content' : 'Archive of all online content Volume ' . $title_volume);
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'content';
    $pane->type = 'highwire_citation_image_toggle';
    $pane->subtype = 'highwire_citation_image_toggle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'toggle_highlight_image' => '0',
      'citation_list_selector' => 'div.highwire-cite-highlight',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'float-me-right no-margin-bottom',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['content'][0] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<span class="issue-archive-link link-year"><a href="/content/by/year">Browse by Date</a></span>',
      'format' => 'highwire_full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['content'][1] = 'new-13';
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'content';
    $pane->type = 'highwire_issue_archive_vol_nav';
    $pane->subtype = 'highwire_issue_archive_vol_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'empty',
      'override_title' => 0,
      'override_title_text' => '',
      'volume_url_prefix' => 'content/by/volume/',
      'slider_speed' => '500',
      'slider_toDisplay' => '20',
      'slider_toDisplay_min' => '1',
      'slider_moveSlides' => '0',
      'slider_slideWidth' => '50',
      'slider_slideMargin' => '0',
      'slider_controls' => 1,
      'slider_infiniteLoop' => 1,
      'slider_hideControlOnEnd' => 1,
      'slider_prevText' => '<i class="icon-chevron-left"></i><span class="element-invisible">Previous page</span>',
      'slider_nextText' => '<span class="element-invisible">Next page</span><i class="icon-chevron-right"></i>',
      'slider_pager' => 0,
      'slider_styles' => 0,
      'slider_responsive' => 1,
      'slider_touchEnabled' => 1,
      'slider_oneToOneTouch' => 1,
    );
    $pane->cache = array(
      'method' => 'panels_hash_cache',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => array(
          'args' => 'args',
          'context' => 0,
          'user' => 0,
          'user_role' => 0,
          'url' => 0,
          'path' => 0,
        ),
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['content'][2] = 'new-14';
    $pane = new stdClass();
    $pane->pid = 'new-15';
    $pane->panel = 'content';
    $pane->type = 'highwire_issue_archive';
    $pane->subtype = 'highwire_issue_archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'argument_type' => 'volume',
      'override_title' => 0,
      'override_title_text' => '',
      'buttons' => NULL,
      'aligner_start' => NULL,
      'aligner_stop' => NULL,
      'override_title_markup' => NULL,
      'issue_metadata_toggle' => 1,
      'issue_metadata' => NULL,
      'form_build_id' => 'form-4aLSQ0rT3n7AJ1tTJGsu1eImkWYmJtW58zo0mRfvDHI',
      'form_token' => 'GMYQCYe3z1eMVx7wJJ2z1KkJwpTdD7AIG3CebOHXIYI',
      'form_id' => 'highwire_highwire_issue_archive_content_type_edit_form',
      'issue_metadata_format' => '[node:field_highwire_a_ppubdate] : Vol [node:field_highwire_a_vol_num], Issue [node:field_highwire_a_issue_num]',
      'context' => 'context_current_issue_1',
      'override_title_heading' => 'h2',
      'sorting' => 'DESC',
      'issue_grouping' => 'date',
      'issue_grouping_xpath' => '',
      'issue_grouping_date_format' => 'F',
      'hide_issue_grouping_label' => 0,
      'date_type' => 'field_highwire_a_ppubdate',
      'issue_published_date' => NULL,
      'display_type' => 'citation',
      'highwire_citation_settings' => array(
        'citation_settings_source' => 'corpus_config',
        'citation_manager_wrapper' => array(
          'citation_manager_citation' => 'jcore_list_full',
        ),
        'corpus_config_wrapper' => array(
          'corpus_config_citation_context' => 'archive',
        ),
        'citation_style' => 'mla',
        'cache_enabled' => 0,
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
            'selector' => 1,
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
            'citation_style' => 'ama',
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
            'selector' => 1,
            'citation_style' => 'highwire_issue_archives',
            'cache_enabled' => 0,
            'cache_time' => '86400',
            'title_type' => 'none',
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
            'highlight_image_toggle' => 1,
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
            'display_highlight_image' => 1,
            'highlight_image_style' => 'medium',
            'featured_image_click_image' => 'node',
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
            'display_google_scholar_tooltip' => 0,
            'display_pubmed_tooltip' => 0,
            'display_advanced_search_tooltip' => 0,
            'display_author_landing_page_tooltip' => 0,
            'display_orcid_tooltip' => 0,
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
            'citation_style' => 'ama',
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
      'issue_cover_style' => '',
      'issue_title_hide' => 0,
    );
    $pane->cache = array(
      'method' => 'panels_hash_cache',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => array(
          'args' => 'args',
          'context' => 0,
          'user' => 0,
          'user_role' => 0,
          'url' => 0,
          'path' => 0,
        ),
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-15'] = $pane;
    $display->panels['content'][3] = 'new-15';
    $pane = new stdClass();
    $pane->pid = 'new-16';
    $pane->panel = 'content';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_issue_archive_volume_footer',
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
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-16'] = $pane;
    $display->panels['content'][4] = 'new-16';
    $pane = new stdClass();
    $pane->pid = 'new-17';
    $pane->panel = 'content';
    $pane->type = 'highwire_issue_archive_pager';
    $pane->subtype = 'highwire_issue_archive_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'argument_type' => 'volume',
      'override_title' => 0,
      'override_title_text' => '',
      'year_url_prefix' => 'content/by/year/',
      'volume_url_prefix' => 'content/by/volume/',
      'previous_link_title' => '',
      'previous_link_icon' => 'icon-circle-arrow-left',
      'next_link_title' => '',
      'next_link_icon' => 'icon-circle-arrow-right',
    );
    $pane->cache = array(
      'method' => 'panels_hash_cache',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => array(
          'args' => 'args',
          'context' => 0,
          'user' => 0,
          'user_role' => 0,
          'url' => 0,
          'path' => 0,
        ),
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-17'] = $pane;
    $display->panels['content'][5] = 'new-17';
    $pane = new stdClass();
    $pane->pid = 'new-18';
    $pane->panel = 'content';
    $pane->type = 'highwire_back_to_top';
    $pane->subtype = 'highwire_back_to_top';
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
      'form_build_id' => 'form-aQCFLPUv9D9e1R1gpP7ovyHSnHcgUYw5yEXg2Qdny4Y',
      'form_token' => 'YVY2_rme9EhSyTW8PW8YPWA_jodgx2kDGYMB147UWfE',
      'form_id' => 'highwire_highwire_back_to_top_content_type_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $display->content['new-18'] = $pane;
    $display->panels['content'][6] = 'new-18';
    $pane = new stdClass();
    $pane->pid = 'new-19';
    $pane->panel = 'sidebar_right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'jnl_isa_arcpage';
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
    $display->content['new-19'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-19';
    $pane = new stdClass();
    $pane->pid = 'new-20';
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
    $display->content['new-20'] = $pane;
    $display->panels['top'][0] = 'new-20';
    $pane = new stdClass();
    $pane->pid = 'new-21';
    $pane->panel = 'top';
    $pane->type = 'highwire_content_range';
    $pane->subtype = 'highwire_content_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'date_format' => 'F d, Y',
      'override_title' => 0,
      'override_title_text' => '',
      'buttons' => NULL,
      'context' => 'empty',
      'aligner_start' => NULL,
      'aligner_stop' => NULL,
      'override_title_markup' => NULL,
      'date_field' => 'field_highwire_a_ppubdate',
      'form_build_id' => 'form-Pc5JWBb_vEDKPxI2WRbtqPCl7ElzwqRRAffHTgJn3w8',
      'form_token' => 'Nyeq_zuc7vBSjpxk3LyQCHQqjz_W2VGJa1rtq3N1Z2c',
      'form_id' => 'highwire_highwire_content_range_content_type_edit_form',
    );
    $pane->cache = array(
      'method' => 'panels_hash_cache',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => array(
          'args' => 0,
          'context' => 0,
          'user' => 0,
          'user_role' => 0,
          'url' => 0,
          'path' => 0,
        ),
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-page-title-suffix',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-21'] = $pane;
    $display->panels['top'][1] = 'new-21';
    $pane = new stdClass();
    $pane->pid = 'new-22';
    $pane->panel = 'top';
    $pane->type = 'snippet';
    $pane->subtype = 'snippet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'snippet' => 'jnl_isa_issue_archive_volume_header',
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
    $display->content['new-22'] = $pane;
    $display->panels['top'][2] = 'new-22';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-21';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_issue_archive_volume'] = $page;

  return $pages;

}
