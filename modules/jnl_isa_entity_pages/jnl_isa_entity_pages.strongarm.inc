<?php
/**
 * @file
 * jnl_isa_entity_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jnl_isa_entity_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_block_form';
  $strongarm->value = 'form';
  $export['forward_block_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_link_title';
  $strongarm->value = 'Email';
  $export['forward_link_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_eletters_fields';
  $strongarm->value = array(
    'field_highwire_a_contributors' => 'field_highwire_a_contributors',
    'field_highwire_c_attachments' => 'field_highwire_c_attachments',
    'field_highwire_c_competing' => 'field_highwire_c_competing',
    'field_highwire_c_competing_int' => 'field_highwire_c_competing_int',
    'field_highwire_a_apath' => 0,
    'field_highwire_a_full_title' => 0,
    'field_highwire_a_last_load_event' => 0,
    'field_highwire_c_agreement' => 0,
    'field_highwire_c_show_anonymous' => 0,
  );
  $export['highwire_eletters_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_eletters_fields_group_weight';
  $strongarm->value = array(
    'group_highwire_comment_authors' => array(
      'weight' => '1',
    ),
    'group_highwire_comment_ci' => array(
      'weight' => '2',
    ),
    'group_highwire_comment_message' => array(
      'weight' => '0',
    ),
    'group_highwire_comment_tnc' => array(
      'weight' => '3',
    ),
  );
  $export['highwire_eletters_fields_group_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_eletters_nlmfield_text_widget_settings';
  $strongarm->value = array(
    'given_names' => array(
      'title' => 'First Name and Middle Initial',
      'title_display' => 'inline',
      'selected' => 1,
      'required' => 1,
      'weight' => '-10',
    ),
    'surname' => array(
      'title' => 'Last Name',
      'title_display' => 'inline',
      'selected' => 1,
      'required' => 1,
      'weight' => '-9',
    ),
    'email' => array(
      'title' => 'Email Address',
      'title_display' => 'inline',
      'selected' => 1,
      'required' => 1,
      'weight' => '-8',
    ),
    'role' => array(
      'title' => 'Occupation',
      'title_display' => 'inline',
      'selected' => 1,
      'required' => 1,
      'weight' => '-7',
    ),
    'aff' => array(
      'title' => 'Affiliation',
      'title_display' => 'inline',
      'selected' => 1,
      'required' => 1,
      'weight' => '-6',
    ),
    'string_name' => array(
      'title' => 'Name String',
      'title_display' => 'before',
      'selected' => 0,
      'required' => 0,
      'weight' => '-5',
    ),
    'prefix' => array(
      'title' => 'Name Prefix',
      'title_display' => 'before',
      'selected' => 0,
      'required' => 0,
      'weight' => '-4',
    ),
    'suffix' => array(
      'title' => 'Name Suffix',
      'title_display' => 'before',
      'selected' => 0,
      'required' => 0,
      'weight' => '-3',
    ),
    'degrees' => array(
      'title' => 'Degrees',
      'title_display' => 'before',
      'selected' => 0,
      'required' => 0,
      'weight' => '-2',
    ),
    'contributor_type' => array(
      'title' => 'Contributor type',
      'title_display' => 'before',
      'selected' => 0,
      'required' => 0,
      'weight' => '-1',
    ),
    'address' => array(
      'title' => 'Address',
      'title_display' => 'before',
      'selected' => 0,
      'required' => 0,
      'weight' => '0',
    ),
  );
  $export['highwire_eletters_nlmfield_text_widget_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_settings_variant_order';
  $strongarm->value = array(
    'long' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-50',
    ),
    'editor-summary' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-49',
    ),
    'executive-summary' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-48',
    ),
    'short' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-47',
    ),
    'abstract' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-46',
    ),
    'extract' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-45',
    ),
    'gloss' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-44',
    ),
    'full-text' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-43',
    ),
    'full-text.pdf' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-42',
    ),
    'full-text.pdf+html' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-41',
    ),
    'easy-read' => array(
      'title_override' => 'Print ',
      'enabled' => 1,
      'weight' => '-40',
    ),
    'precis' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-39',
    ),
    'precis-abstract' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-38',
    ),
    'index' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-37',
    ),
    'powerpoint' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-36',
    ),
    'expansion' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-35',
    ),
    'abridgment' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-34',
    ),
    'abridgment.pdf' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-33',
    ),
    'figures-only' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-32',
    ),
    'toc' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-31',
    ),
    'toc.pdf' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-30',
    ),
    'cover-caption' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-29',
    ),
    'cover' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-28',
    ),
    'cover.pdf' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-27',
    ),
    'cover-expansion' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-26',
    ),
    'adjunct-embed' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-25',
    ),
    'index-by-author' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-24',
    ),
    'ref-links' => array(
      'title_override' => '',
      'enabled' => 1,
      'weight' => '-23',
    ),
  );
  $export['highwire_settings_variant_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_user_redirect_to_request_uri';
  $strongarm->value = 1;
  $export['highwire_user_redirect_to_request_uri'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_ajax_tab';
  $strongarm->value = array(
    'clean_url' => 1,
    'panes' => array(
      'jnl_isa_most_cited_n_top_topics_panel' => array(
        'jnl_isa_top_topics' => 'top-topics',
        'jnl_isa_most_cited' => 'most-cited',
        'jnl_isa_most_read' => 'most-read',
      ),
      'highwire_article_tabs_first_click' => array(
        'jnl_isa_art_fclick' => '',
        'jnl_isa_tab_data' => 'figures-only',
        'jnl_isa_tab_info' => 'article-info',
        'jnl_isa_pdf_fclick' => 'full.pdf+html',
      ),
      'citation-format-details' => array(
        'jnl_isa_cite_apa' => '',
        'jnl_isa_cite_chi' => '',
        'jnl_isa_cite_en' => '',
        'jnl_isa_cite_mla' => '',
      ),
      'highwire_article_tabs' => array(
        'jnl_isa_tab_art' => '',
        'jnl_isa_tab_data' => 'tab-figures-data',
        'jnl_isa_tab_supp' => 'tab-supplemental',
        'jnl_isa_tab_info' => 'tab-article-info',
        'jnl_isa_tab_refs' => 'tab-references',
        'jnl_isa_tab_pdf' => 'tab-pdf',
      ),
      'jnl_isa_dp_recent_content_panel' => array(
        'jnl_isa_rec_blog' => 'recent-blog',
        'jnl_isa_rec_news' => 'recent-news',
      ),
    ),
    'highwire_panel_tab' => array(
      'highwire_article_tabs_first_click' => array(
        'pdf' => 'jnl_isa_pdf_fclick',
        'data' => 'jnl_isa_tab_data',
      ),
      '' => array(
        'pdf' => '0',
        'data' => '0',
        'supp' => '0',
      ),
      'citation-format-details' => array(
        'pdf' => '0',
        'data' => '0',
        'supp' => '0',
      ),
      'highwire_article_tabs' => array(
        'pdf_link_only' => 1,
        'pdf' => 'jnl_isa_tab_pdf',
        'data' => 'jnl_isa_tab_data',
        'supp' => 'jnl_isa_tab_supp',
      ),
    ),
    'clean_url_delim' => '/',
    'highwire_panel_tab_titles' => array(
      'highwire_article_tabs_first_click' => array(
        'jnl_isa_art_fclick' => 'Article',
        'jnl_isa_tab_data' => 'Figures &amp; Data',
        'jnl_isa_tab_info' => 'Info &amp; Metrics',
        'jnl_isa_pdf_fclick' => '<i class="icon-file-alt"></i> PDF',
      ),
      '' => array(
        'jnl_isa_cite_apa' => 'APA',
        'jnl_isa_cite_chi' => 'Chicago',
        'jnl_isa_cite_mla' => 'MLA',
        'jnl_isa_cite_en' => 'Endnote',
      ),
      'citation-format-details' => array(),
      'highwire_article_tabs' => array(
        'jnl_isa_tab_art' => 'Article',
        'jnl_isa_tab_data' => 'Figures &amp; Data',
        'jnl_isa_tab_supp' => 'Supplemental',
        'jnl_isa_tab_refs' => 'References',
        'jnl_isa_tab_info' => 'Info &amp; Metrics',
        'jnl_isa_tab_pdf' => '<i class="icon-file-alt"></i> PDF',
      ),
    ),
  );
  $export['panels_ajax_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_append_to_url';
  $strongarm->value = '';
  $export['service_links_append_to_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_category_types';
  $strongarm->value = array();
  $export['service_links_category_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_category_vocs';
  $strongarm->value = array(
    2 => 0,
    4 => 0,
    3 => 0,
    1 => 0,
  );
  $export['service_links_category_vocs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_check_icons';
  $strongarm->value = 0;
  $export['service_links_check_icons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_hide_for_author';
  $strongarm->value = 0;
  $export['service_links_hide_for_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_hide_if_unpublished';
  $strongarm->value = 0;
  $export['service_links_hide_if_unpublished'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_in_links';
  $strongarm->value = '0';
  $export['service_links_in_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_in_node';
  $strongarm->value = '0';
  $export['service_links_in_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_label_in_node';
  $strongarm->value = 'Bookmark/Search this post with';
  $export['service_links_label_in_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_new_window';
  $strongarm->value = '1';
  $export['service_links_new_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_node_types';
  $strongarm->value = array(
    'highwire_article' => 'highwire_article',
    'highwire_adjunct' => 0,
    'highwire_comment' => 0,
    'highwire_fragment' => 0,
    'highwire_issue' => 0,
    'highwire_journal' => 0,
    'highwire_journal_era' => 0,
    'highwire_volume' => 0,
  );
  $export['service_links_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_override_title';
  $strongarm->value = '0';
  $export['service_links_override_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_override_title_text';
  $strongarm->value = '<title>';
  $export['service_links_override_title_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_page_match_for_node';
  $strongarm->value = '';
  $export['service_links_page_match_for_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_path_icons';
  $strongarm->value = 'sites/all/modules/contrib/service_links/images';
  $export['service_links_path_icons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_short_links_use';
  $strongarm->value = '0';
  $export['service_links_short_links_use'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_show';
  $strongarm->value = array(
    'forward' => 1,
    'delicious' => 0,
    'digg' => 0,
    'stumbleupon' => 0,
    'twitter' => 1,
    'pingthis' => 0,
    'reddit' => 1,
    'slashdot' => 0,
    'newsvine' => 0,
    'furl' => 0,
    'facebook' => 1,
    'myspace' => 0,
    'google' => 0,
    'google_plus' => 0,
    'yahoo' => 0,
    'linkedin' => 0,
    'technorati' => 0,
    'technorati_favorite' => 0,
    'icerocket' => 0,
    'misterwong' => 0,
    'mixx' => 0,
    'box' => 0,
    'blinklist' => 0,
    'identica' => 0,
    'newskicks' => 0,
    'diigo' => 0,
    'citeulike' => 0,
    'mendeley' => 1,
    'connotea' => 0,
    'facebook_share' => 0,
    'twitter_widget' => 1,
    'facebook_like' => 1,
    'google_plus_one' => 1,
    'linkedin_share_button' => 0,
    'pinterest_button' => 0,
  );
  $export['service_links_show'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_style';
  $strongarm->value = '2';
  $export['service_links_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_visibility_for_node';
  $strongarm->value = '0';
  $export['service_links_visibility_for_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_weight';
  $strongarm->value = array(
    'forward' => '0',
    'delicious' => '0',
    'digg' => '0',
    'stumbleupon' => '0',
    'twitter' => '0',
    'pingthis' => '0',
    'reddit' => '0',
    'slashdot' => '0',
    'newsvine' => '0',
    'furl' => '0',
    'facebook' => '0',
    'myspace' => '0',
    'google' => '0',
    'google_plus' => '0',
    'yahoo' => '0',
    'linkedin' => '0',
    'technorati' => '0',
    'technorati_favorite' => '0',
    'icerocket' => '0',
    'misterwong' => '0',
    'mixx' => '0',
    'box' => '0',
    'blinklist' => '0',
    'identica' => '0',
    'newskicks' => '0',
    'diigo' => '0',
    'citeulike' => '0',
    'mendeley' => '0',
    'connotea' => '0',
    'facebook_share' => '0',
    'twitter_widget' => '-100',
    'facebook_like' => '-99',
    'google_plus_one' => '-98',
    'linkedin_share_button' => '-95',
    'pinterest_button' => '0',
  );
  $export['service_links_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_weight_in_node';
  $strongarm->value = '10';
  $export['service_links_weight_in_node'] = $strongarm;

  return $export;
}
