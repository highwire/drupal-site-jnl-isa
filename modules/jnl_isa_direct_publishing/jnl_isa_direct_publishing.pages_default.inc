<?php
/**
 * @file
 * jnl_isa_direct_publishing.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function jnl_isa_direct_publishing_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__news-story-direct-publishing';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'News Story (Direct Publishing)',
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
    'relationships' => array(
      0 => array(
        'identifier' => 'Article Issue',
        'keyword' => 'issue',
        'name' => 'entity_from_field:field_highwire_a_issue-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'highwire_news_story' => 'highwire_news_story',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'news-story-direct-publishing',
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
      'left' => NULL,
      'right' => NULL,
      'content' => NULL,
      'sidebar_left' => NULL,
      'sidebar_right' => NULL,
    ),
    'sidebar_right' => array(
      'style' => '-1',
    ),
    'content' => array(
      'style' => '-1',
    ),
    'top' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'highwire_markup';
    $pane->subtype = 'highwire_markup';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup_server' => 'v2',
      'bypass_stamper' => 'global',
      'variant' => 'full-text',
      'process' => array(
        'highwire_tables' => 0,
        'highwire_remove_invalid_links' => 0,
        'highwire_cc_logo' => 0,
        'highwire_extract_element' => 0,
        'highwire_embed' => 'highwire_embed',
        'highwire_url_rewrites' => 0,
        'highwire_quick_nav' => 0,
        'highwire_css' => 0,
        'highwire_delete_elements' => 0,
        'highwire_article_glossary_popup' => 0,
        'highwire_brightcove_video' => 0,
        'highwire_doi' => 0,
        'highwire_author_affiliates_tooltip' => 0,
        'highwire_disable_references' => 0,
        'highwire_collapsible_supplemental' => 0,
        'highwire_openurl' => 0,
        'highwire_tables_expansion' => 0,
        'highwire_socialcite_doi' => 0,
        'highwire_image_protection' => 0,
        'highwire_google_scholar' => 0,
        'highwire_inline_linked_media' => 0,
        'highwire_src_rewrites' => 0,
        'highwire_author_affiliates' => 0,
        'highwire_inline_ads' => 0,
        'highwire_arxiv_url' => 0,
        'highwire_article_reference_popup' => 0,
        'highwire_infotrieve_link' => 0,
        'highwire_reclass' => 0,
        'highwire_at_symbol' => 0,
        'highwire_video_flowplayer' => 0,
        'highwire_georef_css' => 0,
        'highwire_keywords' => 0,
        'highwire_pdf_fallback' => 0,
        'highwire_figures' => 0,
        'highwire_math' => 0,
      ),
      'variant_404' => 'not_found',
      'ac_403' => 'display_nothing',
      'variant_custom_text' => '',
      'variant_url' => '',
      'ac_custom_text' => '',
      'ac_url' => '',
      'disable_logging' => 0,
      'lock_variant' => 0,
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
      'referer_first_click' => 0,
      'variant_language' => '0',
      'google_abstract_link' => 1,
      'google_abstract_link_title' => 'View Abstract',
      'google_fulltext_link_title' => 'View Full Text',
      'enable_sso_redirect' => 0,
      'process_settings' => array(
        'highwire_cc_logo' => array(
          'path' => '',
        ),
        'highwire_extract_element' => array(
          'xpath' => '',
        ),
        'highwire_quick_nav' => array(
          'nav_down_icon' => 'icon-caret-down',
          'nav_up_icon' => 'icon-caret-up',
          'nav_class' => 'mobile-only float-me-right',
        ),
        'highwire_delete_elements' => array(
          'xpath' => '',
          'selector' => '',
        ),
        'highwire_brightcove_video' => array(
          'width' => '480',
          'height' => '270',
          'playerid' => '',
          'playerkey' => '',
        ),
        'highwire_doi' => array(
          'patterns' => '',
        ),
        'highwire_author_affiliates_tooltip' => array(
          'search-url' => '/search',
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
          'infotrieve_link_configuration' => array(
            'link_label' => 'Order article via Infotrieve',
            'link_icon' => 'icon-usd',
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
        'highwire_socialcite_doi' => array(
          'socialcite_partner_id' => '',
        ),
        'highwire_inline_ads' => array(
          'inline_ad_path' => '',
        ),
        'highwire_infotrieve_link' => array(
          'link_label' => 'Order article via Infotrieve',
          'link_icon' => 'icon-usd',
        ),
        'highwire_keywords' => array(
          'enabled_search_fallback' => 1,
          'search_base_path' => '/search',
        ),
        'highwire_figures' => array(
          'image_size' => 'medium',
          'image_click' => 'colorbox',
          'hide_caption' => 0,
          'exclude_protected' => 0,
          'figures_download_links' => array(
            'download-fig' => 'download-fig',
            'new-tab' => 'new-tab',
            'download-ppt' => 'download-ppt',
          ),
          'enable_brightcove_figures' => 0,
          'brightcove_figures' => array(
            'brightcove_figures_width' => '',
            'brightcove_figures_height' => '',
            'brightcove_figures_playerid' => '',
            'brightcove_figures_playerkey' => '',
          ),
        ),
      ),
      'variant_settings' => array(
        'toc' => array(
          'show_abstract' => 0,
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
                'display_ads_search_tooltip' => 0,
                'display_agricola_tooltip' => 0,
                'author_site_search_path' => 'search/',
                'display_translations' => 0,
                'display_translations_text' => 'Translations Available',
                'display_translations_text_icon' => 'icon-globe',
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
                'display_ads_search_tooltip' => 0,
                'display_agricola_tooltip' => 0,
                'author_site_search_path' => 'search/',
                'display_translations' => 0,
                'display_translations_text' => 'Translations Available',
                'display_translations_text_icon' => 'icon-globe',
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
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_highwire_news_story_sum';
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
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'label_override' => '',
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
    $pane->panel = 'content';
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
          'context' => 'argument_entity_id:node_1',
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
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
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
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['content'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'direct_publishing_news_collection_terms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Collections',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-style-alt-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'sidebar_right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'jnl_isa_dp_tools';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-art-tools',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'top';
    $pane->type = 'highwire_article_citation';
    $pane->subtype = 'highwire_article_citation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'context' => 'argument_entity_id:node_1',
      'aligner_start' => NULL,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'aligner_stop' => NULL,
      'override_title_markup' => NULL,
      'citation_settings_source' => 'corpus_config',
      'citation_manager_wrapper' => array(
        'citation_manager_citation' => 'jcore_featured_content',
      ),
      'corpus_config_wrapper' => array(
        'corpus_config_citation_context' => 'full_page_titles',
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
          'display_summary' => 0,
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
      'form_build_id' => 'form-mMVKzk3TC0xftg7KD0aRdp1pcMaMbyJEb_Bl09YuHhY',
      'form_token' => 'qyZILSjbUWNfxsgAcXsCWAuTT8jLaavkG1JFHKYVQg0',
      'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
      'pubdate_format_type' => '',
      'pubdate_format_custom' => '',
      'display_variants_list_inline' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'no-margin-bottom',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['top'][0] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__news-story-direct-publishing'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_direct_publishing_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'isa_direct_publishing_blog';
  $page->task = 'page';
  $page->admin_title = 'isa Direct Publishing Blog';
  $page->admin_description = 'A landing page for recent news articles.';
  $page->path = 'blog';
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
  $handler->name = 'page_isa_direct_publishing_blog__panel_context_5cf7c92f-cf5b-44bd-939c-94c5f85d8283';
  $handler->task = 'page';
  $handler->subtask = 'isa_direct_publishing_blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog Landing',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'blog-listing',
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
  $display->title = 'Blog Posts';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'jnl_isa_dp_featured_news-panel_pane_2';
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
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'jnl_isa_dp_news_landing-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-2'] = $pane;
    $display->panels['content'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'top';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => 'page-title',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['top'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['isa_direct_publishing_blog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'isa_direct_publishing_news';
  $page->task = 'page';
  $page->admin_title = 'isa Direct Publishing News';
  $page->admin_description = 'A landing page for recent news articles.';
  $page->path = 'news';
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
  $handler->name = 'page_isa_direct_publishing_news__panel_context_57d6feb8-6437-4238-a935-b38bc9eacb61';
  $handler->task = 'page';
  $handler->subtask = 'isa_direct_publishing_news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News Landing',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'news-listing',
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
  $display->title = 'News Articles';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'jnl_isa_dp_featured_news-panel_pane_1';
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
    $display->content['new-4'] = $pane;
    $display->panels['content'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'jnl_isa_dp_news_landing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['content'][1] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'top';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => 'page-title',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['top'][0] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['isa_direct_publishing_news'] = $page;

  return $pages;

}
