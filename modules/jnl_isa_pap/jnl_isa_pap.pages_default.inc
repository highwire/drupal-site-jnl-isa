<?php
/**
 * @file
 * jnl_isa_pap.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_pap_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_pap_by_section';
  $page->task = 'page';
  $page->admin_title = 'Highwire Jnl Template PAP By Section';
  $page->admin_description = '';
  $page->path = 'content/early/by/section';
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
  $handler->name = 'page_jnl_isa_pap_by_section_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_pap_by_section';
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
        'keyword' => 'default_journal',
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
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Published Ahead of Print';
  $display->uuid = '46a12954-bad1-4671-a7dc-ba530c913273';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_pap_by_section_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-06b073c1-a637-4485-a6c8-3e5167f94b82';
  $pane->panel = 'content';
  $pane->type = 'snippet';
  $pane->subtype = 'jnl_isa_pap_description_main_snippet';
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
  $pane->uuid = '06b073c1-a637-4485-a6c8-3e5167f94b82';
  $display->content['new-06b073c1-a637-4485-a6c8-3e5167f94b82'] = $pane;
  $display->panels['content'][0] = 'new-06b073c1-a637-4485-a6c8-3e5167f94b82';
  $pane = new stdClass();
  $pane->pid = 'new-75d7b658-5b67-4db4-9587-37fee81516c0';
  $pane->panel = 'content';
  $pane->type = 'highwire_pap';
  $pane->subtype = 'highwire_pap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'context_default_journal_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'highwire_pap_categorization' => 'by section',
    'citation_style' => 'jcore_standard',
    'title_type' => 'prefer_short',
    'title_as_link' => 1,
    'choose_pubdate' => 'ppubdate',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 1,
    'form_build_id' => 'form-bR2gPNu1MA4Rblxo0EHsbYaY7e90W_Sg0TsXGHRaxZk',
    'form_token' => 'uNDy_AGiz9R4CvYc6vw8ub5K0gdygB6-jj462MsMS2Y',
    'form_id' => 'highwire_highwire_pap_content_type_edit_form',
    'show_abstract' => 0,
    'display_access_indicator_text' => 0,
    'show_pager' => 1,
    'pager_limit' => '50',
    'display_markup_snippet' => '',
    'override_title_heading' => 'h2',
    'date_field' => 'field_highwire_a_epubdate',
    'citation_settings_source' => 'corpus_config',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_full',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'full_browse',
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
    ),
    'display_subtitle' => 0,
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
    'display_highlight_image' => '0',
    'highlight_image_style' => '',
    'featured_image_variant' => 'large',
    'featured_image_click_image' => 'colorbox',
    'display_cme_link' => 0,
    'display_author_tooltip' => 0,
    'display_google_scholar_tooltip' => 1,
    'display_pubmed_tooltip' => 1,
    'display_advanced_search_tooltip' => 1,
    'display_author_landing_page_tooltip' => 1,
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
    'pubdate_format_type' => '',
    'pubdate_format_custom' => '',
    'highlight_image_toggle' => 0,
    'display_variants_list_inline' => 1,
    'cpath_prefix' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '75d7b658-5b67-4db4-9587-37fee81516c0';
  $display->content['new-75d7b658-5b67-4db4-9587-37fee81516c0'] = $pane;
  $display->panels['content'][1] = 'new-75d7b658-5b67-4db4-9587-37fee81516c0';
  $pane = new stdClass();
  $pane->pid = 'new-7b1bcbfd-1c39-4ce0-89a5-6874ec247bb7';
  $pane->panel = 'sidebar_right';
  $pane->type = 'snippet';
  $pane->subtype = 'jnl_isa_pap_description_right_snippet';
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
  $pane->uuid = '7b1bcbfd-1c39-4ce0-89a5-6874ec247bb7';
  $display->content['new-7b1bcbfd-1c39-4ce0-89a5-6874ec247bb7'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-7b1bcbfd-1c39-4ce0-89a5-6874ec247bb7';
  $pane = new stdClass();
  $pane->pid = 'new-4262c146-cfee-4aca-b52c-20158f08fb39';
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
  $pane->uuid = '4262c146-cfee-4aca-b52c-20158f08fb39';
  $display->content['new-4262c146-cfee-4aca-b52c-20158f08fb39'] = $pane;
  $display->panels['top'][0] = 'new-4262c146-cfee-4aca-b52c-20158f08fb39';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_pap_by_section'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_pap_early_recent';
  $page->task = 'page';
  $page->admin_title = 'Highwire Jnl Template PAP Early Recent';
  $page->admin_description = '';
  $page->path = 'content/early/recent';
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
  $handler->name = 'page_jnl_isa_pap_early_recent_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_pap_early_recent';
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
        'keyword' => 'default_journal',
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
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Published Ahead of Print';
  $display->uuid = '1610a6a4-ccaf-4321-b068-5bb4d4f6f653';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_pap_early_recent_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1232243e-bab5-4a6b-93c6-ffd0b5813969';
  $pane->panel = 'content';
  $pane->type = 'snippet';
  $pane->subtype = 'jnl_isa_pap_description_main_snippet';
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
  $pane->uuid = '1232243e-bab5-4a6b-93c6-ffd0b5813969';
  $display->content['new-1232243e-bab5-4a6b-93c6-ffd0b5813969'] = $pane;
  $display->panels['content'][0] = 'new-1232243e-bab5-4a6b-93c6-ffd0b5813969';
  $pane = new stdClass();
  $pane->pid = 'new-ccabc566-1c4d-4a04-8366-634996b327aa';
  $pane->panel = 'content';
  $pane->type = 'highwire_pap';
  $pane->subtype = 'highwire_pap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'context_default_journal_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'highwire_pap_categorization' => 'by recent',
    'citation_style' => 'jcore_standard',
    'title_type' => 'prefer_short',
    'title_as_link' => 1,
    'choose_pubdate' => 'ppubdate',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 1,
    'form_build_id' => 'form-rGCMBZ9wcRizbsyZcxp7FEZHB7ikUazSgQ8omHqKv-g',
    'form_token' => 'uNDy_AGiz9R4CvYc6vw8ub5K0gdygB6-jj462MsMS2Y',
    'form_id' => 'highwire_highwire_pap_content_type_edit_form',
    'show_abstract' => 0,
    'display_access_indicator_text' => 0,
    'show_pager' => 1,
    'pager_limit' => '50',
    'display_markup_snippet' => '',
    'override_title_heading' => 'h2',
    'date_field' => 'field_highwire_a_epubdate',
    'citation_settings_source' => 'corpus_config',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_full',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'full_browse',
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
    ),
    'display_subtitle' => 0,
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
    'display_highlight_image' => '0',
    'highlight_image_style' => '',
    'featured_image_variant' => 'large',
    'featured_image_click_image' => 'colorbox',
    'display_cme_link' => 0,
    'display_author_tooltip' => 0,
    'display_google_scholar_tooltip' => 1,
    'display_pubmed_tooltip' => 1,
    'display_advanced_search_tooltip' => 1,
    'display_author_landing_page_tooltip' => 1,
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
    'pubdate_format_type' => '',
    'pubdate_format_custom' => '',
    'highlight_image_toggle' => 0,
    'display_variants_list_inline' => 1,
    'cpath_prefix' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ccabc566-1c4d-4a04-8366-634996b327aa';
  $display->content['new-ccabc566-1c4d-4a04-8366-634996b327aa'] = $pane;
  $display->panels['content'][1] = 'new-ccabc566-1c4d-4a04-8366-634996b327aa';
  $pane = new stdClass();
  $pane->pid = 'new-26a1d463-dd2f-417a-ae6a-a22c83217846';
  $pane->panel = 'sidebar_right';
  $pane->type = 'snippet';
  $pane->subtype = 'jnl_isa_pap_description_right_snippet';
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
  $pane->uuid = '26a1d463-dd2f-417a-ae6a-a22c83217846';
  $display->content['new-26a1d463-dd2f-417a-ae6a-a22c83217846'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-26a1d463-dd2f-417a-ae6a-a22c83217846';
  $pane = new stdClass();
  $pane->pid = 'new-57448a71-a872-4e9b-8eb7-c5d2aa00cc2c';
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
  $pane->uuid = '57448a71-a872-4e9b-8eb7-c5d2aa00cc2c';
  $display->content['new-57448a71-a872-4e9b-8eb7-c5d2aa00cc2c'] = $pane;
  $display->panels['top'][0] = 'new-57448a71-a872-4e9b-8eb7-c5d2aa00cc2c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_pap_early_recent'] = $page;

  return $pages;

}
