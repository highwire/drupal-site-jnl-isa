<?php
/**
 * @file
 * jnl_isa_direct_publishing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jnl_isa_direct_publishing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'direct_publishing_news_collection_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'jnl_isa - Direct Publishing: News Collection Terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'inline list-pills';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'highwire_atom_collections' => 'highwire_atom_collections',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'HW Direct Publishing';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'current_issue.field_highwire_adjunct_subject',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['direct_publishing_news_collection_terms'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('node'),
    t('All'),
    t('Content pane'),
    t('HW Direct Publishing'),
  );
  $export['direct_publishing_news_collection_terms'] = $view;

  $view = new view();
  $view->name = 'jnl_isa_dp_featured_news';
  $view->description = 'Views related to news articles and featured news.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'jnl_isa - Direct Publishing Featured News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'highwire_article_citation_list';
  $handler->display->display_options['style_options']['citation_settings_source'] = 'citation_manager';
  $handler->display->display_options['style_options']['citation_manager_wrapper'] = array(
    'citation_manager_citation' => 'jcore_featured_content',
  );
  $handler->display->display_options['style_options']['corpus_config_wrapper'] = array(
    'corpus_config_citation_context' => 'home_featured',
  );
  $handler->display->display_options['style_options']['citation_style'] = 'highwire_featured_news';
  $handler->display->display_options['style_options']['cache_enabled'] = 1;
  $handler->display->display_options['style_options']['cache_time'] = '86400';
  $handler->display->display_options['style_options']['title_type'] = 'full';
  $handler->display->display_options['style_options']['short_title_options'] = array(
    'char_count' => '',
    'add_ellipsis' => 0,
  );
  $handler->display->display_options['style_options']['title_as_link'] = 1;
  $handler->display->display_options['style_options']['display_subtitle'] = 0;
  $handler->display->display_options['style_options']['choose_pubdate'] = 'epubdate';
  $handler->display->display_options['style_options']['pubdate_format_type'] = 'hw_date_long';
  $handler->display->display_options['style_options']['pubdate_format_custom'] = '';
  $handler->display->display_options['style_options']['display_markup_snippet'] = '';
  $handler->display->display_options['style_options']['highlight_image_toggle'] = 0;
  $handler->display->display_options['style_options']['display_original_link'] = 0;
  $handler->display->display_options['style_options']['display_access_indicator'] = 0;
  $handler->display->display_options['style_options']['access_indicator_settings'] = array(
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
  );
  $handler->display->display_options['style_options']['display_variants'] = 0;
  $handler->display->display_options['style_options']['display_supplements'] = 0;
  $handler->display->display_options['style_options']['display_variants_list_inline'] = 0;
  $handler->display->display_options['style_options']['pdf_download'] = array(
    'display_pdf_download' => 0,
    'pdf_download_icon' => '',
    'pdf_download_text' => '',
  );
  $handler->display->display_options['style_options']['cpath_prefix'] = '/content';
  $handler->display->display_options['style_options']['show_mark_citation'] = 0;
  $handler->display->display_options['style_options']['display_infotrieve_link'] = 0;
  $handler->display->display_options['style_options']['infotrieve_link_settings'] = array(
    'icon' => '',
    'link_caption' => '',
  );
  $handler->display->display_options['style_options']['bundle_overrides_checkboxes'] = array(
    'highwire_book_fragment' => array(
      'selector' => 0,
    ),
    'highwire_news_story' => array(
      'selector' => 1,
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
  );
  $handler->display->display_options['style_options']['bundle_overrides'] = array(
    'highwire_book_fragment' => array(
      'selector' => 0,
      'citation_style' => 'mhra',
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
      'selector' => 1,
      'citation_style' => 'highwire_featured_news',
      'cache_enabled' => 1,
      'cache_time' => '600',
      'title_type' => 'full',
      'short_title_options' => array(
        'char_count' => '50',
        'add_ellipsis' => 0,
      ),
      'title_as_link' => 1,
      'display_subtitle' => 0,
      'choose_pubdate' => 'epubdate',
      'pubdate_format_type' => 'hw_date_long',
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
      'cpath_prefix' => '/content',
      'show_mark_citation' => 0,
      'display_infotrieve_link' => 0,
      'infotrieve_link_settings' => array(
        'icon' => 'icon-usd',
        'link_caption' => 'Order full text via Infotrieve',
      ),
      'display_highlight_image' => 'featured.html',
      'highlight_image_style' => 'medium',
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
      'featured_image_click_image' => 'colorbox',
      'display_author_settings' => array(
        'author_format_type' => '_custom',
        'author_format_custom' => 'f lc',
        'author_list_separator' => ', ',
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
      'display_translations_text' => 'Traslations Available',
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
      'citation_style' => 'mhra',
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
        'featured_image_click_image' => 'colorbox',
        'display_author_settings' => array(
          'author_format_type' => '_custom',
          'author_format_custom' => 'f lc',
          'author_list_separator' => ', ',
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
        'display_translations_text' => 'Traslations Available',
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
  );
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: HighWire Atom Subject Collections (field_highwire_a_atom_subjects) */
  $handler->display->display_options['relationships']['field_highwire_a_atom_subjects_tid']['id'] = 'field_highwire_a_atom_subjects_tid';
  $handler->display->display_options['relationships']['field_highwire_a_atom_subjects_tid']['table'] = 'field_data_field_highwire_a_atom_subjects';
  $handler->display->display_options['relationships']['field_highwire_a_atom_subjects_tid']['field'] = 'field_highwire_a_atom_subjects_tid';
  $handler->display->display_options['relationships']['field_highwire_a_atom_subjects_tid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Electronic Publication Date -  start date (field_highwire_a_epubdate) */
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['id'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['table'] = 'field_data_field_highwire_a_epubdate';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['field'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_news_story' => 'highwire_news_story',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: HighWire AC Term ID (field_highwire_ac_term_id) */
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['id'] = 'field_highwire_ac_term_id_value';
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['table'] = 'field_data_field_highwire_ac_term_id';
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['field'] = 'field_highwire_ac_term_id_value';
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['relationship'] = 'field_highwire_a_atom_subjects_tid';
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['value'] = 'featured';
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['group'] = 1;
  /* Filter criterion: Content: HighWire: News Story Type (field_highwire_news_story_type) */
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['id'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['table'] = 'field_data_field_highwire_news_story_type';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['field'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['value'] = 'news';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['group'] = 1;

  /* Display: Featured News */
  $handler = $view->new_display('panel_pane', 'Featured News', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'HW Direct Publishing';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Featured Blogs */
  $handler = $view->new_display('panel_pane', 'Featured Blogs', 'panel_pane_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_news_story' => 'highwire_news_story',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: HighWire AC Term ID (field_highwire_ac_term_id) */
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['id'] = 'field_highwire_ac_term_id_value';
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['table'] = 'field_data_field_highwire_ac_term_id';
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['field'] = 'field_highwire_ac_term_id_value';
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['relationship'] = 'field_highwire_a_atom_subjects_tid';
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['value'] = 'featured';
  $handler->display->display_options['filters']['field_highwire_ac_term_id_value']['group'] = 1;
  /* Filter criterion: Content: HighWire: News Story Type (field_highwire_news_story_type) */
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['id'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['table'] = 'field_data_field_highwire_news_story_type';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['field'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['value'] = 'blog';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['group'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'HW Direct Publishing';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['jnl_isa_dp_featured_news'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_highwire_a_atom_subjects'),
    t('Featured News'),
    t('HW Direct Publishing'),
    t('Featured Blogs'),
  );
  $export['jnl_isa_dp_featured_news'] = $view;

  $view = new view();
  $view->name = 'jnl_isa_dp_news_landing';
  $view->description = 'Views related to news articles and featured news.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'jnl_isa - Direct Publishing News Landing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = 'first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last';
  $handler->display->display_options['style_plugin'] = 'highwire_article_citation_list';
  $handler->display->display_options['style_options']['class'] = 'dp-landing-list';
  $handler->display->display_options['style_options']['citation_settings_source'] = 'corpus_config';
  $handler->display->display_options['style_options']['citation_manager_wrapper'] = array(
    'citation_manager_citation' => 'jcore_dp_list_full',
  );
  $handler->display->display_options['style_options']['corpus_config_wrapper'] = array(
    'corpus_config_citation_context' => 'full_browse',
  );
  $handler->display->display_options['style_options']['citation_style'] = 'folio_book_sections_standard';
  $handler->display->display_options['style_options']['cache_enabled'] = 1;
  $handler->display->display_options['style_options']['cache_time'] = '86400';
  $handler->display->display_options['style_options']['title_type'] = 'full';
  $handler->display->display_options['style_options']['short_title_options'] = array(
    'char_count' => '',
    'add_ellipsis' => 0,
  );
  $handler->display->display_options['style_options']['title_as_link'] = 1;
  $handler->display->display_options['style_options']['display_subtitle'] = 1;
  $handler->display->display_options['style_options']['choose_pubdate'] = 'epubdate';
  $handler->display->display_options['style_options']['pubdate_format_type'] = '';
  $handler->display->display_options['style_options']['pubdate_format_custom'] = '';
  $handler->display->display_options['style_options']['display_markup_snippet'] = '';
  $handler->display->display_options['style_options']['highlight_image_toggle'] = 0;
  $handler->display->display_options['style_options']['display_original_link'] = 0;
  $handler->display->display_options['style_options']['display_access_indicator'] = 0;
  $handler->display->display_options['style_options']['access_indicator_settings'] = array(
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
  );
  $handler->display->display_options['style_options']['display_variants'] = 0;
  $handler->display->display_options['style_options']['display_supplements'] = 0;
  $handler->display->display_options['style_options']['display_variants_list_inline'] = 0;
  $handler->display->display_options['style_options']['pdf_download'] = array(
    'display_pdf_download' => 0,
    'pdf_download_icon' => '',
    'pdf_download_text' => '',
  );
  $handler->display->display_options['style_options']['cpath_prefix'] = '/content';
  $handler->display->display_options['style_options']['show_mark_citation'] = 0;
  $handler->display->display_options['style_options']['display_infotrieve_link'] = 0;
  $handler->display->display_options['style_options']['infotrieve_link_settings'] = array(
    'icon' => '',
    'link_caption' => '',
  );
  $handler->display->display_options['style_options']['bundle_overrides_checkboxes'] = array(
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
    'highwire_news_story' => array(
      'selector' => 1,
    ),
    'highwire_comment' => array(
      'selector' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bundle_overrides'] = array(
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
    'highwire_book_fragment' => array(
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
    'highwire_fragment' => array(
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
        'display_translations_text' => 'Traslations Available',
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
      'display_translations_text' => 'Traslations Available',
      'display_translations_text_icon' => 'icon-globe',
    ),
    'highwire_news_story' => array(
      'selector' => 1,
      'citation_style' => 'folio_book_sections_standard',
      'cache_enabled' => 1,
      'cache_time' => '600',
      'title_type' => 'prefer_short',
      'short_title_options' => array(
        'char_count' => '50',
        'add_ellipsis' => 0,
      ),
      'title_as_link' => 1,
      'display_subtitle' => 0,
      'choose_pubdate' => 'epubdate',
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
      'cpath_prefix' => '/content',
      'show_mark_citation' => 0,
      'display_infotrieve_link' => 0,
      'infotrieve_link_settings' => array(
        'icon' => 'icon-usd',
        'link_caption' => 'Order full text via Infotrieve',
      ),
      'display_summary' => 0,
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
  );
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Electronic Publication Date -  start date (field_highwire_a_epubdate) */
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['id'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['table'] = 'field_data_field_highwire_a_epubdate';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['field'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_news_story' => 'highwire_news_story',
  );
  /* Filter criterion: Content: HighWire Atom Subject Collections (field_highwire_a_atom_subjects) */
  $handler->display->display_options['filters']['field_highwire_a_atom_subjects_tid']['id'] = 'field_highwire_a_atom_subjects_tid';
  $handler->display->display_options['filters']['field_highwire_a_atom_subjects_tid']['table'] = 'field_data_field_highwire_a_atom_subjects';
  $handler->display->display_options['filters']['field_highwire_a_atom_subjects_tid']['field'] = 'field_highwire_a_atom_subjects_tid';
  $handler->display->display_options['filters']['field_highwire_a_atom_subjects_tid']['vocabulary'] = 'highwire_atom_collections';

  /* Display: News Landing Pane */
  $handler = $view->new_display('panel_pane', 'News Landing Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_news_story' => 'highwire_news_story',
  );
  /* Filter criterion: Content: HighWire: News Story Type (field_highwire_news_story_type) */
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['id'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['table'] = 'field_data_field_highwire_news_story_type';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['field'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['value'] = 'news';
  $handler->display->display_options['pane_category']['name'] = 'HW Direct Publishing';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Blog Landing Pane */
  $handler = $view->new_display('panel_pane', 'Blog Landing Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_news_story' => 'highwire_news_story',
  );
  /* Filter criterion: Content: HighWire: News Story Type (field_highwire_news_story_type) */
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['id'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['table'] = 'field_data_field_highwire_news_story_type';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['field'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['value'] = 'blog';
  $handler->display->display_options['pane_category']['name'] = 'HW Direct Publishing';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['jnl_isa_dp_news_landing'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('first'),
    t('previous'),
    t('next'),
    t('last'),
    t('News Landing Pane'),
    t('HW Direct Publishing'),
    t('Blog Landing Pane'),
  );
  $export['jnl_isa_dp_news_landing'] = $view;

  $view = new view();
  $view->name = 'jnl_isa_dp_recent_news';
  $view->description = 'Views related to news articles and featured news.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'jnl_isa - Direct Publishing Recent News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'See more';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'highwire_article_citation_list';
  $handler->display->display_options['style_options']['citation_settings_source'] = 'citation_manager';
  $handler->display->display_options['style_options']['citation_manager_wrapper'] = array(
    'citation_manager_citation' => 'jcore_list_title_only',
  );
  $handler->display->display_options['style_options']['corpus_config_wrapper'] = array(
    'corpus_config_citation_context' => array(),
  );
  $handler->display->display_options['style_options']['citation_style'] = 'folio_book_sections_standard';
  $handler->display->display_options['style_options']['cache_enabled'] = 1;
  $handler->display->display_options['style_options']['cache_time'] = '86400';
  $handler->display->display_options['style_options']['title_type'] = 'full';
  $handler->display->display_options['style_options']['short_title_options'] = array(
    'char_count' => '',
    'add_ellipsis' => 0,
  );
  $handler->display->display_options['style_options']['title_as_link'] = 1;
  $handler->display->display_options['style_options']['display_subtitle'] = 1;
  $handler->display->display_options['style_options']['choose_pubdate'] = 'epubdate';
  $handler->display->display_options['style_options']['display_markup_snippet'] = '';
  $handler->display->display_options['style_options']['highlight_image_toggle'] = 0;
  $handler->display->display_options['style_options']['display_original_link'] = 0;
  $handler->display->display_options['style_options']['display_access_indicator'] = 0;
  $handler->display->display_options['style_options']['access_indicator_settings'] = array(
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
  );
  $handler->display->display_options['style_options']['display_variants'] = 0;
  $handler->display->display_options['style_options']['display_supplements'] = 0;
  $handler->display->display_options['style_options']['pdf_download'] = array(
    'display_pdf_download' => 0,
    'pdf_download_icon' => '',
    'pdf_download_text' => '',
  );
  $handler->display->display_options['style_options']['cpath_prefix'] = '/content';
  $handler->display->display_options['style_options']['show_mark_citation'] = 0;
  $handler->display->display_options['style_options']['display_infotrieve_link'] = 0;
  $handler->display->display_options['style_options']['infotrieve_link_settings'] = array(
    'icon' => '',
    'link_caption' => '',
  );
  $handler->display->display_options['style_options']['bundle_overrides_checkboxes'] = array(
    'highwire_fragment' => array(
      'selector' => 0,
    ),
    'highwire_comment' => array(
      'selector' => 0,
    ),
    'highwire_book_section' => array(
      'selector' => 0,
    ),
    'highwire_journal' => array(
      'selector' => 0,
    ),
    'highwire_issue' => array(
      'selector' => 0,
    ),
    'highwire_news_story' => array(
      'selector' => 1,
    ),
    'highwire_book_edition' => array(
      'selector' => 0,
    ),
    'highwire_book_fragment' => array(
      'selector' => 0,
    ),
    'highwire_article' => array(
      'selector' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bundle_overrides'] = array(
    'highwire_fragment' => array(
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
        'display_translations_text' => 'Traslations Available',
        'display_translations_text_icon' => 'icon-globe',
      ),
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
    'highwire_news_story' => array(
      'selector' => 1,
      'citation_style' => 'folio_book_sections_standard',
      'cache_enabled' => 1,
      'cache_time' => '600',
      'title_type' => 'prefer_short',
      'short_title_options' => array(
        'char_count' => '50',
        'add_ellipsis' => 0,
      ),
      'title_as_link' => 1,
      'display_subtitle' => 0,
      'choose_pubdate' => 'epubdate',
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
    'highwire_book_fragment' => array(
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
      'display_translations_text' => 'Traslations Available',
      'display_translations_text_icon' => 'icon-globe',
    ),
  );
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Electronic Publication Date -  start date (field_highwire_a_epubdate) */
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['id'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['table'] = 'field_data_field_highwire_a_epubdate';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['field'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_news_story' => 'highwire_news_story',
  );
  /* Filter criterion: Content: HighWire Atom Subject Collections (field_highwire_a_atom_subjects) */
  $handler->display->display_options['filters']['field_highwire_a_atom_subjects_tid']['id'] = 'field_highwire_a_atom_subjects_tid';
  $handler->display->display_options['filters']['field_highwire_a_atom_subjects_tid']['table'] = 'field_data_field_highwire_a_atom_subjects';
  $handler->display->display_options['filters']['field_highwire_a_atom_subjects_tid']['field'] = 'field_highwire_a_atom_subjects_tid';
  $handler->display->display_options['filters']['field_highwire_a_atom_subjects_tid']['vocabulary'] = 'highwire_atom_collections';

  /* Display: Recent News List */
  $handler = $view->new_display('panel_pane', 'Recent News List', 'panel_pane_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link"><a href="/news">See more<span class="element-invisible"> recent news</span></a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'highwire_full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_news_story' => 'highwire_news_story',
  );
  /* Filter criterion: Content: HighWire: News Story Type (field_highwire_news_story_type) */
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['id'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['table'] = 'field_data_field_highwire_news_story_type';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['field'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['value'] = 'news';
  $handler->display->display_options['pane_category']['name'] = 'HW Direct Publishing';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Recent Blog List */
  $handler = $view->new_display('panel_pane', 'Recent Blog List', 'panel_pane_2');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link"><a href="/blog">See more<span class="element-invisible"> recent blogs</span></a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'highwire_full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_news_story' => 'highwire_news_story',
  );
  /* Filter criterion: Content: HighWire: News Story Type (field_highwire_news_story_type) */
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['id'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['table'] = 'field_data_field_highwire_news_story_type';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['field'] = 'field_highwire_news_story_type_value';
  $handler->display->display_options['filters']['field_highwire_news_story_type_value']['value'] = 'blog';
  $handler->display->display_options['pane_category']['name'] = 'HW Direct Publishing';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['jnl_isa_dp_recent_news'] = array(
    t('Master'),
    t('See more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Recent News List'),
    t('more'),
    t('<div class="more-link"><a href="/news">See more<span class="element-invisible"> recent news</span></a></div>'),
    t('HW Direct Publishing'),
    t('Recent Blog List'),
    t('<div class="more-link"><a href="/blog">See more<span class="element-invisible"> recent blogs</span></a></div>'),
  );
  $export['jnl_isa_dp_recent_news'] = $view;

  return $export;
}
