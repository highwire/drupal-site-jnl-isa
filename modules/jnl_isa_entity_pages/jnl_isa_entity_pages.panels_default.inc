<?php
/**
 * @file
 * jnl_isa_entity_pages.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function jnl_isa_entity_pages_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_accordion';
  $mini->category = 'Article page';
  $mini->admin_title = 'Article Accordion';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    1 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => array(
        'region_accordion_id' => 'highwire_article_accordion_container',
        'active' => '0',
        'collapsible' => 0,
        'animated' => 'slide',
        'autoHeight' => 'false',
      ),
      'default' => NULL,
    ),
    'middle' => array(
      'style' => 'accordion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8636908b-ce8b-4382-a209-c26dc0562c2e';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_accordion';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8d0f6cd9-9d70-49a3-8fe4-c9db321220db';
  $pane->panel = 'middle';
  $pane->type = 'highwire_related_articles';
  $pane->subtype = 'highwire_related_articles';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => '<i class="icon-caret-right"></i> Related Articles',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'jcore_title_only',
    'title_type' => 'prefer_short',
    'title_as_link' => 1,
    'choose_pubdate' => 'ppubdate',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'display_list' => 1,
    'no_results_text' => 'No related articles found.',
    'external_links' => array(
      'pubmed' => 'pubmed',
      'scopus' => 'scopus',
      'google' => 'google',
      'isi' => 0,
    ),
    'form_build_id' => 'form-o8TovYK-TdoNjFc1ibgD7w30HxcNEY8gZsc_Bwnhj5Q',
    'form_token' => 'uFbmLtV0j1IYAZkR5ji0d80DJdlPdIPZokT_wKHS4cE',
    'form_id' => 'highwire_highwire_related_articles_content_type_edit_form',
    'display_markup_snippet' => '',
    'display_author_tooltip' => 0,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_title_only',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => array(),
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 1,
          'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 0,
        'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'featured_image_click_image' => 'nothing',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 0,
          'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
    'cpath_prefix' => '/content',
    'highlight_image_toggle' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_collapsed' => 0,
    ),
    'style' => 'accordion',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0f6cd9-9d70-49a3-8fe4-c9db321220db';
  $display->content['new-8d0f6cd9-9d70-49a3-8fe4-c9db321220db'] = $pane;
  $display->panels['middle'][0] = 'new-8d0f6cd9-9d70-49a3-8fe4-c9db321220db';
  $pane = new stdClass();
  $pane->pid = 'new-9369e66e-7dbf-4f02-b272-0cc325882236';
  $pane->panel = 'middle';
  $pane->type = 'highwire_cited_by';
  $pane->subtype = 'highwire_cited_by';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => '<i class="icon-caret-right"></i> Cited By...',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'display_list' => 1,
    'title_with_link' => 1,
    'show_variant_links' => 0,
    'no_results_text' => 'No citing articles found.',
    'external_links' => array(
      'scopus' => 'scopus',
      'google' => 'google',
      'isi' => 0,
      'crossref' => 0,
    ),
    'form_build_id' => 'form-0h33yU-rgE5TnOGamaH2vM4gXOrnPkzY8q4o9Ke2JzY',
    'form_token' => 'qfh_d3Svzeh8lkRXaq2rA1wxnippzZJwjS5geJK1_CU',
    'form_id' => 'highwire_highwire_cited_by_content_type_edit_form',
    'override_title_heading' => 'h2',
    'show_logo' => 0,
    'isi_title' => 'Web of Science !COUNT',
    'scopus_title' => 'Scopus !COUNT',
    'google_title' => 'Google Scholar',
    'crossref_title' => 'Crossref !COUNT',
    'crossref_item_limit' => '10',
    'crossref_landing_url' => 'crossref-forward-links',
    'show_more_link' => 0,
    'more_url_text' => 'More...',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'accordion',
    'settings' => array(
      'pane_collapsed' => 1,
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9369e66e-7dbf-4f02-b272-0cc325882236';
  $display->content['new-9369e66e-7dbf-4f02-b272-0cc325882236'] = $pane;
  $display->panels['middle'][1] = 'new-9369e66e-7dbf-4f02-b272-0cc325882236';
  $pane = new stdClass();
  $pane->pid = 'new-59c0158e-ba5e-4257-8c6c-5b2399e5afb9';
  $pane->panel = 'middle';
  $pane->type = 'highwire_articles_in_toc';
  $pane->subtype = 'highwire_articles_in_toc';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => array(
      0 => 'empty',
      1 => 'requiredcontext_entity:node_1',
      2 => 'empty',
    ),
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => '<i class="icon-caret-right"></i> More in this TOC Section',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'toc_section' => '',
    'article_citation' => array(
      'citation_settings_source' => 'citation_manager',
      'citation_manager_wrapper' => array(
        'citation_manager_citation' => 'jcore_list_title_only',
      ),
      'corpus_config_wrapper' => array(
        'corpus_config_citation_context' => array(),
      ),
      'citation_style' => 'jcore_title_only',
      'cache_enabled' => 1,
      'cache_time' => '600',
      'title_type' => 'prefer_short',
      'short_title_options' => array(
        'char_count' => '50',
        'add_ellipsis' => 0,
      ),
      'title_as_link' => 1,
      'display_subtitle' => 0,
      'choose_pubdate' => 'ppubdate',
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
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 0,
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
          'display_highlight_image' => 0,
          'highlight_image_style' => '',
          'featured_image_click_image' => 'nothing',
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
            'pdf_download' => array(
              'display_pdf_download' => 0,
              'pdf_download_icon' => 'icon-cloud-download',
              'pdf_download_text' => 'PDF',
            ),
            'include_on_behalf' => 0,
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
    'pager_settings' => array(
      'show_more' => 1,
      'show_more_text' => 'Show more [toc_section_plural]',
      'show_more_link' => 'content/by/section/',
      'limit' => '3',
      'display_pager' => 0,
      'items_per_page' => '0',
    ),
    'form_build_id' => 'form-fEVtYuaHv00VT-7vlaHUHU61G8WY6wcTUCi1mS6n3vg',
    'form_token' => 'baUUJNpldepbnaYkP_kmWgAP8joW217yGpz6jKN21g4',
    'form_id' => 'highwire_articles_in_toc_content_type_edit_form',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_collapsed' => 1,
    ),
    'style' => 'accordion',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '59c0158e-ba5e-4257-8c6c-5b2399e5afb9';
  $display->content['new-59c0158e-ba5e-4257-8c6c-5b2399e5afb9'] = $pane;
  $display->panels['middle'][2] = 'new-59c0158e-ba5e-4257-8c6c-5b2399e5afb9';
  $pane = new stdClass();
  $pane->pid = 'new-85b71232-a4a3-4d3d-b242-82aea7df082d';
  $pane->panel = 'middle';
  $pane->type = 'highwire_simillar_articles';
  $pane->subtype = 'highwire_simillar_articles';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => '<i class="icon-caret-right"></i> Similar Articles',
    'number_per_page' => '5',
    'show_pager' => 0,
    'more_link_path' => 'similar/articles',
    'more_link' => 1,
    'empty_message' => 'No similar articles are available.',
    'citation_style' => 'jcore_standard',
    'title_type' => 'prefer_short',
    'title_as_link' => 0,
    'display_subtitle' => 0,
    'choose_pubdate' => 'ppubdate',
    'display_markup_snippet' => '',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_cme_link' => 0,
    'display_access_indicator_text' => 0,
    'display_highlight_image' => '0',
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'display_author_tooltip' => 0,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_title_only',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => array(),
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
    ),
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
    'highlight_image_style' => '',
    'featured_image_variant' => 'large',
    'featured_image_click_image' => 'colorbox',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 1,
          'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 0,
        'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'featured_image_click_image' => 'nothing',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 0,
          'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 1,
        'cpath_prefix' => '/content',
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
    'cpath_prefix' => '/content',
    'ajax_loading_icon_classes' => 'icon-spinner icon-spin icon-2x',
    'ajax_loading_text' => '',
    'highlight_image_toggle' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_collapsed' => 1,
    ),
    'style' => 'accordion',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '85b71232-a4a3-4d3d-b242-82aea7df082d';
  $display->content['new-85b71232-a4a3-4d3d-b242-82aea7df082d'] = $pane;
  $display->panels['middle'][3] = 'new-85b71232-a4a3-4d3d-b242-82aea7df082d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_accordion'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_art_alert';
  $mini->category = '';
  $mini->admin_title = 'jnl_isa_art_alert';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Highwire Alerts User Context',
      'keyword' => 'highwire_alerts_user',
      'name' => 'highwire_alerts_user',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Add Alert';
  $display->uuid = '72c2d8c8-2647-41b7-8312-493aaf2fd4f2';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_art_alert';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-70da24a8-3309-46ae-870c-aa729a648f69';
  $pane->panel = 'middle';
  $pane->type = 'article_add_form';
  $pane->subtype = 'article_add_form';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'show_citation' => 0,
    'manage_alerts_path' => 'alerts',
    'citation' => array(
      'citation_style' => 'mla',
      'title_type' => 'full',
      'title_as_link' => 0,
      'display_subtitle' => 0,
      'choose_pubdate' => 'ppubdate',
      'display_markup_snippet' => '',
      'display_original_link' => 0,
      'display_access_indicator' => 0,
      'display_access_indicator_text' => 0,
      'display_variants' => 0,
      'display_supplements' => 0,
      'display_abstract_tooltip' => 0,
      'display_author_tooltip' => 0,
    ),
    'enabled_types' => array(
      'citedby' => 'citedby',
      'correction' => 'correction',
      'eletter' => 'eletter',
    ),
    'show_frequency' => 1,
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
      1 => 'context_highwire_alerts_user_1',
    ),
    'override_title' => 1,
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
  $pane->uuid = '70da24a8-3309-46ae-870c-aa729a648f69';
  $display->content['new-70da24a8-3309-46ae-870c-aa729a648f69'] = $pane;
  $display->panels['middle'][0] = 'new-70da24a8-3309-46ae-870c-aa729a648f69';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_art_alert'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_art_email';
  $mini->category = 'Article toolbox';
  $mini->admin_title = 'Email Form';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Email This Article';
  $display->uuid = 'cd3a2b23-5be8-4a79-86f5-5209c98150e3';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_art_email';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c3aab800-1883-49a1-b16e-90dd858ea5f8';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'forward-form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c3aab800-1883-49a1-b16e-90dd858ea5f8';
  $display->content['new-c3aab800-1883-49a1-b16e-90dd858ea5f8'] = $pane;
  $display->panels['middle'][0] = 'new-c3aab800-1883-49a1-b16e-90dd858ea5f8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_art_email'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_art_info';
  $mini->category = 'Article page';
  $mini->admin_title = 'Article Info';
  $mini->admin_description = 'Article Info pane';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'Journal',
      'keyword' => 'journal',
      'name' => 'entity_from_field:field_highwire_a_journal-node-node',
      'delta' => 0,
      'context' => 'requiredcontext_entity:node_1',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'highwire_1col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8f5d5334-212a-49a4-b4a8-d31282e19682';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_art_info';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d4ede1d6-bfba-4b95-b9bc-fd73476a5ea5';
  $pane->panel = 'content';
  $pane->type = 'highwire_doi';
  $pane->subtype = 'highwire_doi';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'DOI',
    'link_title' => '',
    'link_target' => '_blank',
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = 'd4ede1d6-bfba-4b95-b9bc-fd73476a5ea5';
  $display->content['new-d4ede1d6-bfba-4b95-b9bc-fd73476a5ea5'] = $pane;
  $display->panels['content'][0] = 'new-d4ede1d6-bfba-4b95-b9bc-fd73476a5ea5';
  $pane = new stdClass();
  $pane->pid = 'new-f2fc9533-b8a9-470a-b72e-34e6a249e0cb';
  $pane->panel = 'content';
  $pane->type = 'highwire_pubmed';
  $pane->subtype = 'highwire_pubmed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'PubMed',
    'link_title' => '',
    'link_target' => '_blank',
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = 'f2fc9533-b8a9-470a-b72e-34e6a249e0cb';
  $display->content['new-f2fc9533-b8a9-470a-b72e-34e6a249e0cb'] = $pane;
  $display->panels['content'][1] = 'new-f2fc9533-b8a9-470a-b72e-34e6a249e0cb';
  $pane = new stdClass();
  $pane->pid = 'new-d0752437-bb04-43dd-a422-0b78bb53f1e4';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'hr.blank',
    'title' => '',
    'body' => '<hr class="blank" />',
    'format' => 'highwire_full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd0752437-bb04-43dd-a422-0b78bb53f1e4';
  $display->content['new-d0752437-bb04-43dd-a422-0b78bb53f1e4'] = $pane;
  $display->panels['content'][2] = 'new-d0752437-bb04-43dd-a422-0b78bb53f1e4';
  $pane = new stdClass();
  $pane->pid = 'new-c5376a9d-c9a2-40a6-8ce4-c2be4a389b59';
  $pane->panel = 'content';
  $pane->type = 'highwire_journal_publisher';
  $pane->subtype = 'highwire_journal_publisher';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'url' => '',
    'label' => 'Published By',
    'link_title' => '',
    'link_target' => '_blank',
    'context' => 'relationship_entity_from_field:field_highwire_a_journal-node-node_1',
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
  $pane->uuid = 'c5376a9d-c9a2-40a6-8ce4-c2be4a389b59';
  $display->content['new-c5376a9d-c9a2-40a6-8ce4-c2be4a389b59'] = $pane;
  $display->panels['content'][3] = 'new-c5376a9d-c9a2-40a6-8ce4-c2be4a389b59';
  $pane = new stdClass();
  $pane->pid = 'new-57927f98-d195-4e66-bf80-b19348a2914d';
  $pane->panel = 'content';
  $pane->type = 'highwire_issn';
  $pane->subtype = 'highwire_issn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'issn_type' => 'pissn',
    'label' => 'Print ISSN',
    'link_title' => '',
    'link_target' => '_blank',
    'context' => 'relationship_entity_from_field:field_highwire_a_journal-node-node_1',
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
  $pane->uuid = '57927f98-d195-4e66-bf80-b19348a2914d';
  $display->content['new-57927f98-d195-4e66-bf80-b19348a2914d'] = $pane;
  $display->panels['content'][4] = 'new-57927f98-d195-4e66-bf80-b19348a2914d';
  $pane = new stdClass();
  $pane->pid = 'new-d29bb321-2ca0-444e-89b8-ac34187cb0d6';
  $pane->panel = 'content';
  $pane->type = 'highwire_issn';
  $pane->subtype = 'highwire_issn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'issn_type' => 'eissn',
    'label' => 'Online ISSN',
    'link_title' => '',
    'link_target' => '_blank',
    'context' => 'relationship_entity_from_field:field_highwire_a_journal-node-node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd29bb321-2ca0-444e-89b8-ac34187cb0d6';
  $display->content['new-d29bb321-2ca0-444e-89b8-ac34187cb0d6'] = $pane;
  $display->panels['content'][5] = 'new-d29bb321-2ca0-444e-89b8-ac34187cb0d6';
  $pane = new stdClass();
  $pane->pid = 'new-0a98b5b8-42e6-4e76-b41e-59cde3ada4b7';
  $pane->panel = 'content';
  $pane->type = 'highwire_publication_history';
  $pane->subtype = 'highwire_publication_history';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'date_format' => 'F j, Y',
    'date_select' => 'epubdate',
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'label' => 'History',
    'label_epubdate' => 'Published online',
    'label_ppubdate' => 'Published in print',
    'label_fpubdate' => 'Published first',
    'label_combine' => 'Published',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '0a98b5b8-42e6-4e76-b41e-59cde3ada4b7';
  $display->content['new-0a98b5b8-42e6-4e76-b41e-59cde3ada4b7'] = $pane;
  $display->panels['content'][6] = 'new-0a98b5b8-42e6-4e76-b41e-59cde3ada4b7';
  $pane = new stdClass();
  $pane->pid = 'new-db0b077a-efaa-4a00-8900-c4644bbda8cf';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'hr.blank',
    'title' => '',
    'body' => '<hr class="blank" />',
    'format' => 'highwire_full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'db0b077a-efaa-4a00-8900-c4644bbda8cf';
  $display->content['new-db0b077a-efaa-4a00-8900-c4644bbda8cf'] = $pane;
  $display->panels['content'][7] = 'new-db0b077a-efaa-4a00-8900-c4644bbda8cf';
  $pane = new stdClass();
  $pane->pid = 'new-aba3a0c1-225d-4aad-81a1-a990836898a5';
  $pane->panel = 'content';
  $pane->type = 'highwire_versions';
  $pane->subtype = 'highwire_versions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'date_format' => 'F j, Y - H:i',
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Article Versions',
    'older_version_label' => 'previous version',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'aba3a0c1-225d-4aad-81a1-a990836898a5';
  $display->content['new-aba3a0c1-225d-4aad-81a1-a990836898a5'] = $pane;
  $display->panels['content'][8] = 'new-aba3a0c1-225d-4aad-81a1-a990836898a5';
  $pane = new stdClass();
  $pane->pid = 'new-f5c0c53c-b592-417f-868e-2fbb967a1f26';
  $pane->panel = 'content';
  $pane->type = 'highwire_copyright';
  $pane->subtype = 'highwire_copyright';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'Copyright & Usage',
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = 'f5c0c53c-b592-417f-868e-2fbb967a1f26';
  $display->content['new-f5c0c53c-b592-417f-868e-2fbb967a1f26'] = $pane;
  $display->panels['content'][9] = 'new-f5c0c53c-b592-417f-868e-2fbb967a1f26';
  $pane = new stdClass();
  $pane->pid = 'new-7ed43cde-9c69-402d-9fc8-ecacce301bd7';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'hr.blank',
    'title' => '',
    'body' => '<hr class="blank" />',
    'format' => 'highwire_full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '7ed43cde-9c69-402d-9fc8-ecacce301bd7';
  $display->content['new-7ed43cde-9c69-402d-9fc8-ecacce301bd7'] = $pane;
  $display->panels['content'][10] = 'new-7ed43cde-9c69-402d-9fc8-ecacce301bd7';
  $pane = new stdClass();
  $pane->pid = 'new-d39d72b0-e041-426a-9b28-a068d2389610';
  $pane->panel = 'content';
  $pane->type = 'highwire_contributors';
  $pane->subtype = 'highwire_contributors';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'Other Contributors',
    'format' => 'fullname_role_aff',
    'custom' => '',
    'filter' => '//*[@nlm:contrib-type!=\'author\']',
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'd39d72b0-e041-426a-9b28-a068d2389610';
  $display->content['new-d39d72b0-e041-426a-9b28-a068d2389610'] = $pane;
  $display->panels['content'][11] = 'new-d39d72b0-e041-426a-9b28-a068d2389610';
  $pane = new stdClass();
  $pane->pid = 'new-15e3965b-2531-407a-8c50-0e0da3b7e09f';
  $pane->panel = 'content';
  $pane->type = 'highwire_variant_link';
  $pane->subtype = 'highwire_variant_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'variant' => 'disclosures',
    'prelabel' => '',
    'label' => 'Disclosure',
    'link_icon' => 'icon-link',
    'target' => '',
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'link_icon_position' => 'before',
    'link_classes' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '15e3965b-2531-407a-8c50-0e0da3b7e09f';
  $display->content['new-15e3965b-2531-407a-8c50-0e0da3b7e09f'] = $pane;
  $display->panels['content'][12] = 'new-15e3965b-2531-407a-8c50-0e0da3b7e09f';
  $pane = new stdClass();
  $pane->pid = 'new-d3e84ad1-130a-4244-93f9-7fad09f42c27';
  $pane->panel = 'content';
  $pane->type = 'highwire_variant_link';
  $pane->subtype = 'highwire_variant_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'variant' => 'reviewer-comments',
    'prelabel' => '',
    'label' => 'Reviwer-PDF',
    'link_icon' => 'icon-link',
    'target' => '',
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'd3e84ad1-130a-4244-93f9-7fad09f42c27';
  $display->content['new-d3e84ad1-130a-4244-93f9-7fad09f42c27'] = $pane;
  $display->panels['content'][13] = 'new-d3e84ad1-130a-4244-93f9-7fad09f42c27';
  $pane = new stdClass();
  $pane->pid = 'new-9be160ab-5ee9-48d2-8ae5-40724b942e8b';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Page title (Article Information)',
    'title' => 'Article Information',
    'body' => ' ',
    'format' => 'highwire_full_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9be160ab-5ee9-48d2-8ae5-40724b942e8b';
  $display->content['new-9be160ab-5ee9-48d2-8ae5-40724b942e8b'] = $pane;
  $display->panels['top'][0] = 'new-9be160ab-5ee9-48d2-8ae5-40724b942e8b';
  $pane = new stdClass();
  $pane->pid = 'new-c866502e-e0a5-417b-ad3b-e577c3653e0c';
  $pane->panel = 'top';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_slugline',
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
      'highwire_issue' => array(
        'selector' => 0,
      ),
      'highwire_book_edition' => array(
        'selector' => 0,
      ),
      'highwire_book_section' => array(
        'selector' => 0,
      ),
      'highwire_news_story' => array(
        'selector' => 0,
      ),
      'highwire_comment' => array(
        'selector' => 0,
      ),
      'highwire_journal' => array(
        'selector' => 0,
      ),
      'highwire_fragment' => array(
        'selector' => 0,
      ),
      'highwire_article' => array(
        'selector' => 0,
      ),
      'highwire_book_fragment' => array(
        'selector' => 0,
      ),
    ),
    'bundle_overrides' => array(
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
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'featured_image_click_image' => 'node',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 1,
        'display_pubmed_tooltip' => 1,
        'display_advanced_search_tooltip' => 1,
        'display_author_landing_page_tooltip' => 0,
        'display_orcid_tooltip' => 1,
        'author_site_search_path' => 'search/',
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
        'display_highlight_image' => '0',
        'highlight_image_style' => '',
        'featured_image_click_image' => 'nothing',
        'display_author_tooltip' => 0,
        'display_google_scholar_tooltip' => 0,
        'display_pubmed_tooltip' => 0,
        'display_advanced_search_tooltip' => 0,
      ),
      'highwire_comment' => array(
        'selector' => 0,
        'citation_style' => 'highwire_comment',
        'show_title' => 1,
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
          'pdf_download' => array(
            'display_pdf_download' => 0,
            'pdf_download_icon' => 'icon-cloud-download',
            'pdf_download_text' => 'PDF',
          ),
          'include_on_behalf' => 0,
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
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 0,
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
    ),
    'form_build_id' => 'form-zF-y50l4YiO2LbsMRAuY_Z2QkbFBkAW4hg0JEfaU6s0',
    'form_token' => 's0vc2p4kQqMM5eUa68_7ik5KshbGSV3_mVX3ibSjcik',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c866502e-e0a5-417b-ad3b-e577c3653e0c';
  $display->content['new-c866502e-e0a5-417b-ad3b-e577c3653e0c'] = $pane;
  $display->panels['top'][1] = 'new-c866502e-e0a5-417b-ad3b-e577c3653e0c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c866502e-e0a5-417b-ad3b-e577c3653e0c';
  $mini->display = $display;
  $export['jnl_isa_art_info'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_art_issue';
  $mini->category = 'Article Page';
  $mini->admin_title = 'Article Page - Issue Information';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Issue',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content_left' => NULL,
      'content_right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'In this issue';
  $display->uuid = '647579ef-aaa5-46fb-a9e1-966ba5cf9e41';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_art_issue';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-76cd711c-ebc9-4c39-aa9a-e57ece3103c6';
  $pane->panel = 'middle';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_content_widget',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'toc',
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
        'citation_style' => 'highwire_issue_info',
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
        'include_on_behalf' => 1,
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
        'include_on_behalf' => 0,
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
        'display_orcid_icon' => 0,
        'display_cme_link' => 0,
        'display_cme_link_attributes' => array(
          'target' => '',
        ),
        'display_abstract_tooltip' => 0,
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
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'featured_image_click_image' => 'node',
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
        'citation_style' => 'highwire_issue_info',
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
        'include_on_behalf' => 1,
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
          'include_on_behalf' => 0,
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
          'display_orcid_icon' => 0,
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
          'display_abstract_tooltip' => 0,
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
    'form_build_id' => 'form-7_Se_a0TaBCkB_ZW9cubIY17zHQwoRK8-x3IVN_johM',
    'form_token' => 'x3zc399YC39xoY-byi2MRZYHz-S-cQN72b2KZaalqj0',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '76cd711c-ebc9-4c39-aa9a-e57ece3103c6';
  $display->content['new-76cd711c-ebc9-4c39-aa9a-e57ece3103c6'] = $pane;
  $display->panels['middle'][0] = 'new-76cd711c-ebc9-4c39-aa9a-e57ece3103c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_art_issue'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_art_tools';
  $mini->category = 'Article page';
  $mini->admin_title = 'Article Toolbox';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'highwire_2col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => NULL,
      'content_left' => NULL,
      'content_right' => NULL,
      'bottom' => NULL,
      'default' => NULL,
    ),
    'style' => 'naked',
    'top' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f46e35e2-f611-4710-aea2-33d53fd4b3a3';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_art_tools';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_art_tools'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_cite_apa';
  $mini->category = 'Citation Tabs';
  $mini->admin_title = 'Highwire: Save Citation: Tab Format: APA';
  $mini->admin_description = 'Minipanel with APA citation for ajax tabs';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bdbdcc93-f3e9-4c70-a66d-06089dfdb64f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_cite_apa';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-139eb68c-fbd0-4564-a6de-ce693ce82b3f';
  $pane->panel = 'middle';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'citation_style_options' => array(
      'label_display' => 'hidden',
      'label_text' => '',
      'display_format' => 'Volume @volume, Number @issue, @month @year',
      'link_target' => '_self',
      'link_classes' => '',
    ),
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'apa',
    'title_type' => 'full',
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
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
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
        'featured_image_click_image' => 'colorbox',
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
        'display_translations_text' => '',
        'display_translations_text_icon' => '',
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
    'form_build_id' => 'form-da4xweSCSQOC7Q2q7FQGXfZdn62kLF_sKXDwm5sWBS0',
    'form_token' => 'nf3KyTTeWGI5L7KpeO9yINMjdcz_Aud8zoLzUTyjdpA',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
    'fieldset_citation_style_options' => NULL,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_apa',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => array(),
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '139eb68c-fbd0-4564-a6de-ce693ce82b3f';
  $display->content['new-139eb68c-fbd0-4564-a6de-ce693ce82b3f'] = $pane;
  $display->panels['middle'][0] = 'new-139eb68c-fbd0-4564-a6de-ce693ce82b3f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_cite_apa'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_cite_chi';
  $mini->category = 'Citation Tabs';
  $mini->admin_title = 'Highwire: Save Citation: Tab Format: Chicago';
  $mini->admin_description = 'Minipanel with Chicago citation for ajax tabs';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f6e859ac-dfb4-491c-ad30-bcf8e428f659';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_cite_chi';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f6119fec-e09f-4c9b-8c8a-064a1cdbfd70';
  $pane->panel = 'middle';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'citation_style_options' => array(
      'label_display' => 'hidden',
      'label_text' => '',
      'display_format' => 'Volume @volume, Number @issue, @month @year',
      'link_target' => '_self',
      'link_classes' => '',
    ),
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'chicago',
    'title_type' => 'full',
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
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
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
        'featured_image_click_image' => 'colorbox',
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
        'display_translations_text' => '',
        'display_translations_text_icon' => '',
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
    'form_build_id' => 'form-T8LIaofZULvG8HXLMQWWgfGxGCoQhDXIDJ4o3I06UbE',
    'form_token' => 'nf3KyTTeWGI5L7KpeO9yINMjdcz_Aud8zoLzUTyjdpA',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
    'fieldset_citation_style_options' => NULL,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_chicago',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => array(),
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f6119fec-e09f-4c9b-8c8a-064a1cdbfd70';
  $display->content['new-f6119fec-e09f-4c9b-8c8a-064a1cdbfd70'] = $pane;
  $display->panels['middle'][0] = 'new-f6119fec-e09f-4c9b-8c8a-064a1cdbfd70';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_cite_chi'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_cite_en';
  $mini->category = 'Citation Tabs';
  $mini->admin_title = 'Highwire: Save Citation: Tab Format: Endnote';
  $mini->admin_description = 'Minipanel with Endnote citation for ajax tabs';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7167982d-2938-4cc1-969b-9beb6a30685a';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_cite_en';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d7976ed3-0d6a-4cd1-8b9e-9bbbcbce301b';
  $pane->panel = 'middle';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'citation_style_options' => array(
      'label_display' => 'hidden',
      'label_text' => '',
      'display_format' => 'Volume @volume, Number @issue, @month @year',
      'link_target' => '_self',
      'link_classes' => '',
    ),
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'jcore_title_and_author',
    'title_type' => 'full',
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
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
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
        'featured_image_click_image' => 'colorbox',
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
        'display_translations_text' => '',
        'display_translations_text_icon' => '',
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
    'form_build_id' => 'form-YzwaB7gm7chZXN1TZ0DZHzy84x-xTMtTwxkW7TfdZK8',
    'form_token' => 'nf3KyTTeWGI5L7KpeO9yINMjdcz_Aud8zoLzUTyjdpA',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
    'fieldset_citation_style_options' => NULL,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_title_only',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => array(),
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd7976ed3-0d6a-4cd1-8b9e-9bbbcbce301b';
  $display->content['new-d7976ed3-0d6a-4cd1-8b9e-9bbbcbce301b'] = $pane;
  $display->panels['middle'][0] = 'new-d7976ed3-0d6a-4cd1-8b9e-9bbbcbce301b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_cite_en'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_cite_mla';
  $mini->category = 'Citation Tabs';
  $mini->admin_title = 'Highwire: Save Citation: Tab Format: MLA';
  $mini->admin_description = 'Minipanel with MLA citation for ajax tabs';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7611737b-3e0e-4472-9a8b-65d8537d1ee3';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_cite_mla';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-58290967-89e6-4f52-8b9e-7367edcfd012';
  $pane->panel = 'middle';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'citation_style_options' => array(
      'label_display' => 'hidden',
      'label_text' => '',
      'display_format' => 'Volume @volume, Number @issue, @month @year',
      'link_target' => '_self',
      'link_classes' => '',
    ),
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'mla',
    'title_type' => 'full',
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
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
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
        'featured_image_click_image' => 'colorbox',
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
        'display_translations_text' => '',
        'display_translations_text_icon' => '',
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
    'form_build_id' => 'form-3hIqsAx4GAQ-cn_WqEVPPKKVU3X3IYLt3OE7krd1_E4',
    'form_token' => 'nf3KyTTeWGI5L7KpeO9yINMjdcz_Aud8zoLzUTyjdpA',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
    'fieldset_citation_style_options' => NULL,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_mla',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => array(),
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '58290967-89e6-4f52-8b9e-7367edcfd012';
  $display->content['new-58290967-89e6-4f52-8b9e-7367edcfd012'] = $pane;
  $display->panels['middle'][0] = 'new-58290967-89e6-4f52-8b9e-7367edcfd012';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_cite_mla'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_cite_tool';
  $mini->category = '';
  $mini->admin_title = 'jnl_isa_cite_tool';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '31337053-f2bf-45c3-9cfe-6b016a2473ac';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_cite_tool';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-377bdf9d-e943-4d69-a07b-94474b762a7c';
  $pane->panel = 'middle';
  $pane->type = 'highwire_citation_export';
  $pane->subtype = 'highwire_citation_export';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link_text' => 'Download Citation',
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'jcore_standard',
    'title_type' => 'full',
    'title_as_link' => 0,
    'display_subtitle' => 0,
    'choose_pubdate' => 'ppubdate',
    'display_markup_snippet' => NULL,
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'display_author_tooltip' => 0,
    'form_build_id' => 'form-Wb6ACyDKkm0jOHlLQXCGqA8FNGR5CGqCvhDhv6HTey0',
    'form_token' => 'W6dQPTJwwdzlT_h24cCfbWpslK0zfsYBPpw5o38BgVI',
    'form_id' => 'highwire_citation_highwire_citation_export_content_type_edit_form',
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_info_blurb',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => array(),
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
    ),
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
    'citation_formats_list' => array(
      'bibtext' => 0,
      'bookends' => 0,
      'easybib' => 0,
      'endnote-tagged' => 0,
      'endnote-8-xml' => 0,
      'medlars' => 0,
      'mendeley' => 0,
      'papers' => 0,
      'refworks-tagged' => 0,
      'reference-manager' => 0,
      'ris' => 0,
      'zotero' => 0,
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '377bdf9d-e943-4d69-a07b-94474b762a7c';
  $display->content['new-377bdf9d-e943-4d69-a07b-94474b762a7c'] = $pane;
  $display->panels['middle'][0] = 'new-377bdf9d-e943-4d69-a07b-94474b762a7c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-377bdf9d-e943-4d69-a07b-94474b762a7c';
  $mini->display = $display;
  $export['jnl_isa_cite_tool'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_cite_view';
  $mini->category = 'Article toolbox';
  $mini->admin_title = 'Highwire: Save Citation: View Dialog';
  $mini->admin_description = 'Dialog window responsible for displaying the different citation formats.';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Article Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4c4b603d-ed0a-4977-a3d4-8fc9450badc3';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_cite_view';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e9482847-e760-477d-89db-f1ff3bc908a3';
  $pane->panel = 'middle';
  $pane->type = 'panels_ajax_tab_tabs';
  $pane->subtype = 'panels_ajax_tab_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mini_panels' => array(
      'jnl_isa_cite_apa' => array(
        'selected' => 1,
        'tab_title' => 'APA',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_art_info' => array(
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
      'jnl_isa_search_box' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_tab_elets' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_view' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_uid_strng' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_art_alert' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_login' => array(
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
      'jnl_isa_challenge' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_art_email' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_tool' => array(
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
      'jnl_isa_iss_issue' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_trans_dls' => array(
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
      'jnl_isa_share' => array(
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
      'jnl_isa_tab_supp' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_most_cited' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_most_read' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_top_topics' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_chi' => array(
        'selected' => 1,
        'tab_title' => 'Chicago',
        'url_id' => '',
        'weight' => '-9',
      ),
      'jnl_isa_cite_en' => array(
        'selected' => 1,
        'tab_title' => 'Endnote',
        'url_id' => '',
        'weight' => '-8',
      ),
      'jnl_isa_cite_mla' => array(
        'selected' => 1,
        'tab_title' => 'MLA',
        'url_id' => '',
        'weight' => '-7',
      ),
    ),
    'container_id' => 'citation-format-details',
    'url_enabled' => 0,
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e9482847-e760-477d-89db-f1ff3bc908a3';
  $display->content['new-e9482847-e760-477d-89db-f1ff3bc908a3'] = $pane;
  $display->panels['middle'][0] = 'new-e9482847-e760-477d-89db-f1ff3bc908a3';
  $pane = new stdClass();
  $pane->pid = 'new-2dd1ab7e-7bad-45f8-848a-5d1dadf4f5e2';
  $pane->panel = 'middle';
  $pane->type = 'panels_ajax_tab_container';
  $pane->subtype = 'panels_ajax_tab_container';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'container_id' => 'citation-format-details',
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2dd1ab7e-7bad-45f8-848a-5d1dadf4f5e2';
  $display->content['new-2dd1ab7e-7bad-45f8-848a-5d1dadf4f5e2'] = $pane;
  $display->panels['middle'][1] = 'new-2dd1ab7e-7bad-45f8-848a-5d1dadf4f5e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_cite_view'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_iss_issue';
  $mini->category = 'TOC Page';
  $mini->admin_title = 'Issue - Cover and Variants';
  $mini->admin_description = 'It holds Issue cover image and issue variant list';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'content_left' => NULL,
      'content_right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'In this issue';
  $display->uuid = 'f27cdfa1-5c0f-450f-9b5c-b53192bcb54f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_iss_issue';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0cbead08-d0b6-4ea9-926a-7d9f5145c2b8';
  $pane->panel = 'middle';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_content_widget',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'toc',
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
        'include_on_behalf' => 1,
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
        'include_on_behalf' => 0,
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
        'display_orcid_icon' => 0,
        'display_cme_link' => 0,
        'display_cme_link_attributes' => array(
          'target' => '',
        ),
        'display_abstract_tooltip' => 0,
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
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'featured_image_click_image' => 'node',
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
        'include_on_behalf' => 1,
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
          'include_on_behalf' => 0,
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
          'display_orcid_icon' => 0,
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
          'display_abstract_tooltip' => 0,
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
    'form_build_id' => 'form-6EZ6Fe2ZlsjD-TlGbggZBOw9hNNcRVABWe5Hsf-XEmg',
    'form_token' => 'jPdyfFXd-7eW-_zbYLbnsx7IqFeqH2ZsxCkPuLQjLL4',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0cbead08-d0b6-4ea9-926a-7d9f5145c2b8';
  $display->content['new-0cbead08-d0b6-4ea9-926a-7d9f5145c2b8'] = $pane;
  $display->panels['middle'][0] = 'new-0cbead08-d0b6-4ea9-926a-7d9f5145c2b8';
  $pane = new stdClass();
  $pane->pid = 'new-f5e4b78a-507e-47f9-aa55-5c70ad1bf4db';
  $pane->panel = 'middle';
  $pane->type = 'highwire_issue_highlights';
  $pane->subtype = 'highwire_issue_highlights';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => 'Issue highlights',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'jcore_title_only',
    'title_type' => 'short',
    'title_as_link' => 1,
    'choose_pubdate' => 'ppubdate',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'form_build_id' => 'form-t_tMy4qHjyolKOk7t9nyGrQ5oQeaF_Om4FsOisahpts',
    'form_token' => 'cJCn-j3AlsHv-P5CD09HPPyEHsuX-WE3kdIt1zZTb_8',
    'form_id' => 'highwire_highwire_issue_highlights_content_type_edit_form',
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_list_title_only',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'toc',
    ),
    'cache_enabled' => 1,
    'cache_time' => '600',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
    ),
    'display_subtitle' => 0,
    'display_markup_snippet' => '',
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
        'include_on_behalf' => 1,
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
        'include_on_behalf' => 0,
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
        'display_orcid_icon' => 0,
        'display_cme_link' => 0,
        'display_cme_link_attributes' => array(
          'target' => '',
        ),
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
        'display_highlight_image' => 0,
        'highlight_image_style' => '',
        'featured_image_click_image' => 'nothing',
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
        'include_on_behalf' => 1,
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
          'include_on_behalf' => 0,
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
          'display_orcid_icon' => 0,
          'display_cme_link' => 0,
          'display_cme_link_attributes' => array(
            'target' => '',
          ),
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
    'show_pager' => 0,
    'number_per_page' => '4',
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
  $pane->uuid = 'f5e4b78a-507e-47f9-aa55-5c70ad1bf4db';
  $display->content['new-f5e4b78a-507e-47f9-aa55-5c70ad1bf4db'] = $pane;
  $display->panels['middle'][1] = 'new-f5e4b78a-507e-47f9-aa55-5c70ad1bf4db';
  $pane = new stdClass();
  $pane->pid = 'new-3c2ee9a6-a0a1-4e94-ac23-5c3211b8671c';
  $pane->panel = 'middle';
  $pane->type = 'highwire_seach_quicksearch';
  $pane->subtype = 'highwire_seach_quicksearch';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'submit_button_type' => 'mini',
    'placeholder' => 'Search this issue',
    'title_search' => '',
    'target' => 'search',
    'form_build_id' => 'form-J-wSbK3h51cmMWKOM66DocioZXegUviIkfnMoYP-NXU',
    'form_token' => 'IUGSEAZ3x3TMsul7YyGAO6woJkVYR-gCmbAjdKATay8',
    'form_id' => 'highwire_search_quicksearch_form_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3c2ee9a6-a0a1-4e94-ac23-5c3211b8671c';
  $display->content['new-3c2ee9a6-a0a1-4e94-ac23-5c3211b8671c'] = $pane;
  $display->panels['middle'][2] = 'new-3c2ee9a6-a0a1-4e94-ac23-5c3211b8671c';
  $pane = new stdClass();
  $pane->pid = 'new-09ec4a7c-e373-45e3-b213-638c35ab8d01';
  $pane->panel = 'middle';
  $pane->type = 'toc_alert_link';
  $pane->subtype = 'toc_alert_link';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'toc_link' => 'alerts/toc/edit',
    'toc_link_text' => 'Sign up for alerts',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'toc_enable_link_icon' => 1,
    'toc_link_icon' => 'icon-exclamation-sign',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-alerts-toc-link',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '09ec4a7c-e373-45e3-b213-638c35ab8d01';
  $display->content['new-09ec4a7c-e373-45e3-b213-638c35ab8d01'] = $pane;
  $display->panels['middle'][3] = 'new-09ec4a7c-e373-45e3-b213-638c35ab8d01';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_iss_issue'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_share';
  $mini->category = 'Article toolbox';
  $mini->admin_title = 'isa Share Popup';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Share This Article';
  $display->uuid = '19e6b6c3-d781-4769-b5ab-300f07e7f1b4';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_share';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-89c54292-4d27-4e1d-af90-b1e9bcc92282';
  $pane->panel = 'middle';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'jcore_standard',
    'title_type' => 'full',
    'title_as_link' => 0,
    'choose_pubdate' => 'ppubdate',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'form_build_id' => 'form-v7wJEX0iVwWYOJQGZKP3h-SAfmoQONZR6dQ96dqBzX0',
    'form_token' => 'nf3KyTTeWGI5L7KpeO9yINMjdcz_Aud8zoLzUTyjdpA',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
    'citation_settings_source' => 'citation_manager',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_info_blurb',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => array(),
    ),
    'cache_enabled' => 1,
    'cache_time' => '86400',
    'display_subtitle' => 0,
    'display_markup_snippet' => '',
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
    'display_highlight_image' => '0',
    'highlight_image_style' => '',
    'featured_image_variant' => 'large',
    'display_cme_link' => 0,
    'display_author_tooltip' => 0,
    'display_google_scholar_tooltip' => 0,
    'display_pubmed_tooltip' => 0,
    'display_advanced_search_tooltip' => 0,
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
        'citation_style' => 'ama',
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
        'display_markup_snippet' => '',
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
          'cache_time' => '86400',
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
        'cache_time' => '86400',
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
        'cache_time' => '86400',
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
        'featured_image_click_image' => 'colorbox',
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
        'cache_time' => '86400',
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
        'citation_style' => 'ama',
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
        'display_markup_snippet' => '',
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
          'featured_image_click_image' => 'colorbox',
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
        'cache_time' => '86400',
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
        'cache_time' => '86400',
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
    'override_title_heading' => 'h2',
    'short_title_options' => array(
      'char_count' => '50',
      'add_ellipsis' => 0,
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'large-margin-bottom',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '89c54292-4d27-4e1d-af90-b1e9bcc92282';
  $display->content['new-89c54292-4d27-4e1d-af90-b1e9bcc92282'] = $pane;
  $display->panels['middle'][0] = 'new-89c54292-4d27-4e1d-af90-b1e9bcc92282';
  $pane = new stdClass();
  $pane->pid = 'new-6eaf5a5a-5fa4-4888-a076-c0a11e0efc0d';
  $pane->panel = 'middle';
  $pane->type = 'highwire_article_clipboard_copy';
  $pane->subtype = 'highwire_article_clipboard_copy';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'form_build_id' => 'form-laCmA3_X3pcaOxbu0OZPAEF87b2rqrmDCSXHYZVweKs',
    'form_token' => 'A-3AHTET57rLRojwHBLsYBHD6W4OobHuCZL73PthxJI',
    'form_id' => 'highwire_article_clipboard_copy_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'large-margin-bottom',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6eaf5a5a-5fa4-4888-a076-c0a11e0efc0d';
  $display->content['new-6eaf5a5a-5fa4-4888-a076-c0a11e0efc0d'] = $pane;
  $display->panels['middle'][1] = 'new-6eaf5a5a-5fa4-4888-a076-c0a11e0efc0d';
  $pane = new stdClass();
  $pane->pid = 'new-a8c14f46-bedb-4c11-957d-5bbf2aa862d6';
  $pane->panel = 'middle';
  $pane->type = 'service_links';
  $pane->subtype = 'service_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'service_links_style' => 'service_links',
    'service_links_block_style' => '2',
    'forward' => 0,
    'delicious' => 1,
    'digg' => 1,
    'twitter' => 1,
    'reddit' => 1,
    'facebook' => 1,
    'google' => 1,
    'technorati' => 1,
    'citeulike' => 1,
    'mendeley' => 1,
    'connotea' => 1,
    'twitter_widget' => 0,
    'facebook_like' => 0,
    'google_plus_one' => 0,
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
  $pane->uuid = 'a8c14f46-bedb-4c11-957d-5bbf2aa862d6';
  $display->content['new-a8c14f46-bedb-4c11-957d-5bbf2aa862d6'] = $pane;
  $display->panels['middle'][2] = 'new-a8c14f46-bedb-4c11-957d-5bbf2aa862d6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_share'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_tab_art';
  $mini->category = 'Article Tab';
  $mini->admin_title = 'Article Tab - Article';
  $mini->admin_description = 'Provides main "Article" tab';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Article',
      'keyword' => 'article',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd2759863-0910-414a-ae7d-b4fc31f438ee';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_tab_art';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8eb8fc72-2307-4cf5-8fd2-a6b08a91b298';
  $pane->panel = 'middle';
  $pane->type = 'highwire_corrections';
  $pane->subtype = 'highwire_corrections';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'correction_type' => array(
      'Revision#addendum' => 'Revision#addendum',
      'Revision#correction' => 'Revision#correction',
      'Revision#retraction' => 'Revision#retraction',
    ),
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = '8eb8fc72-2307-4cf5-8fd2-a6b08a91b298';
  $display->content['new-8eb8fc72-2307-4cf5-8fd2-a6b08a91b298'] = $pane;
  $display->panels['middle'][0] = 'new-8eb8fc72-2307-4cf5-8fd2-a6b08a91b298';
  $pane = new stdClass();
  $pane->pid = 'new-98f318d4-cb64-40ce-be8e-baedb7279848';
  $pane->panel = 'middle';
  $pane->type = 'highwire_languages_select';
  $pane->subtype = 'highwire_languages_select';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_has_foriegn_lang_text_variant',
        'settings' => NULL,
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'title' => 'Available Languages',
    'icon' => 'icon-globe',
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = '98f318d4-cb64-40ce-be8e-baedb7279848';
  $display->content['new-98f318d4-cb64-40ce-be8e-baedb7279848'] = $pane;
  $display->panels['middle'][1] = 'new-98f318d4-cb64-40ce-be8e-baedb7279848';
  $pane = new stdClass();
  $pane->pid = 'new-d4970323-8555-4c19-bee3-1aa873a65415';
  $pane->panel = 'middle';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'variant' => 'long',
    'process' => array(
      'highwire_src_rewrites' => 0,
      'highwire_figure_data_anchor_links' => 0,
      'highwire_infotrieve_link' => 0,
      'highwire_glencoe_video' => 0,
      'highwire_arxiv_url' => 0,
      'highwire_author_affiliates' => 0,
      'highwire_math' => 'highwire_math',
      'highwire_socialcite_doi' => 0,
      'highwire_extract_element' => 0,
      'highwire_doi' => 0,
      'highwire_article_glossary_popup' => 0,
      'highwire_video_flowplayer' => 0,
      'highwire_collapsible_supplemental' => 0,
      'highwire_references_ijlink' => 'highwire_references_ijlink',
      'highwire_disable_references' => 'highwire_disable_references',
      'highwire_cc_logo' => 0,
      'highwire_delete_elements' => 'highwire_delete_elements',
      'highwire_tables_images' => 0,
      'highwire_url_rewrites' => 0,
      'highwire_at_symbol' => 'highwire_at_symbol',
      'highwire_image_protection' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_brightcove_video' => 0,
      'highwire_google_scholar' => 0,
      'highwire_embed' => 'highwire_embed',
      'highwire_css' => 'highwire_css',
      'highwire_openurl' => 'highwire_openurl',
      'highwire_article_reference_popup' => 'highwire_article_reference_popup',
      'highwire_tables' => 'highwire_tables',
      'highwire_remove_invalid_links' => 0,
      'highwire_keywords' => 'highwire_keywords',
      'highwire_georef_css' => 0,
      'highwire_inline_linked_media' => 0,
      'highwire_quick_nav' => 0,
      'highwire_reclass' => 'highwire_reclass',
      'highwire_tables_expansion' => 0,
      'highwire_inline_ads' => 0,
      'highwire_footnote_jump_link' => 0,
      'highwire_mgi_links' => 0,
      'highwire_insert_mini_panel' => 0,
      'highwire_figures' => 'highwire_figures',
      'highwire_pdf_fallback' => 0,
    ),
    'variant_404' => 'display_nothing',
    'ac_403' => 'display_nothing',
    'variant_custom_text' => '',
    'variant_url' => '',
    'ac_custom_text' => '',
    'ac_url' => '',
    'disable_logging' => 0,
    'lock_variant' => 0,
    'disable_ac' => 0,
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
        'toc_heading' => '',
        'remove_toc_heading' => '',
        'article_citation' => array(
          'citation_settings_source' => 'custom',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => 'jcore_apa',
          ),
          'corpus_config_wrapper' => array(
            'corpus_config_citation_context' => 'toc',
          ),
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'toggle_rows' => array(
            'highlight' => 'highlight',
            'overline' => 'overline',
            'access' => 'access',
            'title' => 'title',
            'authors' => 'authors',
            'metadata' => 'metadata',
            'snippet' => 'snippet',
            'extras' => 'extras',
          ),
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
            'send_pdf_through_ac' => 0,
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
          'audio_settings' => array(
            'display_audio_player' => 0,
            'no_html5_audio_text' => '',
            'audio_schema_types' => 'http://schema.highwire.org/Linking/External#audiosummary',
            'enable_download_link' => 0,
            'download_link_icon' => '',
            'download_link_text' => '',
          ),
          'bundle_overrides_checkboxes' => array(
            'highwire_book_section' => array(
              'selector' => 0,
            ),
            'highwire_journal' => array(
              'selector' => 0,
            ),
            'highwire_fragment' => array(
              'selector' => 0,
            ),
            'highwire_comment' => array(
              'selector' => 0,
            ),
            'highwire_news_story' => array(
              'selector' => 0,
            ),
            'highwire_book_edition' => array(
              'selector' => 0,
            ),
            'highwire_book_fragment' => array(
              'selector' => 0,
            ),
            'highwire_issue' => array(
              'selector' => 0,
            ),
            'highwire_article' => array(
              'selector' => 0,
            ),
          ),
          'bundle_overrides' => array(
            'highwire_article' => array(
              'selector' => 0,
              'citation_style' => 'mla',
              'cache_enabled' => 1,
              'cache_time' => '600',
              'toggle_rows' => array(
                'highlight' => 'highlight',
                'overline' => 'overline',
                'access' => 'access',
                'title' => 'title',
                'authors' => 'authors',
                'metadata' => 'metadata',
                'snippet' => 'snippet',
                'extras' => 'extras',
              ),
              'title_type' => 'full',
              'short_title_options' => array(
                'char_count' => '50',
                'add_ellipsis' => 0,
              ),
              'title_as_link' => 0,
              'display_subtitle' => 0,
              'choose_pubdate' => 'ppubdate',
              'choose_early_release_pubdate' => '',
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
                'send_pdf_through_ac' => 0,
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
              'audio_settings' => array(
                'display_audio_player' => 0,
                'no_html5_audio_text' => '',
                'audio_schema_types' => 'http://schema.highwire.org/Linking/External#audiosummary',
                'enable_download_link' => 0,
                'download_link_icon' => '',
                'download_link_text' => '',
              ),
              'display_highlight_image' => '0',
              'highlight_image_style' => '',
              'featured_image_variant' => 'large',
              'featured_image_click_image' => 'colorbox',
              'display_cme_link' => 0,
              'display_cme_link_label' => 'CME',
              'display_cme_link_icon' => 'icon-link',
              'display_cme_link_attributes' => array(
                'target' => '',
              ),
              'display_abstract_tooltip' => 0,
              'abstract_tooltip_instance' => 'highwire_abstract_tooltip',
              'display_contributors' => 0,
              'include_on_behalf' => 0,
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
              'author_tooltip_conf' => array(
                'author_tooltip_instance' => 'highwire_author_tooltip',
                'display_google_scholar_tooltip' => 1,
                'display_pubmed_tooltip' => 1,
                'display_advanced_search_tooltip' => 1,
                'display_author_landing_page_tooltip' => 1,
                'display_orcid_tooltip' => 1,
                'display_ads_search_tooltip' => 0,
                'display_agricola_tooltip' => 0,
                'author_site_search_path' => 'search/',
              ),
              'display_translations' => 0,
              'display_translations_text' => '',
              'display_translations_text_icon' => 'icon-globe',
              'show_subarticles_authors' => 1,
            ),
          ),
        ),
      ),
      'index-by-author' => array(
        'article_citation' => array(
          'citation_settings_source' => 'custom',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => 'jcore_apa',
          ),
          'corpus_config_wrapper' => array(
            'corpus_config_citation_context' => 'toc',
          ),
          'citation_style' => 'mla',
          'cache_enabled' => 1,
          'cache_time' => '600',
          'toggle_rows' => array(
            'highlight' => 'highlight',
            'overline' => 'overline',
            'access' => 'access',
            'title' => 'title',
            'authors' => 'authors',
            'metadata' => 'metadata',
            'snippet' => 'snippet',
            'extras' => 'extras',
          ),
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
            'send_pdf_through_ac' => 0,
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
          'audio_settings' => array(
            'display_audio_player' => 0,
            'no_html5_audio_text' => '',
            'audio_schema_types' => 'http://schema.highwire.org/Linking/External#audiosummary',
            'enable_download_link' => 0,
            'download_link_icon' => '',
            'download_link_text' => '',
          ),
          'bundle_overrides_checkboxes' => array(
            'highwire_book_section' => array(
              'selector' => 0,
            ),
            'highwire_journal' => array(
              'selector' => 0,
            ),
            'highwire_fragment' => array(
              'selector' => 0,
            ),
            'highwire_comment' => array(
              'selector' => 0,
            ),
            'highwire_news_story' => array(
              'selector' => 0,
            ),
            'highwire_book_edition' => array(
              'selector' => 0,
            ),
            'highwire_book_fragment' => array(
              'selector' => 0,
            ),
            'highwire_issue' => array(
              'selector' => 0,
            ),
            'highwire_article' => array(
              'selector' => 0,
            ),
          ),
          'bundle_overrides' => array(
            'highwire_article' => array(
              'selector' => 0,
              'citation_style' => 'mla',
              'cache_enabled' => 1,
              'cache_time' => '600',
              'toggle_rows' => array(
                'highlight' => 'highlight',
                'overline' => 'overline',
                'access' => 'access',
                'title' => 'title',
                'authors' => 'authors',
                'metadata' => 'metadata',
                'snippet' => 'snippet',
                'extras' => 'extras',
              ),
              'title_type' => 'full',
              'short_title_options' => array(
                'char_count' => '50',
                'add_ellipsis' => 0,
              ),
              'title_as_link' => 0,
              'display_subtitle' => 0,
              'choose_pubdate' => 'ppubdate',
              'choose_early_release_pubdate' => '',
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
                'send_pdf_through_ac' => 0,
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
              'audio_settings' => array(
                'display_audio_player' => 0,
                'no_html5_audio_text' => '',
                'audio_schema_types' => 'http://schema.highwire.org/Linking/External#audiosummary',
                'enable_download_link' => 0,
                'download_link_icon' => '',
                'download_link_text' => '',
              ),
              'display_highlight_image' => '0',
              'highlight_image_style' => '',
              'featured_image_variant' => 'large',
              'featured_image_click_image' => 'colorbox',
              'display_cme_link' => 0,
              'display_cme_link_label' => 'CME',
              'display_cme_link_icon' => 'icon-link',
              'display_cme_link_attributes' => array(
                'target' => '',
              ),
              'display_abstract_tooltip' => 0,
              'abstract_tooltip_instance' => 'highwire_abstract_tooltip',
              'display_contributors' => 0,
              'include_on_behalf' => 0,
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
              'author_tooltip_conf' => array(
                'author_tooltip_instance' => 'highwire_author_tooltip',
                'display_google_scholar_tooltip' => 1,
                'display_pubmed_tooltip' => 1,
                'display_advanced_search_tooltip' => 1,
                'display_author_landing_page_tooltip' => 1,
                'display_orcid_tooltip' => 1,
                'display_ads_search_tooltip' => 0,
                'display_agricola_tooltip' => 0,
                'author_site_search_path' => 'search/',
              ),
              'display_translations' => 0,
              'display_translations_text' => '',
              'display_translations_text_icon' => 'icon-globe',
              'show_subarticles_authors' => 1,
            ),
          ),
        ),
      ),
      'toc-tizra' => array(
        'tizra_site_code' => '',
        'tizra_api_token' => '',
        'row_highlight_style' => NULL,
        'tizra_toc_citation' => array(
          'title_html_tag' => 'div',
          'title_link_target' => NULL,
          'title_classes' => '',
          'title_separator' => '',
          'toggle_section_nums' => array(
            'part' => 0,
            'chapter' => 0,
            'subpart' => 0,
            'lesson' => 0,
            'section' => 0,
            'unit' => 0,
          ),
          'part_num' => array(
            'format' => NULL,
            'prefix' => '',
            'suffix' => '',
          ),
          'chapter_num' => array(
            'format' => NULL,
            'prefix' => '',
            'suffix' => '',
          ),
          'subpart_num' => array(
            'format' => NULL,
            'prefix' => '',
            'suffix' => '',
          ),
          'lesson_num' => array(
            'format' => NULL,
            'prefix' => '',
            'suffix' => '',
          ),
          'section_num' => array(
            'format' => NULL,
            'prefix' => '',
            'suffix' => '',
          ),
          'unit_num' => array(
            'format' => NULL,
            'prefix' => '',
            'suffix' => '',
          ),
          'toggle_access_indicator' => 0,
          'access_indicator' => array(
            'free' => array(
              'icon' => '',
              'title' => '',
            ),
            'user_access' => array(
              'icon' => '',
              'title' => '',
            ),
            'no_access' => array(
              'icon' => '',
              'title' => '',
            ),
          ),
          'display_order' => '',
          'hide_book_contribs' => 1,
          'metadata_classes' => '',
          'toggle_georef_link' => 0,
          'georef_link' => array(
            'base_url' => '',
            'text' => '',
            'icon' => '',
            'icon_pos' => 'before',
            'classes' => '',
            'target_new' => 1,
          ),
          'toggle_abstract' => 1,
          'abstract' => array(
            'abstract_type' => 'abstract',
            'handle_text' => 'Abstract',
            'handle_classes' => '',
            'container_classes' => '',
          ),
          'citation_col_classes' => '',
        ),
        'toggle_page' => 0,
        'page_num' => array(
          'page_content_classes' => '',
          'page_col_classes' => '',
        ),
        'toggle_dl_pdf' => 0,
        'dl_pdf' => array(
          'pdf_link_text' => '',
          'pdf_link_icon' => '',
          'pdf_icon_position' => NULL,
          'pdf_empty_text' => '',
          'pdf_link_classes' => '',
          'pdf_col_classes' => '',
        ),
      ),
      'brief-allowalways' => array(
        'params' => array(
          'searchurl' => '/search',
        ),
      ),
      'brief' => array(
        'params' => array(
          'searchurl' => '/search',
        ),
      ),
      'georef' => array(
        'params' => array(
          'searchurl' => '/search',
        ),
      ),
      'georef-long' => array(
        'params' => array(
          'searchurl' => '/search',
        ),
      ),
    ),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'process_settings' => array(
      'highwire_figure_data_anchor_links' => array(
        'hide_data_supps' => 0,
      ),
      'highwire_infotrieve_link' => array(
        'link_label' => 'Order article via Infotrieve',
        'link_icon' => 'icon-usd',
      ),
      'highwire_socialcite_doi' => array(
        'socialcite_partner_id' => '',
      ),
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_doi' => array(
        'patterns' => '',
      ),
      'highwire_collapsible_supplemental' => array(
        'title_expand' => 'Expand view',
        'title_expand_icon' => 'icon-plus',
        'title_collapse' => 'Collapse view',
        'title_collapse_icon' => 'icon-minus',
        'title_subtitle' => 0,
        'expand_all' => 1,
        'title_all' => 'Expand all view',
      ),
      'highwire_disable_references' => array(
        'links' => array(
          'cit-ref-sprinkles-webofscience' => 'cit-ref-sprinkles-webofscience',
          'cit-ref-sprinkles-georef' => 'cit-ref-sprinkles-georef',
          'cit-ref-sprinkles-infotrieve' => 'cit-ref-sprinkles-infotrieve',
          'cit-ref-sprinkles-crossref' => 0,
          'cit-ref-sprinkles-medline' => 0,
          'cit-ref-sprinkles-open-url' => 0,
          'cit-ref-sprinkles-google-scholar-link' => 0,
          'cit-ref-sprinkles-ijlink' => 0,
        ),
        'available_links_fieldset' => array(
          'available_links' => 'cit-ref-sprinkles-crossref|Cross reference
cit-ref-sprinkles-medline|Medline
cit-ref-sprinkles-open-url|Open URL
cit-ref-sprinkles-webofscience|Web of Science
cit-ref-sprinkles-georef|GeoRef
cit-ref-sprinkles-infotrieve|Infotrieve
cit-ref-sprinkles-google-scholar-link|Google Scholar
cit-ref-sprinkles-ijlink|Inter-Journal linking',
        ),
        'infotrieve_link_configuration' => array(
          'link_label' => 'Order article via Infotrieve',
          'link_icon' => 'icon-usd',
        ),
      ),
      'highwire_cc_logo' => array(
        'path' => '',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '//xhtml:div[@class="contributors"]
           //xhtml:h2[@class="subtitle"]',
        'selector' => '',
      ),
      'highwire_tables_images' => array(
        'image_click' => 'expansion',
        'table_placeholder_icons' => 'icon-table icon-2x',
      ),
      'highwire_author_affiliates_tooltip' => array(
        'tooltip_instance' => 'highwire_author_tooltip',
        'search-url' => '/search',
      ),
      'highwire_brightcove_video' => array(
        'width' => '480',
        'height' => '270',
        'account' => '',
        'playerid' => '',
        'policy_key' => '',
      ),
      'highwire_keywords' => array(
        'enabled_search_fallback' => 1,
        'search_base_path' => '/search',
      ),
      'highwire_quick_nav' => array(
        'nav_down_icon' => 'icon-caret-down',
        'nav_up_icon' => 'icon-caret-up',
        'nav_class' => 'mobile-only float-me-right',
      ),
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
      ),
      'highwire_insert_mini_panel' => array(
        'mini_panel' => 'jnl_isa_tab_art',
        'xpath' => '',
        'placement' => 'prependSibling',
      ),
      'highwire_figures' => array(
        'image_size' => 'medium',
        'image_click' => 'colorbox',
        'figure_group' => '',
        'enable_click_behaviour_on_table' => 0,
        'hide_caption' => 0,
        'exclude_protected' => 0,
        'figures_download_links' => array(
          'download-fig' => 'download-fig',
          'new-tab' => 'new-tab',
          'download-ppt' => 'download-ppt',
        ),
        'anchor_image_size' => 'medium',
        'enable_brightcove_figures' => 0,
        'brightcove_figures' => array(
          'brightcove_figures_width' => '',
          'brightcove_figures_height' => '',
          'brightcove_figures_account' => '',
          'brightcove_figures_playerid' => '',
          'brightcove_figures_policy_key' => '',
        ),
      ),
    ),
    'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
    'referer_first_click' => 0,
    'bypass_stamper' => 'global',
    'variant_language' => '0',
    'google_abstract_link' => 1,
    'google_abstract_link_title' => 'View Abstract',
    'google_fulltext_link_title' => 'View Full Text',
    'markup_server' => 'v1',
    'enable_sso_redirect' => 0,
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
  $pane->uuid = 'd4970323-8555-4c19-bee3-1aa873a65415';
  $display->content['new-d4970323-8555-4c19-bee3-1aa873a65415'] = $pane;
  $display->panels['middle'][2] = 'new-d4970323-8555-4c19-bee3-1aa873a65415';
  $pane = new stdClass();
  $pane->pid = 'new-813abcca-bc5e-434c-a709-93e35a745c5e';
  $pane->panel = 'middle';
  $pane->type = 'snippet';
  $pane->subtype = 'article_access_text';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_check_variant',
        'settings' => array(
          'variant' => 'full-text',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 0,
          'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
    ),
  );
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '813abcca-bc5e-434c-a709-93e35a745c5e';
  $display->content['new-813abcca-bc5e-434c-a709-93e35a745c5e'] = $pane;
  $display->panels['middle'][3] = 'new-813abcca-bc5e-434c-a709-93e35a745c5e';
  $pane = new stdClass();
  $pane->pid = 'new-59f2a01f-68eb-4499-8cea-45dfeb0b533e';
  $pane->panel = 'middle';
  $pane->type = 'snippet';
  $pane->subtype = 'article_access_text';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_check_variant',
        'settings' => array(
          'variant' => 'full-text',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'highwire_check_variant',
        'settings' => array(
          'variant' => 'full-text.pdf',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text.pdf',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 0,
          'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
    ),
  );
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
  $pane->uuid = '59f2a01f-68eb-4499-8cea-45dfeb0b533e';
  $display->content['new-59f2a01f-68eb-4499-8cea-45dfeb0b533e'] = $pane;
  $display->panels['middle'][4] = 'new-59f2a01f-68eb-4499-8cea-45dfeb0b533e';
  $pane = new stdClass();
  $pane->pid = 'new-52c60df2-a2fc-45ad-87cf-1f44d1986e40';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_challenge';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_check_variant',
        'settings' => array(
          'variant' => 'full-text',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '52c60df2-a2fc-45ad-87cf-1f44d1986e40';
  $display->content['new-52c60df2-a2fc-45ad-87cf-1f44d1986e40'] = $pane;
  $display->panels['middle'][5] = 'new-52c60df2-a2fc-45ad-87cf-1f44d1986e40';
  $pane = new stdClass();
  $pane->pid = 'new-f076ea66-4b65-4ed7-a4f8-c22c065fe8ec';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_challenge';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      3 => array(
        'name' => 'highwire_check_variant',
        'settings' => array(
          'variant' => 'full-text',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
      4 => array(
        'name' => 'highwire_check_variant',
        'settings' => array(
          'variant' => 'full-text.pdf',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      5 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text.pdf',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 0,
          'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'f076ea66-4b65-4ed7-a4f8-c22c065fe8ec';
  $display->content['new-f076ea66-4b65-4ed7-a4f8-c22c065fe8ec'] = $pane;
  $display->panels['middle'][6] = 'new-f076ea66-4b65-4ed7-a4f8-c22c065fe8ec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_tab_art'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_tab_data';
  $mini->category = 'Article Tab';
  $mini->admin_title = 'Article Tab - Figures & Data';
  $mini->admin_description = 'Provides "Figures & Data" tab';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Article',
      'keyword' => 'article',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9a714335-238d-47b7-a30f-486def63431f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_tab_data';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0b925385-6ae2-4371-b917-00815fdc71cb';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_challenge';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'highwire_google_firstclick_access',
        'settings' => array(
          'referer' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0b925385-6ae2-4371-b917-00815fdc71cb';
  $display->content['new-0b925385-6ae2-4371-b917-00815fdc71cb'] = $pane;
  $display->panels['middle'][0] = 'new-0b925385-6ae2-4371-b917-00815fdc71cb';
  $pane = new stdClass();
  $pane->pid = 'new-71ff3e96-eb01-4618-b7d6-1bf6e6679f5c';
  $pane->panel = 'middle';
  $pane->type = 'article_fig_data';
  $pane->subtype = 'article_fig_data';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 0,
          'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'variant' => 'expansion',
    'process' => array(
      'highwire_pdf_fallback' => 0,
      'highwire_extract_element' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_reclass' => 'highwire_reclass',
      'highwire_embed' => 'highwire_embed',
      'highwire_inline_ads' => 0,
      'highwire_url_rewrites' => 0,
      'highwire_author_affiliates' => 0,
      'highwire_article_glossary_popup' => 0,
      'highwire_image_protection' => 0,
      'highwire_quick_nav' => 0,
      'highwire_src_rewrites' => 0,
      'highwire_keywords' => 0,
      'highwire_video_flowplayer' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_socialcite_doi' => 0,
      'highwire_remove_invalid_links' => 0,
      'highwire_figures' => 'highwire_figures',
      'highwire_brightcove_video' => 0,
      'highwire_cc_logo' => 0,
      'highwire_at_symbol' => 0,
      'highwire_openurl' => 0,
      'highwire_math' => 'highwire_math',
      'highwire_inline_linked_media' => 0,
      'highwire_infotrieve_link' => 0,
      'highwire_arxiv_url' => 0,
      'highwire_doi' => 0,
      'highwire_disable_references' => 0,
      'highwire_collapsible_supplemental' => 0,
      'highwire_tables_expansion' => 'highwire_tables_expansion',
      'highwire_article_reference_popup' => 0,
      'highwire_tables' => 'highwire_tables',
      'highwire_delete_elements' => 0,
      'highwire_google_scholar' => 0,
    ),
    'process_settings' => array(
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
      ),
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
      ),
      'highwire_quick_nav' => array(
        'nav_down_icon' => 'icon-caret-down',
        'nav_up_icon' => 'icon-caret-up',
        'nav_class' => 'mobile-only float-me-right',
      ),
      'highwire_socialcite_doi' => array(
        'socialcite_partner_id' => '',
      ),
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'colorbox',
        'hide_caption' => 0,
        'exclude_protected' => 0,
      ),
      'highwire_brightcove_video' => array(
        'width' => '480',
        'height' => '270',
        'playerid' => '',
        'playerkey' => '',
      ),
      'highwire_cc_logo' => array(
        'path' => '',
      ),
      'highwire_infotrieve_link' => array(
        'link_label' => 'Order article via Infotrieve',
        'link_icon' => 'icon-usd',
      ),
      'highwire_doi' => array(
        'patterns' => '',
      ),
      'highwire_disable_references' => array(
        'links' => array(
          'cit-ref-sprinkles-crossref' => 0,
          'cit-ref-sprinkles-medline' => 0,
          'cit-ref-sprinkles-open-url' => 0,
          'cit-ref-sprinkles-webofscience' => 0,
          'cit-ref-sprinkles-georef' => 0,
        ),
        'available_links_fieldset' => array(
          'available_links' => 'cit-ref-sprinkles-crossref|Cross reference
cit-ref-sprinkles-medline|Medline
cit-ref-sprinkles-open-url|Open URL
cit-ref-sprinkles-webofscience|Web of Science
cit-ref-sprinkles-georef|GeoRef',
        ),
      ),
      'highwire_collapsible_supplemental' => array(
        'title_expand' => 'Expand view',
        'title_expand_icon' => 'icon-plus',
        'title_collapse' => 'Collapse view',
        'title_collapse_icon' => 'icon-minus',
        'title_subtitle' => 1,
        'expand_all' => 1,
        'title_all' => 'Expand all',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '',
        'selector' => '',
      ),
    ),
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
        'article_citation' => array(
          'citation_settings_source' => 'custom',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => array(),
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
            'highwire_book_edition' => array(
              'selector' => 0,
            ),
            'highwire_book_fragment' => array(
              'selector' => 0,
            ),
            'highwire_fragment' => array(
              'selector' => 0,
            ),
            'highwire_issue' => array(
              'selector' => 0,
            ),
            'highwire_book_section' => array(
              'selector' => 0,
            ),
            'highwire_journal' => array(
              'selector' => 0,
            ),
            'highwire_article' => array(
              'selector' => 0,
            ),
            'highwire_comment' => array(
              'selector' => 0,
            ),
          ),
          'bundle_overrides' => array(
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
            'highwire_book_fragment' => array(
              'selector' => 0,
              'citation_style' => 'mhra',
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
            'highwire_fragment' => array(
              'selector' => 0,
              'citation_style' => 'mhra',
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
          ),
        ),
      ),
      'index-by-author' => array(
        'article_citation' => array(
          'citation_settings_source' => 'custom',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => array(),
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
            'highwire_book_edition' => array(
              'selector' => 0,
            ),
            'highwire_book_fragment' => array(
              'selector' => 0,
            ),
            'highwire_fragment' => array(
              'selector' => 0,
            ),
            'highwire_issue' => array(
              'selector' => 0,
            ),
            'highwire_book_section' => array(
              'selector' => 0,
            ),
            'highwire_journal' => array(
              'selector' => 0,
            ),
            'highwire_article' => array(
              'selector' => 0,
            ),
            'highwire_comment' => array(
              'selector' => 0,
            ),
          ),
          'bundle_overrides' => array(
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
            'highwire_book_fragment' => array(
              'selector' => 0,
              'citation_style' => 'mhra',
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
            'highwire_fragment' => array(
              'selector' => 0,
              'citation_style' => 'mhra',
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
          ),
        ),
      ),
      'toc-tizra' => array(
        'tizra_site_code' => '',
        'tizra_api_token' => '',
        'row_highlight_style' => 'none',
        'tizra_toc_citation' => array(
          'title_html_tag' => 'h3',
          'title_link_target' => '_self',
          'title_classes' => '',
          'title_separator' => ': ',
          'toggle_section_nums' => array(
            'part' => 0,
            'chapter' => 0,
            'subpart' => 0,
            'lesson' => 0,
            'section' => 0,
            'unit' => 0,
          ),
          'part_num' => array(
            'format' => 'roman',
            'prefix' => 'Part ',
            'suffix' => '. ',
          ),
          'chapter_num' => array(
            'format' => 'roman',
            'prefix' => 'Chapter ',
            'suffix' => '. ',
          ),
          'subpart_num' => array(
            'format' => 'roman',
            'prefix' => 'Subpart ',
            'suffix' => '. ',
          ),
          'lesson_num' => array(
            'format' => 'roman',
            'prefix' => 'Lesson ',
            'suffix' => '. ',
          ),
          'section_num' => array(
            'format' => 'roman',
            'prefix' => 'Section ',
            'suffix' => '. ',
          ),
          'unit_num' => array(
            'format' => 'roman',
            'prefix' => 'Unit ',
            'suffix' => '. ',
          ),
          'toggle_access_indicator' => 1,
          'access_indicator' => array(
            'free' => array(
              'icon' => 'icon-unlock-alt',
              'title' => 'This section is free',
            ),
            'user_access' => array(
              'icon' => 'icon-ok-sign',
              'title' => 'You have access to this section',
            ),
            'no_access' => array(
              'icon' => 'icon-lock',
              'title' => 'Restricted access',
            ),
          ),
          'display_order' => '',
          'hide_book_contribs' => 1,
          'metadata_classes' => '',
          'toggle_georef_link' => 0,
          'georef_link' => array(
            'base_url' => '',
            'text' => 'View GeoRef Record',
            'icon' => '',
            'icon_pos' => 'before',
            'classes' => '',
            'target_new' => 1,
          ),
          'toggle_abstract' => 1,
          'abstract' => array(
            'abstract_type' => 'abstract',
            'handle_text' => 'Abstract',
            'handle_classes' => '',
            'container_classes' => '',
          ),
          'citation_col_classes' => '',
        ),
        'toggle_page' => 1,
        'page_num' => array(
          'page_content_classes' => '',
          'page_col_classes' => '',
        ),
        'toggle_dl_pdf' => 0,
        'dl_pdf' => array(
          'pdf_link_text' => 'PDF',
          'pdf_link_icon' => 'icon-cloud-download',
          'pdf_icon_position' => 'before',
          'pdf_empty_text' => '-',
          'pdf_link_classes' => '',
          'pdf_col_classes' => '',
        ),
      ),
    ),
    'variant_language' => '0',
    'hide_data_supp' => 0,
    'hide_related_data' => 0,
    'hide_jump_links' => 0,
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = '71ff3e96-eb01-4618-b7d6-1bf6e6679f5c';
  $display->content['new-71ff3e96-eb01-4618-b7d6-1bf6e6679f5c'] = $pane;
  $display->panels['middle'][1] = 'new-71ff3e96-eb01-4618-b7d6-1bf6e6679f5c';
  $pane = new stdClass();
  $pane->pid = 'new-0614e142-3a9a-4793-8019-fbe6c5fb80ea';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'jnl_isa_article_adjuct_index-panel_pane';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'highwire_google_firstclick_access',
        'settings' => array(
          'referer' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Supplementary Data',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0614e142-3a9a-4793-8019-fbe6c5fb80ea';
  $display->content['new-0614e142-3a9a-4793-8019-fbe6c5fb80ea'] = $pane;
  $display->panels['middle'][2] = 'new-0614e142-3a9a-4793-8019-fbe6c5fb80ea';
  $pane = new stdClass();
  $pane->pid = 'new-e16cc34e-3cb1-4c5f-bcb4-3d1db49f835a';
  $pane->panel = 'middle';
  $pane->type = 'earthchem';
  $pane->subtype = 'earthchem';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'show_label' => NULL,
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
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
  $pane->uuid = 'e16cc34e-3cb1-4c5f-bcb4-3d1db49f835a';
  $display->content['new-e16cc34e-3cb1-4c5f-bcb4-3d1db49f835a'] = $pane;
  $display->panels['middle'][3] = 'new-e16cc34e-3cb1-4c5f-bcb4-3d1db49f835a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_tab_data'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_tab_elets';
  $mini->category = 'Article Tab';
  $mini->admin_title = 'Article Tab - e-Letters';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Article',
      'keyword' => 'article',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'highwire_1col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f9a9caaf-9691-4ae6-b430-10e178efe43d';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_tab_elets';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-83e57ee0-3fcb-4858-8afd-8eceb0d1a193';
  $pane->panel = 'content';
  $pane->type = 'highwire_articles_comments';
  $pane->subtype = 'highwire_articles_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Jump to comment:',
    'override_title_heading' => 'h3',
    'show_empty_text' => 1,
    'empty_text' => 'No eLetters have been published for this article.',
    'citation_wrapper' => array(
      'citation' => array(
        'citation_settings_source' => 'custom',
        'citation_manager_wrapper' => array(
          'citation_manager_citation' => 'jcore_apa',
        ),
        'corpus_config_wrapper' => array(
          'corpus_config_citation_context' => array(),
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
        'display_variants_list_inline' => 0,
        'pdf_download' => array(
          'display_pdf_download' => 0,
          'pdf_download_icon' => 'icon-cloud-download',
          'pdf_download_text' => 'PDF',
        ),
        'include_on_behalf' => 0,
        'cpath_prefix' => '',
        'show_mark_citation' => 0,
        'display_infotrieve_link' => 0,
        'infotrieve_link_settings' => array(
          'icon' => 'icon-usd',
          'link_caption' => 'Order full text via Infotrieve',
        ),
        'bundle_overrides_checkboxes' => array(
          'highwire_article' => array(
            'selector' => 0,
          ),
          'highwire_book_edition' => array(
            'selector' => 0,
          ),
          'highwire_book_fragment' => array(
            'selector' => 0,
          ),
          'highwire_book_section' => array(
            'selector' => 0,
          ),
          'highwire_comment' => array(
            'selector' => 1,
          ),
          'highwire_fragment' => array(
            'selector' => 0,
          ),
          'highwire_issue' => array(
            'selector' => 0,
          ),
          'highwire_journal' => array(
            'selector' => 0,
          ),
          'highwire_news_story' => array(
            'selector' => 0,
          ),
        ),
        'bundle_overrides' => array(
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
            'include_on_behalf' => 0,
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
            'display_orcid_icon' => 0,
            'display_cme_link' => 0,
            'display_cme_link_attributes' => array(
              'target' => '',
            ),
            'display_abstract_tooltip' => 0,
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
            'include_on_behalf' => 1,
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
          'highwire_comment' => array(
            'selector' => 1,
            'citation_style' => 'highwire_comment',
            'show_title' => 1,
            'title_as_link' => 1,
            'title_as_link_type' => 'anchored',
            'add_title_anchor' => 0,
            'author_format_type' => 'fullname',
            'author_format_custom' => '',
            'author_list_separator' => ', ',
            'date_label' => 'Published on:',
            'date_format' => 'd F Y',
            'display_comment_body' => 0,
            'style_comment_body' => array(
              'enable_show_more_link' => 1,
              'show_more_link_title' => 'Show More',
              'show_less_link_title' => 'Show Less',
              'full_text_body_length' => '1500',
            ),
            'display_attachment' => 0,
            'display_conflict_of_interest' => 0,
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
            'include_on_behalf' => 1,
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
              'include_on_behalf' => 0,
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
              'display_orcid_icon' => 0,
              'display_cme_link' => 0,
              'display_cme_link_attributes' => array(
                'target' => '',
              ),
              'display_abstract_tooltip' => 0,
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
            'display_highlight_image' => 0,
            'highlight_image_style' => '',
            'featured_image_click_image' => 'node',
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 1,
            'display_pubmed_tooltip' => 1,
            'display_advanced_search_tooltip' => 1,
            'display_author_landing_page_tooltip' => 0,
            'display_orcid_tooltip' => 1,
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
            'display_highlight_image' => '0',
            'highlight_image_style' => '',
            'featured_image_click_image' => 'nothing',
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 0,
            'display_pubmed_tooltip' => 0,
            'display_advanced_search_tooltip' => 0,
          ),
        ),
      ),
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'highwire-comments-anchor-list no-margin-bottom',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '83e57ee0-3fcb-4858-8afd-8eceb0d1a193';
  $display->content['new-83e57ee0-3fcb-4858-8afd-8eceb0d1a193'] = $pane;
  $display->panels['content'][0] = 'new-83e57ee0-3fcb-4858-8afd-8eceb0d1a193';
  $pane = new stdClass();
  $pane->pid = 'new-e86e91b7-273d-47ff-90ab-b9b97a04ec22';
  $pane->panel = 'content';
  $pane->type = 'highwire_articles_comments';
  $pane->subtype = 'highwire_articles_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'show_empty_text' => 0,
    'empty_text' => 'No eLetters have been published for this article.',
    'citation_wrapper' => array(
      'citation' => array(
        'citation_settings_source' => 'custom',
        'citation_manager_wrapper' => array(
          'citation_manager_citation' => 'jcore_apa',
        ),
        'corpus_config_wrapper' => array(
          'corpus_config_citation_context' => array(),
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
          'highwire_article' => array(
            'selector' => 0,
          ),
          'highwire_book_edition' => array(
            'selector' => 0,
          ),
          'highwire_book_fragment' => array(
            'selector' => 0,
          ),
          'highwire_book_section' => array(
            'selector' => 0,
          ),
          'highwire_comment' => array(
            'selector' => 1,
          ),
          'highwire_fragment' => array(
            'selector' => 0,
          ),
          'highwire_issue' => array(
            'selector' => 0,
          ),
          'highwire_journal' => array(
            'selector' => 0,
          ),
          'highwire_news_story' => array(
            'selector' => 0,
          ),
        ),
        'bundle_overrides' => array(
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
            'include_on_behalf' => 0,
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
            'display_orcid_icon' => 0,
            'display_cme_link' => 0,
            'display_cme_link_attributes' => array(
              'target' => '',
            ),
            'display_abstract_tooltip' => 0,
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
            'include_on_behalf' => 1,
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
          'highwire_comment' => array(
            'selector' => 1,
            'citation_style' => 'highwire_comment_tab_list',
            'show_title' => 1,
            'title_as_link' => 0,
            'title_as_link_type' => 'tab_view',
            'add_title_anchor' => 1,
            'author_format_type' => 'fullname',
            'author_format_custom' => '',
            'author_list_separator' => ', ',
            'date_label' => 'Published on:',
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
            'include_on_behalf' => 1,
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
              'include_on_behalf' => 0,
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
              'display_orcid_icon' => 0,
              'display_cme_link' => 0,
              'display_cme_link_attributes' => array(
                'target' => '',
              ),
              'display_abstract_tooltip' => 0,
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
            'display_highlight_image' => 0,
            'highlight_image_style' => '',
            'featured_image_click_image' => 'node',
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 1,
            'display_pubmed_tooltip' => 1,
            'display_advanced_search_tooltip' => 1,
            'display_author_landing_page_tooltip' => 0,
            'display_orcid_tooltip' => 1,
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
            'display_highlight_image' => '0',
            'highlight_image_style' => '',
            'featured_image_click_image' => 'nothing',
            'display_author_tooltip' => 0,
            'display_google_scholar_tooltip' => 0,
            'display_pubmed_tooltip' => 0,
            'display_advanced_search_tooltip' => 0,
          ),
        ),
      ),
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e86e91b7-273d-47ff-90ab-b9b97a04ec22';
  $display->content['new-e86e91b7-273d-47ff-90ab-b9b97a04ec22'] = $pane;
  $display->panels['content'][1] = 'new-e86e91b7-273d-47ff-90ab-b9b97a04ec22';
  $pane = new stdClass();
  $pane->pid = 'new-75eaaec5-b3e4-4a4d-b2d3-610a8cc194e5';
  $pane->panel = 'top';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_e_letters',
    'override_title' => 1,
    'override_title_text' => 'Published eLetters',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '75eaaec5-b3e4-4a4d-b2d3-610a8cc194e5';
  $display->content['new-75eaaec5-b3e4-4a4d-b2d3-610a8cc194e5'] = $pane;
  $display->panels['top'][0] = 'new-75eaaec5-b3e4-4a4d-b2d3-610a8cc194e5';
  $pane = new stdClass();
  $pane->pid = 'new-3c36d952-26ed-4eea-8e85-42aa2b85e73b';
  $pane->panel = 'top';
  $pane->type = 'highwire_article_add_comments';
  $pane->subtype = 'highwire_article_add_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'collapse_expand_link' => 1,
    'response_link' => 1,
    'redirect_to_plugin' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3c36d952-26ed-4eea-8e85-42aa2b85e73b';
  $display->content['new-3c36d952-26ed-4eea-8e85-42aa2b85e73b'] = $pane;
  $display->panels['top'][1] = 'new-3c36d952-26ed-4eea-8e85-42aa2b85e73b';
  $pane = new stdClass();
  $pane->pid = 'new-ddca1053-209a-41c0-9888-86e0eb63f7b7';
  $pane->panel = 'top';
  $pane->type = 'highwire_article_comments_form';
  $pane->subtype = 'highwire_article_comments_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'return' => 'Finish',
    'cancel' => 'Cancel',
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'anchor_list' => 0,
    'comment_list' => 0,
    'response_link' => 0,
    'redirect_to_plugin' => 0,
    'form_build_id' => 'form-9dL25lOodCSgynXZZssIL_sbICzzdTN9DVezIbvsVSI',
    'form_token' => 'zZVGuI21XU3TCJwVuP910lMiExQ5Ujd68pRsUY2umYs',
    'form_id' => 'highwire_highwire_article_comments_form_content_type_edit_form',
    'op' => 'Finish',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'hw-e-letters-form',
    'css_class' => 'hw-e-eletters-form-hidden',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ddca1053-209a-41c0-9888-86e0eb63f7b7';
  $display->content['new-ddca1053-209a-41c0-9888-86e0eb63f7b7'] = $pane;
  $display->panels['top'][2] = 'new-ddca1053-209a-41c0-9888-86e0eb63f7b7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_tab_elets'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_tab_info';
  $mini->category = 'Article Tab';
  $mini->admin_title = 'Article Tab - Info & Metrics';
  $mini->admin_description = 'Provides Article "Info & Metrics" Tab';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Article',
      'keyword' => 'article',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8c85a4ca-2fb4-4ee6-afe9-ec2a28c370aa';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_tab_info';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4c3d7b39-0adb-41c9-ab3c-f89a804a42fd';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_art_info';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
    ),
    'override_title' => 1,
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
  $pane->uuid = '4c3d7b39-0adb-41c9-ab3c-f89a804a42fd';
  $display->content['new-4c3d7b39-0adb-41c9-ab3c-f89a804a42fd'] = $pane;
  $display->panels['middle'][0] = 'new-4c3d7b39-0adb-41c9-ab3c-f89a804a42fd';
  $pane = new stdClass();
  $pane->pid = 'new-bfb872ff-7680-4896-b1e4-357740e150d8';
  $pane->panel = 'middle';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'variant' => 'abstract',
    'process' => array(
      'highwire_figures' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_openurl' => 0,
      'highwire_reclass' => 0,
      'highwire_at_symbol' => 'highwire_at_symbol',
      'highwire_extract_element' => 'highwire_extract_element',
      'highwire_article_reference_popup' => 0,
      'highwire_url_rewrites' => 0,
      'highwire_author_affiliates' => 0,
      'highwire_google_scholar' => 0,
      'highwire_src_rewrites' => 0,
      'highwire_tables' => 0,
      'highwire_video' => 0,
      'highwire_pdf_fallback' => 0,
      'highwire_embed' => 0,
      'highwire_math' => 0,
      'highwire_inline_ads' => 0,
      'highwire_delete_elements' => 'highwire_delete_elements',
    ),
    'variant_404' => 'display_nothing',
    'ac_403' => 'display_nothing',
    'variant_custom_text' => '',
    'variant_url' => '',
    'ac_custom_text' => '',
    'ac_url' => '',
    'disable_logging' => 1,
    'lock_variant' => 1,
    'disable_ac' => 1,
    'process_settings' => array(
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'colorbox',
      ),
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
      ),
      'highwire_extract_element' => array(
        'xpath' => '//xhtml:div[@class=\'contributors\']',
      ),
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '//xhtml:ul[@class=\'history-list\']',
        'selector' => '',
      ),
    ),
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
        'article_citation' => array(
          'citation_style' => 'mla',
          'title_type' => 'full',
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'display_access_indicator_text' => 0,
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
        ),
      ),
      'index-by-author' => array(
        'article_citation' => array(
          'citation_style' => 'mla',
          'title_type' => 'full',
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'display_access_indicator_text' => 0,
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
        ),
      ),
    ),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Author Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bfb872ff-7680-4896-b1e4-357740e150d8';
  $display->content['new-bfb872ff-7680-4896-b1e4-357740e150d8'] = $pane;
  $display->panels['middle'][1] = 'new-bfb872ff-7680-4896-b1e4-357740e150d8';
  $pane = new stdClass();
  $pane->pid = 'new-fc8e1c17-3e60-432c-b02c-9fe195da2848';
  $pane->panel = 'middle';
  $pane->type = 'highwire_funding_info';
  $pane->subtype = 'highwire_funding_info';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Funding',
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
  $pane->uuid = 'fc8e1c17-3e60-432c-b02c-9fe195da2848';
  $display->content['new-fc8e1c17-3e60-432c-b02c-9fe195da2848'] = $pane;
  $display->panels['middle'][2] = 'new-fc8e1c17-3e60-432c-b02c-9fe195da2848';
  $pane = new stdClass();
  $pane->pid = 'new-3a8db3b7-6a0d-4bfb-9a87-e136f44b1b03';
  $pane->panel = 'middle';
  $pane->type = 'highwire_impact_story';
  $pane->subtype = 'highwire_impact_story';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Metrics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3a8db3b7-6a0d-4bfb-9a87-e136f44b1b03';
  $display->content['new-3a8db3b7-6a0d-4bfb-9a87-e136f44b1b03'] = $pane;
  $display->panels['middle'][3] = 'new-3a8db3b7-6a0d-4bfb-9a87-e136f44b1b03';
  $pane = new stdClass();
  $pane->pid = 'new-7ecba84f-2568-4ee2-989f-00f9584c91ec';
  $pane->panel = 'middle';
  $pane->type = 'highwire_stats';
  $pane->subtype = 'highwire_stats';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Article usage',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '7ecba84f-2568-4ee2-989f-00f9584c91ec';
  $display->content['new-7ecba84f-2568-4ee2-989f-00f9584c91ec'] = $pane;
  $display->panels['middle'][4] = 'new-7ecba84f-2568-4ee2-989f-00f9584c91ec';
  $pane = new stdClass();
  $pane->pid = 'new-a6b77bdb-9566-45e1-ac91-5be3ef7f94b8';
  $pane->panel = 'middle';
  $pane->type = 'highwire_cited_by';
  $pane->subtype = 'highwire_cited_by';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'display_list' => 0,
    'title_with_link' => 0,
    'show_variant_links' => 0,
    'no_results_text' => 'No citing articles found.',
    'external_links' => array(
      'isi' => 'isi',
      'scopus' => 'scopus',
      'crossref' => 'crossref',
      'google' => 'google',
    ),
    'show_logo' => 1,
    'isi_title' => '!count Citations',
    'scopus_title' => '!count Citations',
    'crossref_title' => '!count Citations',
    'google_title' => 'Citations vai Google Scholar',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'a6b77bdb-9566-45e1-ac91-5be3ef7f94b8';
  $display->content['new-a6b77bdb-9566-45e1-ac91-5be3ef7f94b8'] = $pane;
  $display->panels['middle'][5] = 'new-a6b77bdb-9566-45e1-ac91-5be3ef7f94b8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_tab_info'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_tab_pdf';
  $mini->category = 'Article Tab';
  $mini->admin_title = 'Article Tab - PDF';
  $mini->admin_description = 'Provides the PDF article tab';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Article',
      'keyword' => 'article',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0361b92b-74e9-4900-8aba-c14c89dd678d';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_tab_pdf';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-16f61184-701c-4298-b6d9-0dfb63f67241';
  $pane->panel = 'middle';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text.pdf+html',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 0,
          'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'variant' => 'full-text.pdf+html',
    'process' => array(
      'highwire_article_reference_popup' => 0,
      'highwire_at_symbol' => 0,
      'highwire_author_affiliates' => 0,
      'highwire_google_scholar' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_css' => 0,
      'highwire_delete_elements' => 0,
      'highwire_embed' => 0,
      'highwire_extract_element' => 0,
      'highwire_figures' => 0,
      'highwire_inline_ads' => 0,
      'highwire_math' => 0,
      'highwire_openurl' => 0,
      'highwire_pdf_fallback' => 0,
      'highwire_reclass' => 0,
      'highwire_src_rewrites' => 0,
      'highwire_tables' => 0,
      'highwire_url_rewrites' => 0,
      'highwire_video' => 0,
    ),
    'variant_404' => 'custom_text',
    'ac_403' => 'display_nothing',
    'variant_custom_text' => 'Error: PDF could not be found',
    'variant_url' => '',
    'ac_custom_text' => '',
    'ac_url' => '',
    'disable_logging' => 0,
    'lock_variant' => 1,
    'disable_ac' => 0,
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
        'article_citation' => array(
          'citation_style' => 'mla',
          'title_type' => 'full',
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'display_access_indicator_text' => 0,
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
        ),
      ),
      'toc-tizra' => array(
        'tizra_feed_url' => '',
      ),
      'index-by-author' => array(
        'article_citation' => array(
          'citation_style' => 'mla',
          'title_type' => 'full',
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'display_access_indicator_text' => 0,
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
        ),
      ),
    ),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
    'referer_first_click' => 1,
    'process_settings' => array(
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '',
        'selector' => '',
      ),
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'colorbox',
      ),
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
      ),
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '16f61184-701c-4298-b6d9-0dfb63f67241';
  $display->content['new-16f61184-701c-4298-b6d9-0dfb63f67241'] = $pane;
  $display->panels['middle'][0] = 'new-16f61184-701c-4298-b6d9-0dfb63f67241';
  $pane = new stdClass();
  $pane->pid = 'new-b859e56c-bb07-48d3-83bd-5eecdb86682b';
  $pane->panel = 'middle';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text.pdf+html',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 0,
          'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'variant' => 'long',
    'process' => array(
      'highwire_figures' => 'highwire_figures',
      'highwire_video_flowplayer' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_openurl' => 'highwire_openurl',
      'highwire_reclass' => 'highwire_reclass',
      'highwire_at_symbol' => 'highwire_at_symbol',
      'highwire_extract_element' => 0,
      'highwire_article_reference_popup' => 'highwire_article_reference_popup',
      'highwire_url_rewrites' => 0,
      'highwire_author_affiliates' => 0,
      'highwire_google_scholar' => 'highwire_google_scholar',
      'highwire_src_rewrites' => 0,
      'highwire_tables' => 'highwire_tables',
      'highwire_pdf_fallback' => 0,
      'highwire_embed' => 'highwire_embed',
      'highwire_math' => 'highwire_math',
      'highwire_inline_ads' => 0,
      'highwire_delete_elements' => 'highwire_delete_elements',
    ),
    'variant_404' => 'not_found',
    'ac_403' => 'access_denied',
    'variant_custom_text' => '',
    'variant_url' => '',
    'ac_custom_text' => '',
    'ac_url' => '',
    'disable_logging' => 0,
    'lock_variant' => 1,
    'disable_ac' => 0,
    'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
    'referer_first_click' => 1,
    'process_settings' => array(
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'colorbox',
      ),
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
      ),
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '//xhtml:div[@class="contributors"]
//xhtml:h2[@class="subtitle"]',
        'selector' => '',
      ),
    ),
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
        'article_citation' => array(
          'citation_style' => 'mla',
          'title_type' => 'full',
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'display_access_indicator_text' => 0,
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
        ),
      ),
      'toc-tizra' => array(
        'tizra_feed_url' => '',
      ),
      'index-by-author' => array(
        'article_citation' => array(
          'citation_style' => 'mla',
          'title_type' => 'full',
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'display_access_indicator_text' => 0,
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
        ),
      ),
    ),
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = 'b859e56c-bb07-48d3-83bd-5eecdb86682b';
  $display->content['new-b859e56c-bb07-48d3-83bd-5eecdb86682b'] = $pane;
  $display->panels['middle'][1] = 'new-b859e56c-bb07-48d3-83bd-5eecdb86682b';
  $pane = new stdClass();
  $pane->pid = 'new-314dd075-469a-4c9d-9e02-358d1c5b7136';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_challenge';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text.pdf',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'highwire_google_firstclick_access',
        'settings' => array(
          'referer' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
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
  $pane->uuid = '314dd075-469a-4c9d-9e02-358d1c5b7136';
  $display->content['new-314dd075-469a-4c9d-9e02-358d1c5b7136'] = $pane;
  $display->panels['middle'][2] = 'new-314dd075-469a-4c9d-9e02-358d1c5b7136';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_tab_pdf'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_tab_pdf_si';
  $mini->category = 'Article Tab';
  $mini->admin_title = 'Article Tab - PDF + Supplements';
  $mini->admin_description = 'Provides the PDF + Supplements article tab';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Article',
      'keyword' => 'article',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c1242fe5-22e8-4046-9d92-4bdfd4a97bca';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_tab_pdf_si';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-60df08c2-f42a-43ce-a73c-0ccb299a144b';
  $pane->panel = 'middle';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text.pdf+html',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 0,
          'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'variant' => 'full-text.pdf+html',
    'process' => array(
      'highwire_article_reference_popup' => 0,
      'highwire_at_symbol' => 0,
      'highwire_author_affiliates' => 0,
      'highwire_google_scholar' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_css' => 0,
      'highwire_delete_elements' => 0,
      'highwire_embed' => 0,
      'highwire_extract_element' => 0,
      'highwire_figures' => 0,
      'highwire_inline_ads' => 0,
      'highwire_math' => 0,
      'highwire_openurl' => 0,
      'highwire_pdf_fallback' => 0,
      'highwire_reclass' => 0,
      'highwire_src_rewrites' => 0,
      'highwire_tables' => 0,
      'highwire_url_rewrites' => 0,
      'highwire_video' => 0,
    ),
    'variant_404' => 'custom_text',
    'ac_403' => 'display_nothing',
    'variant_custom_text' => 'Error: PDF could not be found',
    'variant_url' => '',
    'ac_custom_text' => '',
    'ac_url' => '',
    'disable_logging' => 0,
    'lock_variant' => 1,
    'disable_ac' => 0,
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
        'article_citation' => array(
          'citation_style' => 'mla',
          'title_type' => 'full',
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'display_access_indicator_text' => 0,
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
        ),
      ),
      'toc-tizra' => array(
        'tizra_feed_url' => '',
      ),
      'index-by-author' => array(
        'article_citation' => array(
          'citation_style' => 'mla',
          'title_type' => 'full',
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'display_access_indicator_text' => 0,
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
        ),
      ),
    ),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
    'referer_first_click' => 1,
    'process_settings' => array(
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '',
        'selector' => '',
      ),
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'colorbox',
      ),
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
      ),
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '60df08c2-f42a-43ce-a73c-0ccb299a144b';
  $display->content['new-60df08c2-f42a-43ce-a73c-0ccb299a144b'] = $pane;
  $display->panels['middle'][0] = 'new-60df08c2-f42a-43ce-a73c-0ccb299a144b';
  $pane = new stdClass();
  $pane->pid = 'new-5761d8f7-3881-4491-99e4-cb0dda511046';
  $pane->panel = 'middle';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text.pdf+html',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 0,
          'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'variant' => 'long',
    'process' => array(
      'highwire_figures' => 'highwire_figures',
      'highwire_video_flowplayer' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_openurl' => 'highwire_openurl',
      'highwire_reclass' => 'highwire_reclass',
      'highwire_at_symbol' => 'highwire_at_symbol',
      'highwire_extract_element' => 0,
      'highwire_article_reference_popup' => 'highwire_article_reference_popup',
      'highwire_url_rewrites' => 0,
      'highwire_author_affiliates' => 0,
      'highwire_google_scholar' => 'highwire_google_scholar',
      'highwire_src_rewrites' => 0,
      'highwire_tables' => 'highwire_tables',
      'highwire_pdf_fallback' => 0,
      'highwire_embed' => 'highwire_embed',
      'highwire_math' => 'highwire_math',
      'highwire_inline_ads' => 0,
      'highwire_delete_elements' => 'highwire_delete_elements',
    ),
    'variant_404' => 'not_found',
    'ac_403' => 'access_denied',
    'variant_custom_text' => '',
    'variant_url' => '',
    'ac_custom_text' => '',
    'ac_url' => '',
    'disable_logging' => 0,
    'lock_variant' => 1,
    'disable_ac' => 0,
    'referer_first_click_referers' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
    'referer_first_click' => 1,
    'process_settings' => array(
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'colorbox',
      ),
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
      ),
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '//xhtml:div[@class="contributors"]
//xhtml:h2[@class="subtitle"]',
        'selector' => '',
      ),
    ),
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
        'article_citation' => array(
          'citation_style' => 'mla',
          'title_type' => 'full',
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'display_access_indicator_text' => 0,
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
        ),
      ),
      'toc-tizra' => array(
        'tizra_feed_url' => '',
      ),
      'index-by-author' => array(
        'article_citation' => array(
          'citation_style' => 'mla',
          'title_type' => 'full',
          'title_as_link' => 0,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'display_markup_snippet' => '',
          'display_original_link' => 0,
          'display_access_indicator' => 0,
          'display_access_indicator_text' => 0,
          'display_variants' => 0,
          'display_supplements' => 0,
          'display_abstract_tooltip' => 0,
          'display_author_tooltip' => 0,
        ),
      ),
    ),
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = '5761d8f7-3881-4491-99e4-cb0dda511046';
  $display->content['new-5761d8f7-3881-4491-99e4-cb0dda511046'] = $pane;
  $display->panels['middle'][1] = 'new-5761d8f7-3881-4491-99e4-cb0dda511046';
  $pane = new stdClass();
  $pane->pid = 'new-d59c4e18-a4ca-4c37-8925-dd583a90f179';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_challenge';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'full-text.pdf',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'highwire_google_firstclick_access',
        'settings' => array(
          'referer' => 'google.com
google.ac
google.ad
google.ae
google.com.af
google.com.ag
google.com.ai
google.al
google.am
google.co.ao
google.com.ar
google.as
google.at
google.com.au
google.az
google.ba
google.com.bd
google.be
google.bf
google.bg
google.com.bh
google.bi
google.bj
google.com.bn
google.com.bo
google.com.br
google.bs
google.co.bw
google.by
google.com.bz
google.ca
google.com.kh
google.cc
google.cd
google.cf
google.cat
google.cg
google.ch
google.ci
google.co.ck
google.cl
google.cm
google.cn
g.cn
google.com.co
google.co.cr
google.com.cu
google.cv
google.com.cy
google.cz
google.de
google.dj
google.dk
google.dm
google.com.do
google.dz
google.com.ec
google.ee
google.com.eg
google.es
google.com.et
google.fi
google.com.fj
google.fm
google.fr
google.ga
google.ge
google.gf
google.gg
google.com.gh
google.com.gi
google.gl
google.gm
google.gp
google.gr
google.com.gt
google.gy
google.com.hk
google.hn
google.hr
google.ht
google.hu
google.co.id
google.iq
google.ie
google.co.il
google.im
google.co.in
google.io
google.is
google.it
google.je
google.com.jm
google.jo
google.co.jp
google.co.ke
google.ki
google.kg
google.co.kr
google.com.kw
google.kz
google.la
google.com.lb
google.com.lc
google.li
google.lk
google.co.ls
google.lt
google.lu
google.lv
google.com.ly
google.co.ma
google.md
google.me
google.mg
google.mk
google.ml
google.mn
google.ms
google.com.mt
google.mu
google.mv
google.mw
google.com.mx
google.com.my
google.co.mz
google.com.na
google.ne
google.com.nf
google.com.ng
google.com.ni
google.nl
google.no
google.com.np
google.nr
google.nu
google.co.nz
google.com.om
google.com.pa
google.com.pe
google.com.ph
google.com.pk
google.pl
google.com.pg
google.pn
google.com.pr
google.ps
google.pt
google.com.py
google.com.qa
google.ro
google.rs
google.ru
google.rw
google.com.sa
google.com.sb
google.sc
google.se
google.com.sg
google.sh
google.si
google.sk
google.com.sl
google.sn
google.sm
google.so
google.st
google.com.sv
google.td
google.tg
google.co.th
google.com.tj
google.tk
google.tl
google.tm
google.to
google.com.tn
google.com.tr
google.tt
google.com.tw
google.co.tz
google.com.ua
google.co.ug
google.co.uk
google.us
google.com.uy
google.co.uz
google.com.vc
google.co.ve
google.vg
google.co.vi
google.com.vn
google.vu
google.ws
google.co.za
google.co.zm
google.co.zw
google.com.mm',
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
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
  $pane->uuid = 'd59c4e18-a4ca-4c37-8925-dd583a90f179';
  $display->content['new-d59c4e18-a4ca-4c37-8925-dd583a90f179'] = $pane;
  $display->panels['middle'][2] = 'new-d59c4e18-a4ca-4c37-8925-dd583a90f179';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_tab_pdf_si'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_tab_supp';
  $mini->category = 'Article Tab';
  $mini->admin_title = 'Article Tab-  Supplemental';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Article',
      'keyword' => 'article',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content_left' => NULL,
      'content_right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d5d11cc-c12e-4235-9a9b-1d36410eb9d2';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_tab_supp';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c1e4f4d1-1050-49c3-a2f5-dfa6f3c6b0fb';
  $pane->panel = 'middle';
  $pane->type = 'highwire_article_data_supp';
  $pane->subtype = 'highwire_article_data_supp';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = 'c1e4f4d1-1050-49c3-a2f5-dfa6f3c6b0fb';
  $display->content['new-c1e4f4d1-1050-49c3-a2f5-dfa6f3c6b0fb'] = $pane;
  $display->panels['middle'][0] = 'new-c1e4f4d1-1050-49c3-a2f5-dfa6f3c6b0fb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_tab_supp'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_trans_dls';
  $mini->category = 'Article Page';
  $mini->admin_title = 'Article Page - Translation Downloads';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'region_accordion_id' => 'translation-downloads',
        'active' => '0',
        'animated' => 'slide',
        'collapsible' => 1,
        'autoHeight' => '1',
        'heightStyle' => 'content',
      ),
      'middle' => NULL,
    ),
    'style' => 'accordion',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0406e167-85ab-4edf-9425-7a685efeb6de';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_trans_dls';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-63b8b37e-af10-4521-b9e5-809b84e9fe41';
  $pane->panel = 'middle';
  $pane->type = 'highwire_foreign_lg_dl_variants';
  $pane->subtype = 'highwire_foreign_lg_dl_variants';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'title' => 'Available Languages',
    'icon' => 'icon-file-alt',
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => '<i class="icon-globe"></i> Translation Downloads',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_collapsed' => 1,
    ),
    'style' => 'accordion',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '63b8b37e-af10-4521-b9e5-809b84e9fe41';
  $display->content['new-63b8b37e-af10-4521-b9e5-809b84e9fe41'] = $pane;
  $display->panels['middle'][0] = 'new-63b8b37e-af10-4521-b9e5-809b84e9fe41';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-63b8b37e-af10-4521-b9e5-809b84e9fe41';
  $mini->display = $display;
  $export['jnl_isa_trans_dls'] = $mini;

  return $export;
}
