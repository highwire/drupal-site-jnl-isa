<?php
/**
 * @file
 * jnl_isa_entity_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jnl_isa_entity_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jnl_isa_article_adjuct_index';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'efq_node';
  $view->human_name = 'jnl_isa - Article Adjunct Index';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Panel Pane - Content: Highwire Markup */
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['id'] = 'ctools_field_highwire_markup';
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['table'] = 'efq_node';
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['field'] = 'ctools_field_highwire_markup';
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['label'] = '';
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['views_ctools_field'] = array(
    'lock_variant' => 1,
    'disable_logging' => 1,
    'disable_ac' => 1,
    'variant_404' => 'display_nothing',
    'variant_custom_text' => '',
    'variant_url' => '',
    'ac_403' => 'display_nothing',
    'ac_custom_text' => '',
    'ac_url' => '',
    'variant' => 'index',
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
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
      ),
      'index-by-author' => array(
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
      ),
    ),
    'process' => array(
      'highwire_delete_elements' => 0,
      'highwire_tables' => 0,
      'highwire_author_affiliates' => 0,
      'highwire_pdf_fallback' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_article_reference_popup' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_at_symbol' => 0,
      'highwire_src_rewrites' => 'highwire_src_rewrites',
      'highwire_embed' => 0,
      'highwire_math' => 0,
      'highwire_figures' => 0,
      'highwire_video' => 0,
      'highwire_reclass' => 'highwire_reclass',
      'highwire_openurl' => 0,
      'highwire_url_rewrites' => 'highwire_url_rewrites',
    ),
    'process_settings' => array(
      'highwire_delete_elements' => array(
        'xpath' => '',
        'selector' => '',
      ),
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
      ),
      'highwire_figures' => array(
        'image_size' => 'large',
        'image_clickable' => 1,
      ),
    ),
  );
  /* Contextual filter: Content: Adjunct Subject */
  $handler->display->display_options['arguments']['field_highwire_adjunct_subject']['id'] = 'field_highwire_adjunct_subject';
  $handler->display->display_options['arguments']['field_highwire_adjunct_subject']['table'] = 'efq_node';
  $handler->display->display_options['arguments']['field_highwire_adjunct_subject']['field'] = 'field_highwire_adjunct_subject';
  $handler->display->display_options['arguments']['field_highwire_adjunct_subject']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_highwire_adjunct_subject']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_highwire_adjunct_subject']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_highwire_adjunct_subject']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_highwire_adjunct_subject']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'efq_node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_adjunct' => 'highwire_adjunct',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Article Adjunct Index List';
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
    'field_highwire_adjunct_subject' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node: Adjunct Subject',
    ),
  );
  $translatables['jnl_isa_article_adjuct_index'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Content pane'),
    t('Article Adjunct Index List'),
    t('View panes'),
  );
  $export['jnl_isa_article_adjuct_index'] = $view;

  $view = new view();
  $view->name = 'jnl_isa_article_fragment_markup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'efq_node';
  $view->human_name = 'jnl_isa - Article Fragment Expansion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Panel Pane - Content: Highwire Markup */
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['id'] = 'ctools_field_highwire_markup';
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['table'] = 'efq_node';
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['field'] = 'ctools_field_highwire_markup';
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['label'] = '';
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ctools_field_highwire_markup']['views_ctools_field'] = array(
    'lock_variant' => 1,
    'disable_logging' => 1,
    'disable_ac' => 1,
    'variant_404' => 'display_nothing',
    'variant_custom_text' => '',
    'variant_url' => '',
    'ac_403' => 'display_nothing',
    'ac_custom_text' => '',
    'ac_url' => '',
    'variant' => 'expansion',
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
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
      ),
      'index-by-author' => array(
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
      ),
    ),
    'process' => array(
      'highwire_delete_elements' => 0,
      'highwire_tables' => 'highwire_tables',
      'highwire_author_affiliates' => 0,
      'highwire_pdf_fallback' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_article_reference_popup' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_at_symbol' => 'highwire_at_symbol',
      'highwire_src_rewrites' => 0,
      'highwire_embed' => 0,
      'highwire_math' => 'highwire_math',
      'highwire_figures' => 'highwire_figures',
      'highwire_video' => 0,
      'highwire_reclass' => 'highwire_reclass',
      'highwire_openurl' => 0,
      'highwire_url_rewrites' => 0,
    ),
    'process_settings' => array(
      'highwire_delete_elements' => array(
        'xpath' => '',
        'selector' => '',
      ),
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
      ),
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'colorbox',
      ),
    ),
  );
  /* Contextual filter: Content: Highwire: Parent */
  $handler->display->display_options['arguments']['field_highwire_a_parent']['id'] = 'field_highwire_a_parent';
  $handler->display->display_options['arguments']['field_highwire_a_parent']['table'] = 'efq_node';
  $handler->display->display_options['arguments']['field_highwire_a_parent']['field'] = 'field_highwire_a_parent';
  $handler->display->display_options['arguments']['field_highwire_a_parent']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_highwire_a_parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_highwire_a_parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_highwire_a_parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_highwire_a_parent']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'efq_node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_fragment' => 'highwire_fragment',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['field_highwire_fragment_type']['id'] = 'field_highwire_fragment_type';
  $handler->display->display_options['filters']['field_highwire_fragment_type']['table'] = 'efq_node';
  $handler->display->display_options['filters']['field_highwire_fragment_type']['field'] = 'field_highwire_fragment_type';
  $handler->display->display_options['filters']['field_highwire_fragment_type']['value'] = array(
    'expansion' => 'expansion',
    'figure' => 'figure',
    'image' => 'image',
    'video' => 'video',
    'abstract' => 'abstract',
    'executive-summary' => 'executive-summary',
    'chem' => 'chem',
  );
  $handler->display->display_options['filters']['field_highwire_fragment_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highwire_fragment_type']['expose']['operator_id'] = 'field_highwire_fragment_type_op';
  $handler->display->display_options['filters']['field_highwire_fragment_type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_highwire_fragment_type']['expose']['operator'] = 'field_highwire_fragment_type_op';
  $handler->display->display_options['filters']['field_highwire_fragment_type']['expose']['identifier'] = 'field_highwire_fragment_type';
  $handler->display->display_options['filters']['field_highwire_fragment_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_highwire_fragment_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_highwire_fragment_type']['delta'] = '';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Article Fragment Expansion List';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_highwire_a_parent' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node: Highwire: Parent',
    ),
  );
  $translatables['jnl_isa_article_fragment_markup'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Type'),
    t('Content pane'),
    t('Article Fragment Expansion List'),
    t('View panes'),
  );
  $export['jnl_isa_article_fragment_markup'] = $view;

  $view = new view();
  $view->name = 'jnl_isa_continous_publication_component';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'efq_node';
  $view->human_name = 'isa Continuous publication articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Continuous Publication Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = 'First';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'Previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Next';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Last';
  $handler->display->display_options['style_plugin'] = 'highwire_article_citation_list';
  $handler->display->display_options['style_options']['citation_settings_source'] = 'corpus_config';
  $handler->display->display_options['style_options']['citation_manager_wrapper'] = array(
    'citation_manager_citation' => 'jcore_list_full',
  );
  $handler->display->display_options['style_options']['corpus_config_wrapper'] = array(
    'corpus_config_citation_context' => 'full_browse',
  );
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'efq_node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Print Publication Date » Start date */
  $handler->display->display_options['sorts']['field_highwire_a_ppubdate_value']['id'] = 'field_highwire_a_ppubdate_value';
  $handler->display->display_options['sorts']['field_highwire_a_ppubdate_value']['table'] = 'efq_node';
  $handler->display->display_options['sorts']['field_highwire_a_ppubdate_value']['field'] = 'field_highwire_a_ppubdate_value';
  $handler->display->display_options['sorts']['field_highwire_a_ppubdate_value']['order'] = 'DESC';
  /* Filter criterion: Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'efq_node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_article' => 'highwire_article',
  );
  /* Filter criterion: Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'efq_node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value']['value'] = '1';
  /* Filter criterion: Content: Version Type */
  $handler->display->display_options['filters']['field_highwire_article_ver']['id'] = 'field_highwire_article_ver';
  $handler->display->display_options['filters']['field_highwire_article_ver']['table'] = 'efq_node';
  $handler->display->display_options['filters']['field_highwire_article_ver']['field'] = 'field_highwire_article_ver';
  $handler->display->display_options['filters']['field_highwire_article_ver']['value'] = array(
    'curr' => 'curr',
  );
  $handler->display->display_options['filters']['field_highwire_article_ver']['delta'] = '';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'highwire-jnl-template-cpc';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['jnl_isa_continous_publication_component'] = array(
    t('Master'),
    t('Continuous Publication Articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('First'),
    t('Previous'),
    t('Next'),
    t('Last'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Page'),
    t('Block'),
  );
  $export['jnl_isa_continous_publication_component'] = $view;

  return $export;
}
