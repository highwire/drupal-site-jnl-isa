<?php
/**
 * @file
 * jnl_isa_home_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jnl_isa_home_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hw_article_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'isa Article Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['general'] = array(
    'mode' => 'horizontal',
    'speed' => '500',
    'slideMargin' => '0',
    'startSlide' => '0',
    'randomStart' => 0,
    'infiniteLoop' => 0,
    'hideControlOnEnd' => 1,
    'captions' => 0,
    'ticker' => 0,
    'tickerHover' => 0,
    'adaptiveHeight' => 0,
    'adaptiveHeightSpeed' => '500',
    'video' => 0,
    'touchEnabled' => 1,
    'preloadImages' => 'all',
    'disable_standard_css' => 1,
    'useCSS' => 1,
    'align_image' => 'left',
    'align_caption' => 'left',
    'swipeThreshold' => '50',
    'oneToOneTouch' => 1,
    'preventDefaultSwipeX' => 1,
    'preventDefaultSwipeY' => 0,
    'color_caption' => '80, 80, 80, 0.75',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['controlsfieldset'] = array(
    'controls' => 1,
    'nextText' => '',
    'prevText' => '',
    'startText' => '',
    'stopText' => '',
    'autoControls' => 0,
    'autoControlsCombine' => 0,
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['pagerfieldset'] = array(
    'pager' => 0,
    'pagerType' => 'full',
    'pagerShortSeparator' => ' / ',
    'pagerCustom' => '',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['autofieldset'] = array(
    'pause' => '4000',
    'autoStart' => 0,
    'auto' => 0,
    'autoHover' => '0',
    'autoDelay' => '0',
    'autoDirection' => 'next',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['carousel'] = array(
    'minSlides' => '1',
    'maxSlides' => '4',
    'moveSlides' => '0',
    'slideWidth' => '240',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['callback'] = array(
    'onSliderLoad' => '',
    'onSlideBefore' => '',
    'onSlideAfter' => '',
    'onSlideNext' => '',
    'onSlidePrev' => '',
  );
  $handler->display->display_options['style_options']['slideshow_type'] = 'bxslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'path' => 0,
    'field_highwire_a_full_title' => 0,
    'field_highwire_a_epubdate' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'path' => 0,
    'field_highwire_a_full_title' => 0,
    'field_highwire_a_epubdate' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'jnl_isa_top_topics' => 0,
    'jnl_isa_art_carous' => 0,
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Field: Full Title */
  $handler->display->display_options['fields']['field_highwire_a_full_title']['id'] = 'field_highwire_a_full_title';
  $handler->display->display_options['fields']['field_highwire_a_full_title']['table'] = 'field_data_field_highwire_a_full_title';
  $handler->display->display_options['fields']['field_highwire_a_full_title']['field'] = 'field_highwire_a_full_title';
  $handler->display->display_options['fields']['field_highwire_a_full_title']['label'] = '';
  $handler->display->display_options['fields']['field_highwire_a_full_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_highwire_a_full_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_highwire_a_full_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_highwire_a_full_title']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_highwire_a_full_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_highwire_a_full_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_highwire_a_full_title']['alter']['preserve_tags'] = '<em><sub><br><sup><strong><a><img><kbd>';
  $handler->display->display_options['fields']['field_highwire_a_full_title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_highwire_a_full_title']['element_label_colon'] = FALSE;
  /* Field: Content: Electronic Publication Date */
  $handler->display->display_options['fields']['field_highwire_a_epubdate']['id'] = 'field_highwire_a_epubdate';
  $handler->display->display_options['fields']['field_highwire_a_epubdate']['table'] = 'field_data_field_highwire_a_epubdate';
  $handler->display->display_options['fields']['field_highwire_a_epubdate']['field'] = 'field_highwire_a_epubdate';
  $handler->display->display_options['fields']['field_highwire_a_epubdate']['label'] = '';
  $handler->display->display_options['fields']['field_highwire_a_epubdate']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_highwire_a_epubdate']['alter']['text'] = '<i class="icon-time"></i> [field_highwire_a_epubdate]';
  $handler->display->display_options['fields']['field_highwire_a_epubdate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highwire_a_epubdate']['settings'] = array(
    'format_type' => 'hw_date_long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Nodequeue: Queue machine name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['name']['value'] = 'jnl_isa_art_carous';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['hw_article_carousel'] = array(
    t('Master'),
    t('Featured Articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('<i class="icon-time"></i> [field_highwire_a_epubdate]'),
    t('Block'),
  );
  $export['hw_article_carousel'] = $view;

  $view = new view();
  $view->name = 'jnl_isa_pap_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'efq_node';
  $view->human_name = 'isa PAP List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Published Ahead of Print';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'content/early/recent';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'highwire_article_citation_list';
  $handler->display->display_options['style_options']['citation_settings_source'] = 'corpus_config';
  $handler->display->display_options['style_options']['citation_manager_wrapper'] = array(
    'citation_manager_citation' => 'jcore_list_full',
  );
  $handler->display->display_options['style_options']['corpus_config_wrapper'] = array(
    'corpus_config_citation_context' => 'full_browse',
  );
  $handler->display->display_options['row_plugin'] = 'node';
  /* Footer: View More link */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['ui_name'] = 'View More link';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="hw-pap-more-link text-right">
<a class="hw-view-more" href="/content/early/recent">View more <span class="element-invisible">published ahead of print articles</span><i class="icon-circle-arrow-right"></i></a>
</div>';
  /* Field: Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'efq_node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Electronic Publication Date » Start date */
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['id'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['table'] = 'efq_node';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['field'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['sorts']['field_highwire_a_epubdate_value']['order'] = 'DESC';
  /* Sort criterion: Content: Node ID */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'efq_node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  /* Contextual filter: Content: Journal */
  $handler->display->display_options['arguments']['field_highwire_a_journal']['id'] = 'field_highwire_a_journal';
  $handler->display->display_options['arguments']['field_highwire_a_journal']['table'] = 'efq_node';
  $handler->display->display_options['arguments']['field_highwire_a_journal']['field'] = 'field_highwire_a_journal';
  $handler->display->display_options['arguments']['field_highwire_a_journal']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_highwire_a_journal']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_highwire_a_journal']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_highwire_a_journal']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_highwire_a_journal']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Version Type */
  $handler->display->display_options['filters']['field_highwire_article_ver']['id'] = 'field_highwire_article_ver';
  $handler->display->display_options['filters']['field_highwire_article_ver']['table'] = 'efq_node';
  $handler->display->display_options['filters']['field_highwire_article_ver']['field'] = 'field_highwire_article_ver';
  $handler->display->display_options['filters']['field_highwire_article_ver']['value'] = array(
    'curr' => 'curr',
  );
  $handler->display->display_options['filters']['field_highwire_article_ver']['delta'] = '';
  /* Filter criterion: Content: Early Release */
  $handler->display->display_options['filters']['field_highwire_article_early']['id'] = 'field_highwire_article_early';
  $handler->display->display_options['filters']['field_highwire_article_early']['table'] = 'efq_node';
  $handler->display->display_options['filters']['field_highwire_article_early']['field'] = 'field_highwire_article_early';
  $handler->display->display_options['filters']['field_highwire_article_early']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_highwire_article_early']['delta'] = '';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Highwire PAP List';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_highwire_a_journal' => array(
      'type' => 'context',
      'context' => 'default_journal.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node: Journal',
    ),
  );
  $translatables['jnl_isa_pap_list'] = array(
    t('Master'),
    t('Published Ahead of Print'),
    t('View more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="hw-pap-more-link text-right">
<a class="hw-view-more" href="/content/early/recent">View more <span class="element-invisible">published ahead of print articles</span><i class="icon-circle-arrow-right"></i></a>
</div>'),
    t('Node ID'),
    t('.'),
    t(','),
    t('All'),
    t('Content pane'),
    t('more'),
    t('Highwire PAP List'),
    t('View panes'),
  );
  $export['jnl_isa_pap_list'] = $view;

  $view = new view();
  $view->name = 'jnl_isa_top_topics';
  $view->description = 'Display a list of all nodes in queue \'isa Top Topics\'';
  $view->tag = 'isa Home Page';
  $view->base_table = 'node';
  $view->human_name = 'Queue \'isa Top Topics\'';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Top Topics';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'jnl_isa_top_topics' => 'jnl_isa_top_topics',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published status or admin user */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'isa Top Topics';
  $translatables['jnl_isa_top_topics'] = array(
    t('Defaults'),
    t('Top Topics'),
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
    t('queue'),
    t('Block'),
    t('isa Top Topics'),
  );
  $export['jnl_isa_top_topics'] = $view;

  $view = new view();
  $view->name = 'latest_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'isa Latest Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Articles';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'content/latest';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'highwire_article_citation_list';
  $handler->display->display_options['style_options']['citation_settings_source'] = 'corpus_config';
  $handler->display->display_options['style_options']['citation_manager_wrapper'] = array(
    'citation_manager_citation' => 'jcore_list_full',
  );
  $handler->display->display_options['style_options']['corpus_config_wrapper'] = array(
    'corpus_config_citation_context' => 'full_browse',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="hw-latest-more-link text-right">
 <a class="hw-view-more" href="/content/latest">View more <span class="element-invisible">latest articles</span><i class="icon-circle-arrow-right"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'highwire_full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No result found.';
  $handler->display->display_options['empty']['area']['format'] = 'highwire_full_html';
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
  /* Contextual filter: Field: Journal (field_highwire_a_journal) */
  $handler->display->display_options['arguments']['field_highwire_a_journal_nid']['id'] = 'field_highwire_a_journal_nid';
  $handler->display->display_options['arguments']['field_highwire_a_journal_nid']['table'] = 'field_data_field_highwire_a_journal';
  $handler->display->display_options['arguments']['field_highwire_a_journal_nid']['field'] = 'field_highwire_a_journal_nid';
  $handler->display->display_options['arguments']['field_highwire_a_journal_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_highwire_a_journal_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_highwire_a_journal_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_highwire_a_journal_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_article' => 'highwire_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Version Type (field_highwire_article_ver) */
  $handler->display->display_options['filters']['field_highwire_article_ver_value']['id'] = 'field_highwire_article_ver_value';
  $handler->display->display_options['filters']['field_highwire_article_ver_value']['table'] = 'field_data_field_highwire_article_ver';
  $handler->display->display_options['filters']['field_highwire_article_ver_value']['field'] = 'field_highwire_article_ver_value';
  $handler->display->display_options['filters']['field_highwire_article_ver_value']['value'] = array(
    'curr' => 'curr',
  );
  $handler->display->display_options['filters']['field_highwire_article_ver_value']['group'] = 1;
  /* Filter criterion: Content: Highwire: State (field_highwire_a_state) */
  $handler->display->display_options['filters']['field_highwire_a_state_value']['id'] = 'field_highwire_a_state_value';
  $handler->display->display_options['filters']['field_highwire_a_state_value']['table'] = 'field_data_field_highwire_a_state';
  $handler->display->display_options['filters']['field_highwire_a_state_value']['field'] = 'field_highwire_a_state_value';
  $handler->display->display_options['filters']['field_highwire_a_state_value']['value'] = array(
    'R' => 'R',
  );
  $handler->display->display_options['filters']['field_highwire_a_state_value']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="hw-latest-more-link">
 <a class = "hw-more" href = "/latest" title = "More" target = "_blank">More</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'highwire_full_html';

  /* Display: Paginated Latest Articles */
  $handler = $view->new_display('panel_pane', 'Paginated Latest Articles', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more latest articles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = 'First';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'Previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Next';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Last';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'highwire_article' => 'highwire_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Version Type (field_highwire_article_ver) */
  $handler->display->display_options['filters']['field_highwire_article_ver_value']['id'] = 'field_highwire_article_ver_value';
  $handler->display->display_options['filters']['field_highwire_article_ver_value']['table'] = 'field_data_field_highwire_article_ver';
  $handler->display->display_options['filters']['field_highwire_article_ver_value']['field'] = 'field_highwire_article_ver_value';
  $handler->display->display_options['filters']['field_highwire_article_ver_value']['value'] = array(
    'curr' => 'curr',
  );
  $handler->display->display_options['filters']['field_highwire_article_ver_value']['group'] = 1;
  /* Filter criterion: Content: Highwire: State (field_highwire_a_state) */
  $handler->display->display_options['filters']['field_highwire_a_state_value']['id'] = 'field_highwire_a_state_value';
  $handler->display->display_options['filters']['field_highwire_a_state_value']['table'] = 'field_data_field_highwire_a_state';
  $handler->display->display_options['filters']['field_highwire_a_state_value']['field'] = 'field_highwire_a_state_value';
  $handler->display->display_options['filters']['field_highwire_a_state_value']['value'] = array(
    'R' => 'R',
  );
  $handler->display->display_options['filters']['field_highwire_a_state_value']['group'] = 1;
  /* Filter criterion: Content: Collections (field_highwire_a_collections) */
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['id'] = 'field_highwire_a_collections_tid';
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['table'] = 'field_data_field_highwire_a_collections';
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['field'] = 'field_highwire_a_collections_tid';
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['expose']['operator_id'] = 'field_highwire_a_collections_tid_op';
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['expose']['operator'] = 'field_highwire_a_collections_tid_op';
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['expose']['identifier'] = 'field_highwire_a_collections_tid';
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_highwire_a_collections_tid']['vocabulary'] = 'highwire_collection';
  /* Filter criterion: Content: Article Categories (field_highwire_article_category) */
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['id'] = 'field_highwire_article_category_tid';
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['table'] = 'field_data_field_highwire_article_category';
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['field'] = 'field_highwire_article_category_tid';
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['expose']['operator_id'] = 'field_highwire_article_category_tid_op';
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['expose']['label'] = 'Article Type';
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['expose']['operator'] = 'field_highwire_article_category_tid_op';
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['expose']['identifier'] = 'field_highwire_article_category_tid';
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_highwire_article_category_tid']['vocabulary'] = 'highwire_article_categories';
  /* Filter criterion: Content: Electronic Publication Date -  start date (field_highwire_a_epubdate) */
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['id'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['table'] = 'field_data_field_highwire_a_epubdate';
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['field'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['group'] = 1;
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['expose']['operator_id'] = 'field_highwire_a_epubdate_value_op';
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['expose']['operator'] = 'field_highwire_a_epubdate_value_op';
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['expose']['identifier'] = 'field_highwire_a_epubdate_value';
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_highwire_a_epubdate_value']['year_range'] = '2011:+0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_highwire_a_journal_nid' => array(
      'type' => 'user',
      'context' => 'default_journal.nid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Journal Node ID',
    ),
  );
  $translatables['latest_articles'] = array(
    t('Master'),
    t('Latest Articles'),
    t('More'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="hw-latest-more-link text-right">
 <a class="hw-view-more" href="/content/latest">View more <span class="element-invisible">latest articles</span><i class="icon-circle-arrow-right"></i></a>
</div>'),
    t('No result found.'),
    t('All'),
    t('Block'),
    t('more'),
    t('<div class="hw-latest-more-link">
 <a class = "hw-more" href = "/latest" title = "More" target = "_blank">More</a>
</div>'),
    t('Paginated Latest Articles'),
    t('View more latest articles'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('First'),
    t('Previous'),
    t('Next'),
    t('Last'),
    t('Subject'),
    t('Article Type'),
    t('Year'),
    t('View panes'),
  );
  $export['latest_articles'] = $view;

  return $export;
}
