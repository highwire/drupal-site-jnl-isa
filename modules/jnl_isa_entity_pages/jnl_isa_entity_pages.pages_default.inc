<?php
/**
 * @file
 * jnl_isa_entity_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function jnl_isa_entity_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context__article_print_view_variant';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Article: Print View',
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
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'highwire_article' => 'highwire_article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'highwire_variant_request',
          'settings' => array(
            'variant' => array(
              'full-text.print' => 'full-text.print',
              'long' => 0,
              'editor-summary' => 0,
              'short-text' => 0,
              'executive-summary' => 0,
              'short-abstract' => 0,
              'short' => 0,
              'abstract' => 0,
              'extract' => 0,
              'gloss' => 0,
              'summary' => 0,
              'full-text' => 0,
              'full-text.pdf' => 0,
              'full-text.pdf+html' => 0,
              'easy-read' => 0,
              'precis' => 0,
              'full-text.txt' => 0,
              'index' => 0,
              'powerpoint' => 0,
              'expansion' => 0,
              'abridgment' => 0,
              'abridgment.pdf' => 0,
              'figures-only' => 0,
              'toc' => 0,
              'excel' => 0,
              'toc.pdf' => 0,
              'cover-expansion' => 0,
              'cover' => 0,
              'cover.pdf' => 0,
              'adjunct_embed' => 0,
              'index_by_author' => 0,
              'tizra-toc' => 0,
              'ref-links' => 0,
              'references-only' => 0,
              'large' => 0,
              'medium' => 0,
              'small' => 0,
              'adjunct-reprint' => 0,
              'pdf-extract' => 0,
              'pdf-extract.jpeg' => 0,
              'body' => 0,
              'reviewer-comments' => 0,
              'disclosures' => 0,
              'source-data' => 0,
              'brief' => 0,
              'georef' => 0,
              'georef-long' => 0,
              'eletter-abstract' => 0,
              'featured-figure' => 0,
              'external-links' => 0,
            ),
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'highwire_ac',
          'settings' => array(
            'variant' => 'full-text.print',
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
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->title = '%node:title';
  $display->uuid = 'ebf71f4d-79f5-4a63-bfdc-c2a1be86d9f3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context__article_print_view_variant';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ac003bb6-03a5-4346-87c0-c1b0342eaedc';
  $pane->panel = 'middle';
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
      'citation_manager_citation' => 'jcore_page_title_complete',
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
    'form_build_id' => 'form-biccvQGsv2uIllocYrx6eEptoQXLuF_mLSQn06CmMH4',
    'form_token' => 'OhlQjF_iSMgRh5Ly0uL6bHJ42zWQ9RkIIWXwSQfQ2nw',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
    'pubdate_format_type' => '',
    'pubdate_format_custom' => '',
    'display_variants_list_inline' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ac003bb6-03a5-4346-87c0-c1b0342eaedc';
  $display->content['new-ac003bb6-03a5-4346-87c0-c1b0342eaedc'] = $pane;
  $display->panels['middle'][0] = 'new-ac003bb6-03a5-4346-87c0-c1b0342eaedc';
  $pane = new stdClass();
  $pane->pid = 'new-6091e790-8872-4617-940a-60153d79adb6';
  $pane->panel = 'middle';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup_server' => 'v1',
    'bypass_stamper' => 'global',
    'variant' => 'full-text.print',
    'process' => array(
      'highwire_article_glossary_popup' => 0,
      'highwire_article_reference_popup' => 'highwire_article_reference_popup',
      'highwire_arxiv_url' => 0,
      'highwire_at_symbol' => 0,
      'highwire_author_affiliates' => 'highwire_author_affiliates',
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_brightcove_video' => 0,
      'highwire_cc_logo' => 0,
      'highwire_collapsible_supplemental' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_delete_elements' => 'highwire_delete_elements',
      'highwire_disable_references' => 0,
      'highwire_doi' => 0,
      'highwire_embed' => 0,
      'highwire_extract_element' => 0,
      'highwire_figures' => 'highwire_figures',
      'highwire_georef_css' => 0,
      'highwire_google_scholar' => 0,
      'highwire_image_protection' => 0,
      'highwire_infotrieve_link' => 0,
      'highwire_inline_ads' => 0,
      'highwire_inline_linked_media' => 0,
      'highwire_keywords' => 0,
      'highwire_math' => 'highwire_math',
      'highwire_openurl' => 0,
      'highwire_pdf_fallback' => 0,
      'highwire_quick_nav' => 0,
      'highwire_reclass' => 'highwire_reclass',
      'highwire_remove_invalid_links' => 0,
      'highwire_socialcite_doi' => 0,
      'highwire_src_rewrites' => 0,
      'highwire_tables' => 'highwire_tables',
      'highwire_url_rewrites' => 0,
      'highwire_video_flowplayer' => 0,
    ),
    'variant_404' => 'display_nothing',
    'ac_403' => 'display_nothing',
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
    'referer_first_click' => 0,
    'variant_language' => '0',
    'google_abstract_link' => 0,
    'google_abstract_link_title' => 'View Abstract',
    'google_fulltext_link_title' => 'View Full Text',
    'enable_sso_redirect' => 0,
    'process_settings' => array(
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
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
        'xpath' => '//xhtml:div[@class="contributors"]
//xhtml:h2[@class="subtitle"]
//xhtml:a[@class=\'rev-xref\']
//xhtml:a[@class=\'rev-xref-ref\']
//xhtml:div[@class=\'cit-extra\']',
        'selector' => '',
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
      'highwire_doi' => array(
        'patterns' => '',
      ),
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'nothing',
        'hide_caption' => 0,
        'exclude_protected' => 0,
      ),
      'highwire_infotrieve_link' => array(
        'link_label' => 'Order article via Infotrieve',
        'link_icon' => 'icon-usd',
      ),
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
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
      'highwire_socialcite_doi' => array(
        'socialcite_partner_id' => '',
      ),
    ),
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
        'article_citation' => array(
          'citation_settings_source' => 'custom',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => 'jnl_isa_list_archive_pages',
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
              'selector' => 0,
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
          ),
        ),
      ),
      'index-by-author' => array(
        'article_citation' => array(
          'citation_settings_source' => 'custom',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => 'jnl_isa_list_archive_pages',
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
              'selector' => 0,
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6091e790-8872-4617-940a-60153d79adb6';
  $display->content['new-6091e790-8872-4617-940a-60153d79adb6'] = $pane;
  $display->panels['middle'][1] = 'new-6091e790-8872-4617-940a-60153d79adb6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ac003bb6-03a5-4346-87c0-c1b0342eaedc';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context__article_print_view_variant'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'PDF Access Denied',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '302',
    'destination' => 'node/%node:nid',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'highwire_variant_request',
          'settings' => array(
            'variant' => array(
              'full-text.pdf' => 'full-text.pdf',
              'full-text.pdf+html' => 'full-text.pdf+html',
              'long' => 0,
              'editor-summary' => 0,
              'executive-summary' => 0,
              'short-text' => 0,
              'short' => 0,
              'abstract' => 0,
              'extract' => 0,
              'gloss' => 0,
              'full-text' => 0,
              'full-text.txt' => 0,
              'easy-read' => 0,
              'precis' => 0,
              'full-text.print' => 0,
              'index' => 0,
              'powerpoint' => 0,
              'expansion' => 0,
              'abridgment' => 0,
              'abridgment.pdf' => 0,
              'excel' => 0,
              'figures-only' => 0,
              'toc' => 0,
              'toc.pdf' => 0,
              'cover-expansion' => 0,
              'cover' => 0,
              'cover.pdf' => 0,
              'adjunct_embed' => 0,
              'index_by_author' => 0,
              'ref-links' => 0,
              'large' => 0,
              'medium' => 0,
              'small' => 0,
              'adjunct-reprint' => 0,
              'pdf-extract' => 0,
              'pdf-extract.jpeg' => 0,
              'body' => 0,
              'reviewer-comments' => 0,
              'disclosures' => 0,
              'source-data' => 0,
            ),
          ),
          'not' => FALSE,
        ),
        1 => array(
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
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_view_http_response'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Issue TOC Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'highwire_issue' => 'highwire_issue',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'jcore_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Table of Contents';
  $display->uuid = '9a0a20e6-e1da-409f-98ef-2660b534668f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1bd3273e-66e9-411e-a3f5-13c8d8798b11';
  $pane->panel = 'content';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'variant' => 'toc',
    'process' => array(
      'highwire_disable_references' => 0,
      'highwire_tables_expansion' => 0,
      'highwire_inline_ads' => 0,
      'highwire_openurl' => 0,
      'highwire_article_reference_popup' => 0,
      'highwire_image_protection' => 0,
      'highwire_arxiv_url' => 0,
      'highwire_infotrieve_link' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_georef_css' => 0,
      'highwire_url_rewrites' => 0,
      'highwire_tables' => 'highwire_tables',
      'highwire_author_affiliates' => 0,
      'highwire_delete_elements' => 0,
      'highwire_inline_linked_media' => 0,
      'highwire_keywords' => 0,
      'highwire_socialcite_doi' => 0,
      'highwire_brightcove_video' => 0,
      'highwire_cc_logo' => 0,
      'highwire_extract_element' => 0,
      'highwire_embed' => 0,
      'highwire_article_glossary_popup' => 0,
      'highwire_remove_invalid_links' => 0,
      'highwire_video_flowplayer' => 0,
      'highwire_at_symbol' => 0,
      'highwire_figures' => 0,
      'highwire_quick_nav' => 0,
      'highwire_google_scholar' => 0,
      'highwire_doi' => 0,
      'highwire_reclass' => 'highwire_reclass',
      'highwire_math' => 0,
      'highwire_collapsible_supplemental' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_src_rewrites' => 0,
      'highwire_pdf_fallback' => 0,
    ),
    'variant_404' => 'not_found',
    'ac_403' => 'access_denied',
    'variant_custom_text' => '',
    'variant_url' => '',
    'ac_custom_text' => '',
    'ac_url' => '',
    'disable_logging' => 0,
    'lock_variant' => 0,
    'variant_settings' => array(
      'toc' => array(
        'show_abstract' => 0,
        'article_citation' => array(
          'citation_settings_source' => 'corpus_config',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => 'jcore_list_full',
          ),
          'corpus_config_wrapper' => array(
            'corpus_config_citation_context' => 'toc',
          ),
          'citation_style' => 'jcore_standard',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 1,
          'display_subtitle' => 0,
          'choose_pubdate' => 'ppubdate',
          'pubdate_format_type' => '',
          'pubdate_format_custom' => '',
          'display_markup_snippet' => '',
          'highlight_image_toggle' => 0,
          'display_original_link' => 0,
          'display_access_indicator' => 1,
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
          'display_supplements' => 1,
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
        ),
      ),
      'index-by-author' => array(
        'article_citation' => array(
          'citation_settings_source' => 'corpus_config',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => 'jcore_list_full',
          ),
          'corpus_config_wrapper' => array(
            'corpus_config_citation_context' => 'toc',
          ),
          'citation_style' => 'jcore_standard',
          'cache_enabled' => 1,
          'cache_time' => '86400',
          'title_type' => 'full',
          'short_title_options' => array(
            'char_count' => '50',
            'add_ellipsis' => 0,
          ),
          'title_as_link' => 1,
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
    'disable_ac' => 0,
    'process_settings' => array(
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
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
      ),
      'highwire_infotrieve_link' => array(
        'link_label' => 'Order article via Infotrieve',
        'link_icon' => 'icon-usd',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '',
        'selector' => '',
      ),
      'highwire_keywords' => array(
        'enabled_search_fallback' => 1,
        'search_base_path' => '/search',
      ),
      'highwire_socialcite_doi' => array(
        'socialcite_partner_id' => '',
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
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'colorbox',
        'hide_caption' => 0,
        'exclude_protected' => 0,
      ),
      'highwire_quick_nav' => array(
        'nav_down_icon' => 'icon-caret-down',
        'nav_up_icon' => 'icon-caret-up',
        'nav_class' => 'mobile-only float-me-right',
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
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
      ),
    ),
    'bypass_stamper' => 'global',
    'referer_first_click_referers' => '',
    'referer_first_click' => 0,
    'variant_language' => '0',
    'google_abstract_link' => 1,
    'google_abstract_link_title' => 'View Abstract',
    'google_fulltext_link_title' => 'View Full Text',
    'override_title_heading' => 'h2',
    'markup_server' => 'v1',
    'enable_sso_redirect' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1bd3273e-66e9-411e-a3f5-13c8d8798b11';
  $display->content['new-1bd3273e-66e9-411e-a3f5-13c8d8798b11'] = $pane;
  $display->panels['content'][0] = 'new-1bd3273e-66e9-411e-a3f5-13c8d8798b11';
  $pane = new stdClass();
  $pane->pid = 'new-b3dea023-77d9-4116-abc8-3b475c97e1d6';
  $pane->panel = 'content';
  $pane->type = 'highwire_back_to_top';
  $pane->subtype = 'highwire_back_to_top';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'argument_entity_id:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'form_build_id' => 'form-k45Fyn6CPKlPik9NeMuhjy_A9JzZF-nHtNudJY2E7-8',
    'form_token' => 'El_RnEVy1LYbLsKi7jLPqXCSIVWi_phemiotKYK-OsQ',
    'form_id' => 'highwire_highwire_back_to_top_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b3dea023-77d9-4116-abc8-3b475c97e1d6';
  $display->content['new-b3dea023-77d9-4116-abc8-3b475c97e1d6'] = $pane;
  $display->panels['content'][1] = 'new-b3dea023-77d9-4116-abc8-3b475c97e1d6';
  $pane = new stdClass();
  $pane->pid = 'new-572a2fd4-dca8-4081-9f5f-b0020d3bf455';
  $pane->panel = 'content';
  $pane->type = 'highwire_node_pager';
  $pane->subtype = 'highwire_node_pager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'previous_link_title' => 'Previous',
    'previous_link_icon' => 'icon-circle-arrow-left',
    'next_link_title' => 'Next',
    'next_link_icon' => 'icon-circle-arrow-right',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '572a2fd4-dca8-4081-9f5f-b0020d3bf455';
  $display->content['new-572a2fd4-dca8-4081-9f5f-b0020d3bf455'] = $pane;
  $display->panels['content'][2] = 'new-572a2fd4-dca8-4081-9f5f-b0020d3bf455';
  $pane = new stdClass();
  $pane->pid = 'new-5ee66f55-c94b-4a53-a2d8-9114b6b9407d';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_iss_issue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'In this issue',
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
  $pane->uuid = '5ee66f55-c94b-4a53-a2d8-9114b6b9407d';
  $display->content['new-5ee66f55-c94b-4a53-a2d8-9114b6b9407d'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-5ee66f55-c94b-4a53-a2d8-9114b6b9407d';
  $pane = new stdClass();
  $pane->pid = 'new-a25aa96e-d236-4ffe-80cf-6712f0e4f947';
  $pane->panel = 'sidebar_right';
  $pane->type = 'highwire_toc_sections';
  $pane->subtype = 'highwire_toc_sections';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_variant_request',
        'settings' => array(
          'variant' => array(
            'index_by_author' => 'index_by_author',
            'long' => 0,
            'editor-summary' => 0,
            'short-text' => 0,
            'executive-summary' => 0,
            'short-abstract' => 0,
            'short' => 0,
            'abstract' => 0,
            'extract' => 0,
            'gloss' => 0,
            'summary' => 0,
            'full-text' => 0,
            'full-text.pdf' => 0,
            'full-text.pdf+html' => 0,
            'easy-read' => 0,
            'precis' => 0,
            'full-text.txt' => 0,
            'index' => 0,
            'full-text.print' => 0,
            'powerpoint' => 0,
            'expansion' => 0,
            'abridgment' => 0,
            'abridgment.pdf' => 0,
            'figures-only' => 0,
            'toc' => 0,
            'excel' => 0,
            'toc.pdf' => 0,
            'cover-expansion' => 0,
            'cover' => 0,
            'cover.pdf' => 0,
            'adjunct_embed' => 0,
            'tizra-toc' => 0,
            'ref-links' => 0,
            'references-only' => 0,
            'large' => 0,
            'medium' => 0,
            'small' => 0,
            'adjunct-reprint' => 0,
            'pdf-extract' => 0,
            'pdf-extract.jpeg' => 0,
            'body' => 0,
            'reviewer-comments' => 0,
            'disclosures' => 0,
            'source-data' => 0,
            'brief' => 0,
            'georef' => 0,
            'georef-long' => 0,
            'eletter-abstract' => 0,
            'featured-figure' => 0,
          ),
        ),
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Jump to',
    'override_title_heading' => 'h2',
    'list_type' => 'ul',
    'float' => 1,
    'float_class' => 'grid-10 alpha omega',
    'show_search_tocs' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-style-alt-content mobile-hidden',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a25aa96e-d236-4ffe-80cf-6712f0e4f947';
  $display->content['new-a25aa96e-d236-4ffe-80cf-6712f0e4f947'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-a25aa96e-d236-4ffe-80cf-6712f0e4f947';
  $pane = new stdClass();
  $pane->pid = 'new-616500f5-f782-4e2a-b604-e6378161d970';
  $pane->panel = 'sidebar_right';
  $pane->type = 'snippet';
  $pane->subtype = 'snippet';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'snippet' => 'jnl_isa_toc_page_ad',
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
  $pane->uuid = '616500f5-f782-4e2a-b604-e6378161d970';
  $display->content['new-616500f5-f782-4e2a-b604-e6378161d970'] = $pane;
  $display->panels['sidebar_right'][2] = 'new-616500f5-f782-4e2a-b604-e6378161d970';
  $pane = new stdClass();
  $pane->pid = 'new-977632fd-9e81-4c31-ab81-f1923c867260';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_mc_read';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '977632fd-9e81-4c31-ab81-f1923c867260';
  $display->content['new-977632fd-9e81-4c31-ab81-f1923c867260'] = $pane;
  $display->panels['sidebar_right'][3] = 'new-977632fd-9e81-4c31-ab81-f1923c867260';
  $pane = new stdClass();
  $pane->pid = 'new-f61245f5-8b37-42b0-a5e0-b717d747cd62';
  $pane->panel = 'top';
  $pane->type = 'highwire_variant_title';
  $pane->subtype = 'highwire_variant_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'argument_entity_id:node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'variant' => 'toc',
    'lock_variant' => 0,
    'disable_ac' => 0,
    'title_long' => 'Long',
    'title_editor-summary' => 'Editor\'s Summary',
    'title_executive-summary' => 'Executive Summary',
    'title_short' => 'Short',
    'title_abstract' => 'Abstract',
    'title_extract' => 'Extract',
    'title_gloss' => 'Gloss',
    'title_full-text' => 'Full Text',
    'title_full-text.pdf' => 'Full Text (PDF)',
    'title_full-text.pdf+html' => 'PDF/HTML',
    'title_easy-read' => 'Easy Read',
    'title_precis' => 'Precis',
    'title_precis-abstract' => 'Precis Abstract',
    'title_index' => 'Index',
    'title_powerpoint' => 'Powerpoint',
    'title_expansion' => 'Expansion',
    'title_excel' => 'Excel',
    'title_abridgment' => 'Abridgment',
    'title_abridgment.pdf' => 'Abridgement PDF',
    'title_figures-only' => 'Figures Only',
    'title_toc' => 'Table of Contents',
    'title_toc.pdf' => 'Table of Contents (PDF)',
    'title_cover-caption' => 'Cover Caption',
    'title_cover' => 'Cover',
    'title_cover.pdf' => 'Cover (PDF)',
    'title_cover-expansion' => 'About the Cover',
    'title_adjunct-embed' => 'Media Adjuncts',
    'title_index-by-author' => 'Index by author',
    'title_ref-links' => 'Reference Links',
    'title_large' => 'Large Image',
    'title_medium' => 'Medium Image',
    'title_small' => 'Small Image',
    'form_build_id' => 'form-agp_Jttc4ZJhfiLJ_3blSF8L9q8SOPRSIXbdJa0Qt7M',
    'form_token' => 'TxRrG7c1f844mzZSPkXWA780QNcPzdGc2r2DZ5OiyRg',
    'form_id' => 'highwire_variant_title_edit_form',
    'page_title' => 1,
  );
  $pane->cache = array(
    'method' => 'panels_hash_cache',
    'settings' => array(
      'lifetime' => '15',
      'granularity' => array(
        'url' => 'url',
        'args' => 0,
        'context' => 0,
        'user' => 0,
        'user_role' => 0,
        'path' => 0,
      ),
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f61245f5-8b37-42b0-a5e0-b717d747cd62';
  $display->content['new-f61245f5-8b37-42b0-a5e0-b717d747cd62'] = $pane;
  $display->panels['top'][0] = 'new-f61245f5-8b37-42b0-a5e0-b717d747cd62';
  $pane = new stdClass();
  $pane->pid = 'new-e36b40a0-b66b-4c46-927f-04b6b240a10e';
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
      'citation_manager_citation' => 'jcore_page_title_complete',
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
    'form_build_id' => 'form-7IXp_QFiQkKjF-osDbh6PN5H_cQD1OmvGhXdGvSh1XA',
    'form_token' => 'OhlQjF_iSMgRh5Ly0uL6bHJ42zWQ9RkIIWXwSQfQ2nw',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
    'pubdate_format_type' => '',
    'pubdate_format_custom' => '',
    'display_variants_list_inline' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e36b40a0-b66b-4c46-927f-04b6b240a10e';
  $display->content['new-e36b40a0-b66b-4c46-927f-04b6b240a10e'] = $pane;
  $display->panels['top'][1] = 'new-e36b40a0-b66b-4c46-927f-04b6b240a10e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-f61245f5-8b37-42b0-a5e0-b717d747cd62';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Fragment Expansion',
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
        'identifier' => 'Fragment Issue',
        'keyword' => 'issue',
        'name' => 'entity_from_field:field_highwire_a_issue-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'HighWire: Closest ancestor',
        'keyword' => 'closest_ancestor',
        'name' => 'highwire_closest_ancestor',
        'type' => 'highwire_article',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'HighWire: Closest ancestor - Fragment article',
        'keyword' => 'fragment_article',
        'name' => 'highwire_closest_ancenstor',
        'type' => 'highwire_article',
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
              'highwire_fragment' => 'highwire_fragment',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'sidebar_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title | %fragment_article:title';
  $display->uuid = '533901eb-f2e0-4e12-8aee-fc78d6e6e7a3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1db8bce9-56b1-4607-9fd2-ab0dcba3a540';
  $pane->panel = 'content';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'expansion',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 1,
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
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'variant' => 'expansion',
    'process' => array(
      'highwire_disable_references' => 0,
      'highwire_inline_ads' => 0,
      'highwire_openurl' => 0,
      'highwire_article_reference_popup' => 0,
      'highwire_image_protection' => 0,
      'highwire_arxiv_url' => 0,
      'highwire_infotrieve_link' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_georef_css' => 0,
      'highwire_url_rewrites' => 0,
      'highwire_tables' => 0,
      'highwire_author_affiliates' => 0,
      'highwire_delete_elements' => 0,
      'highwire_inline_linked_media' => 0,
      'highwire_keywords' => 0,
      'highwire_socialcite_doi' => 0,
      'highwire_brightcove_video' => 0,
      'highwire_cc_logo' => 0,
      'highwire_extract_element' => 0,
      'highwire_embed' => 'highwire_embed',
      'highwire_article_glossary_popup' => 0,
      'highwire_remove_invalid_links' => 0,
      'highwire_video_flowplayer' => 0,
      'highwire_at_symbol' => 0,
      'highwire_figures' => 'highwire_figures',
      'highwire_quick_nav' => 0,
      'highwire_google_scholar' => 0,
      'highwire_doi' => 0,
      'highwire_reclass' => 'highwire_reclass',
      'highwire_math' => 'highwire_math',
      'highwire_collapsible_supplemental' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_src_rewrites' => 0,
      'highwire_pdf_fallback' => 0,
    ),
    'variant_404' => 'not_found',
    'ac_403' => 'access_denied',
    'variant_custom_text' => '',
    'variant_url' => '',
    'ac_custom_text' => '',
    'ac_url' => '',
    'disable_logging' => 0,
    'lock_variant' => 0,
    'disable_ac' => 0,
    'process_settings' => array(
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
      'highwire_inline_ads' => array(
        'inline_ad_path' => '',
      ),
      'highwire_infotrieve_link' => array(
        'link_label' => 'Order article via Infotrieve',
        'link_icon' => 'icon-usd',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '',
        'selector' => '',
      ),
      'highwire_keywords' => array(
        'enabled_search_fallback' => 1,
        'search_base_path' => '/search',
      ),
      'highwire_socialcite_doi' => array(
        'socialcite_partner_id' => '',
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
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'colorbox',
        'hide_caption' => 0,
        'exclude_protected' => 0,
      ),
      'highwire_quick_nav' => array(
        'nav_down_icon' => 'icon-caret-down',
        'nav_up_icon' => 'icon-caret-up',
        'nav_class' => 'mobile-only float-me-right',
      ),
      'highwire_doi' => array(
        'patterns' => '',
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
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
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
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'colorbox',
          'display_cme_link' => 0,
          'display_abstract_tooltip' => 0,
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
      'index-by-author' => array(
        'article_citation' => array(
          'citation_settings_source' => 'custom',
          'citation_manager_wrapper' => array(
            'citation_manager_citation' => 'jcore_apa',
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
          'featured_image_variant' => 'large',
          'featured_image_click_image' => 'colorbox',
          'display_cme_link' => 0,
          'display_abstract_tooltip' => 0,
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
    'override_title' => 1,
    'override_title_text' => '%node:title',
    'markup_server' => 'v1',
    'bypass_stamper' => 'global',
    'referer_first_click_referers' => '',
    'referer_first_click' => 0,
    'variant_language' => '0',
    'google_abstract_link' => 1,
    'google_abstract_link_title' => 'View Abstract',
    'google_fulltext_link_title' => 'View Full Text',
    'enable_sso_redirect' => 0,
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
  $pane->uuid = '1db8bce9-56b1-4607-9fd2-ab0dcba3a540';
  $display->content['new-1db8bce9-56b1-4607-9fd2-ab0dcba3a540'] = $pane;
  $display->panels['content'][0] = 'new-1db8bce9-56b1-4607-9fd2-ab0dcba3a540';
  $pane = new stdClass();
  $pane->pid = 'new-f0ae5d54-018c-4656-8ce4-afa03779f464';
  $pane->panel = 'content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_challenge';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'expansion',
          'log_ac_denied' => 1,
          'log_ac_granted' => 0,
          'referer_first_click' => 1,
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f0ae5d54-018c-4656-8ce4-afa03779f464';
  $display->content['new-f0ae5d54-018c-4656-8ce4-afa03779f464'] = $pane;
  $display->panels['content'][1] = 'new-f0ae5d54-018c-4656-8ce4-afa03779f464';
  $pane = new stdClass();
  $pane->pid = 'new-b822a1fe-4c91-4242-ab00-0d3cd4cbf0d2';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Link to view article',
    'title' => '',
    'body' => '<p><a href="%fragment_article:url"><i class="icon-arrow-left">&nbsp;</i> View article</a></p>
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b822a1fe-4c91-4242-ab00-0d3cd4cbf0d2';
  $display->content['new-b822a1fe-4c91-4242-ab00-0d3cd4cbf0d2'] = $pane;
  $display->panels['content'][2] = 'new-b822a1fe-4c91-4242-ab00-0d3cd4cbf0d2';
  $pane = new stdClass();
  $pane->pid = 'new-17e08aa7-c9f8-4164-96af-4e0fe8d441cf';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_art_issue';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'relationship_entity_from_field:field_highwire_a_issue-node-node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'relationship_entity_from_field:field_highwire_a_issue-node-node_1',
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
    'css_class' => 'pane-style-alt-content',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '17e08aa7-c9f8-4164-96af-4e0fe8d441cf';
  $display->content['new-17e08aa7-c9f8-4164-96af-4e0fe8d441cf'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-17e08aa7-c9f8-4164-96af-4e0fe8d441cf';
  $pane = new stdClass();
  $pane->pid = 'new-179ac055-dc5f-4f8f-a6d7-b3491a413e6f';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_art_issue';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '0',
        ),
        'context' => 'relationship_entity_from_field:field_highwire_a_issue-node-node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'context_current_issue_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '179ac055-dc5f-4f8f-a6d7-b3491a413e6f';
  $display->content['new-179ac055-dc5f-4f8f-a6d7-b3491a413e6f'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-179ac055-dc5f-4f8f-a6d7-b3491a413e6f';
  $pane = new stdClass();
  $pane->pid = 'new-2f8b6a79-4270-451a-b258-e4ca6506e29f';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_art_tools';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'relationship_highwire_closest_ancenstor_1',
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
  $pane->uuid = '2f8b6a79-4270-451a-b258-e4ca6506e29f';
  $display->content['new-2f8b6a79-4270-451a-b258-e4ca6506e29f'] = $pane;
  $display->panels['sidebar_right'][2] = 'new-2f8b6a79-4270-451a-b258-e4ca6506e29f';
  $pane = new stdClass();
  $pane->pid = 'new-69569e38-46c4-4c75-86e6-a892683bfa89';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_accordion';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'relationship_highwire_closest_ancenstor_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '69569e38-46c4-4c75-86e6-a892683bfa89';
  $display->content['new-69569e38-46c4-4c75-86e6-a892683bfa89'] = $pane;
  $display->panels['sidebar_right'][3] = 'new-69569e38-46c4-4c75-86e6-a892683bfa89';
  $pane = new stdClass();
  $pane->pid = 'new-954dca99-e04e-4bf8-8d4b-12c77594c493';
  $pane->panel = 'sidebar_right';
  $pane->type = 'highwire_article_collections';
  $pane->subtype = 'highwire_article_collections';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'prelabel' => NULL,
    'label' => NULL,
    'target' => NULL,
    'context' => 'relationship_highwire_closest_ancenstor_1',
    'override_title' => 1,
    'override_title_text' => 'Subjects',
    'scheme' => 'topic',
    'link' => 1,
    'threaded' => 1,
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
  $pane->uuid = '954dca99-e04e-4bf8-8d4b-12c77594c493';
  $display->content['new-954dca99-e04e-4bf8-8d4b-12c77594c493'] = $pane;
  $display->panels['sidebar_right'][4] = 'new-954dca99-e04e-4bf8-8d4b-12c77594c493';
  $pane = new stdClass();
  $pane->pid = 'new-310af70e-d3c6-4af8-a9e7-1de77991a15a';
  $pane->panel = 'sidebar_right';
  $pane->type = 'highwire_term_full_title';
  $pane->subtype = 'highwire_term_full_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'style_list' => 'comma-inline',
    'link' => 1,
    'taxonomy_field_name' => 'field_highwire_article_keyword',
    'context' => 'relationship_highwire_closest_ancenstor_1',
    'override_title' => 1,
    'override_title_text' => 'Keywords',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '310af70e-d3c6-4af8-a9e7-1de77991a15a';
  $display->content['new-310af70e-d3c6-4af8-a9e7-1de77991a15a'] = $pane;
  $display->panels['sidebar_right'][5] = 'new-310af70e-d3c6-4af8-a9e7-1de77991a15a';
  $pane = new stdClass();
  $pane->pid = 'new-bdaa2484-73cb-4330-a002-8142e3abffe7';
  $pane->panel = 'top';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'relationship_highwire_closest_ancenstor_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'highwire_article_top_a',
    'title_type' => 'full',
    'title_as_link' => 0,
    'choose_pubdate' => 'ppubdate',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'form_build_id' => 'form-gTPemOMyS3obgeQpUVj-fuHA2L03xNNPA_ZkZ_bnVZQ',
    'form_token' => 'OhlQjF_iSMgRh5Ly0uL6bHJ42zWQ9RkIIWXwSQfQ2nw',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
    'display_markup_snippet' => '',
    'display_author_tooltip' => 1,
    'display_subtitle' => 1,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'corpus_config',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_page_title_complete',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'full_page_titles',
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
    'highlight_image_toggle' => 0,
    'cpath_prefix' => '',
    'pubdate_format_type' => '',
    'pubdate_format_custom' => '',
    'display_variants_list_inline' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bdaa2484-73cb-4330-a002-8142e3abffe7';
  $display->content['new-bdaa2484-73cb-4330-a002-8142e3abffe7'] = $pane;
  $display->panels['top'][0] = 'new-bdaa2484-73cb-4330-a002-8142e3abffe7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Article Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '#hw-email-link > .pane-content {
    display: inline;
}',
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
              'highwire_article' => 'highwire_article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'sidebar_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ab4298a2-8d1e-43b4-90f8-a006fcdc8bbb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fad8a034-0152-465a-9aa1-cd3d6904ce8c';
  $pane->panel = 'content';
  $pane->type = 'highwire_panel_tabs';
  $pane->subtype = 'highwire_panel_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'return' => 'Finish',
    'cancel' => 'Cancel',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'prev_container_id' => 'highwire_article_tabs_container',
    'container_id' => 'highwire_article_tabs',
    'highwire_article_variants' => array(
      'abstract' => array(
        'check' => 1,
        'panel_options' => 'jnl_isa_abstract',
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'fulltext' => array(
        'check' => 1,
        'panel_options' => 'jnl_isa_fulltext',
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-9',
      ),
      'pdf' => array(
        'check' => 1,
        'panel_options' => 'jnl_isa_pdf',
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-8',
      ),
      'versions' => array(
        'check' => 1,
        'panel_options' => 'jnl_isa_versions',
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-7',
      ),
      'metrics' => array(
        'check' => 0,
        'panel_options' => 'jnl_isa_a_toolbox',
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-4',
      ),
      'adjuncts' => array(
        'check' => 1,
        'panel_options' => 'jnl_isa_datasupp',
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-6',
      ),
      'fragments' => array(
        'check' => 1,
        'panel_options' => 'jnl_isa_fig',
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-5',
      ),
      'ref-links' => array(
        'check' => 0,
        'panel_options' => 'jnl_isa_a_toolbox',
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-3',
      ),
    ),
    'form_build_id' => 'form-xngrEw1vSWdZzjpIhsdqkDe6Vg8q8axjU-ZSX-_glu8',
    'form_token' => 'V4a9RdxHVdkWOl6c6ckYspdI0k1bgQQZ35MsEvawBhM',
    'form_id' => 'highwire_panel_tabs_edit_form',
    'op' => 'Finish',
    'mini_panels' => array(
      'jnl_isa_art_tools' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'responsive_menu_search' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'responsive_menu_main_menu' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'responsive_menu' => array(
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
      'jnl_isa_save_copy' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'responsive_menu_user_menu' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_mc_read' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_en' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_chi' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cite_mla' => array(
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
      'jnl_isa_cite_apa' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'responsive_menu_article_nav' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_alert' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'hw_small_logo' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cit_toolb' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_arcpage' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cit_print' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_mult_exrt' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_tab_pdf_si' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_inst_brand' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_footer' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_cit_email' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_foot_info' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-10',
      ),
      'jnl_isa_art_issue' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-9',
      ),
      'jnl_isa_search_box' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-8',
      ),
      'jnl_isa_iss_issue' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-7',
      ),
      'jnl_isa_tab_art' => array(
        'selected' => 1,
        'tab_title' => 'Article',
        'url_id' => '',
        'weight' => '-6',
      ),
      'jnl_isa_hme_issue' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-5',
      ),
      'jnl_isa_art_info' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-4',
      ),
      'jnl_isa_challenge' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '-3',
      ),
      'jnl_isa_tab_data' => array(
        'selected' => 1,
        'tab_title' => 'Figures &amp; Data',
        'url_id' => 'tab-figures-data',
        'weight' => '-2',
      ),
      'jnl_isa_tab_supp' => array(
        'selected' => 1,
        'tab_title' => 'Supplemental',
        'url_id' => 'tab-supplemental',
        'weight' => '-1',
      ),
      'jnl_isa_tab_elets' => array(
        'selected' => 0,
        'tab_title' => 'eLetters',
        'url_id' => 'tab-e-letters',
        'weight' => '0',
      ),
      'jnl_isa_tab_info' => array(
        'selected' => 1,
        'tab_title' => 'Info &amp; Metrics',
        'url_id' => 'tab-article-info',
        'weight' => '0',
      ),
      'jnl_isa_tab_refs' => array(
        'selected' => 1,
        'tab_title' => 'References',
        'url_id' => 'tab-references',
        'weight' => '0',
      ),
      'jnl_isa_tab_pdf' => array(
        'selected' => 1,
        'tab_title' => '<i class="icon-file-alt"></i> PDF',
        'url_id' => 'tab-pdf',
        'weight' => '1',
      ),
      'jnl_isa_most_cited' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '2',
      ),
      'jnl_isa_most_read' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '3',
      ),
      'jnl_isa_top_topics' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '4',
      ),
      'jnl_isa_accordion' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '5',
      ),
      'jnl_isa_cite_tool' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '6',
      ),
      'jnl_isa_login' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '7',
      ),
      'jnl_isa_uid_strng' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '8',
      ),
      'jnl_isa_art_alert' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '9',
      ),
      'jnl_isa_art_email' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
      'jnl_isa_share' => array(
        'selected' => 0,
        'tab_title' => '',
        'url_id' => '',
        'weight' => '10',
      ),
    ),
    'highwire_panel_tab' => array(
      'pdf_link_only' => 1,
      'pdf' => 'jnl_isa_tab_pdf',
      'data' => 'jnl_isa_tab_data',
      'supp' => 'jnl_isa_tab_supp',
    ),
    'url_enabled' => 1,
    'override_title_heading' => 'h2',
    'clean_url' => 1,
    'clean_url_delim' => '/',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-panels-ajax-tab-tabs',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fad8a034-0152-465a-9aa1-cd3d6904ce8c';
  $display->content['new-fad8a034-0152-465a-9aa1-cd3d6904ce8c'] = $pane;
  $display->panels['content'][0] = 'new-fad8a034-0152-465a-9aa1-cd3d6904ce8c';
  $pane = new stdClass();
  $pane->pid = 'new-7dc6d2e6-7c69-4e75-854b-63e6a18475aa';
  $pane->panel = 'content';
  $pane->type = 'highwire_panel_tabs_container';
  $pane->subtype = 'highwire_panel_tabs_container';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'container_id' => 'highwire_article_tabs',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
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
  $pane->uuid = '7dc6d2e6-7c69-4e75-854b-63e6a18475aa';
  $display->content['new-7dc6d2e6-7c69-4e75-854b-63e6a18475aa'] = $pane;
  $display->panels['content'][1] = 'new-7dc6d2e6-7c69-4e75-854b-63e6a18475aa';
  $pane = new stdClass();
  $pane->pid = 'new-28ece1ca-33cb-4d9b-9289-db7c782b2bf9';
  $pane->panel = 'content';
  $pane->type = 'highwire_node_pager';
  $pane->subtype = 'highwire_node_pager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'previous_link_title' => 'Previous',
    'previous_link_icon' => 'icon-circle-arrow-left',
    'next_link_title' => 'Next',
    'next_link_icon' => 'icon-circle-arrow-right',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '28ece1ca-33cb-4d9b-9289-db7c782b2bf9';
  $display->content['new-28ece1ca-33cb-4d9b-9289-db7c782b2bf9'] = $pane;
  $display->panels['content'][2] = 'new-28ece1ca-33cb-4d9b-9289-db7c782b2bf9';
  $pane = new stdClass();
  $pane->pid = 'new-6561b70e-f8fa-43ab-85df-318d09f0874f';
  $pane->panel = 'content';
  $pane->type = 'highwire_back_to_top';
  $pane->subtype = 'highwire_back_to_top';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6561b70e-f8fa-43ab-85df-318d09f0874f';
  $display->content['new-6561b70e-f8fa-43ab-85df-318d09f0874f'] = $pane;
  $display->panels['content'][3] = 'new-6561b70e-f8fa-43ab-85df-318d09f0874f';
  $pane = new stdClass();
  $pane->pid = 'new-6be53dae-9bd2-40b8-be32-db772312d9ea';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_art_issue';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'relationship_entity_from_field:field_highwire_a_issue-node-node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'relationship_entity_from_field:field_highwire_a_issue-node-node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->uuid = '6be53dae-9bd2-40b8-be32-db772312d9ea';
  $display->content['new-6be53dae-9bd2-40b8-be32-db772312d9ea'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-6be53dae-9bd2-40b8-be32-db772312d9ea';
  $pane = new stdClass();
  $pane->pid = 'new-1b43bcb6-a89c-43ee-83a1-73763dee9e7c';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_art_issue';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '0',
        ),
        'context' => 'relationship_entity_from_field:field_highwire_a_issue-node-node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'context_current_issue_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1b43bcb6-a89c-43ee-83a1-73763dee9e7c';
  $display->content['new-1b43bcb6-a89c-43ee-83a1-73763dee9e7c'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-1b43bcb6-a89c-43ee-83a1-73763dee9e7c';
  $pane = new stdClass();
  $pane->pid = 'new-0703c9c8-58b7-4fc3-a4ec-5bc84bd68964';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_art_tools';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
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
  $pane->uuid = '0703c9c8-58b7-4fc3-a4ec-5bc84bd68964';
  $display->content['new-0703c9c8-58b7-4fc3-a4ec-5bc84bd68964'] = $pane;
  $display->panels['sidebar_right'][2] = 'new-0703c9c8-58b7-4fc3-a4ec-5bc84bd68964';
  $pane = new stdClass();
  $pane->pid = 'new-3bf894df-1c22-4bf8-b9a5-f13aeab72082';
  $pane->panel = 'sidebar_right';
  $pane->type = 'highwire_article_nav';
  $pane->subtype = 'highwire_article_nav';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'list_type' => 0,
    'float' => 1,
    'float_class' => 'grid-10 alpha omega',
    'top_link' => 0,
    'panels_ajax_tab' => 'highwire_article_tabs',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Jump to section',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mobile-hidden pane-style-alt-content',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3bf894df-1c22-4bf8-b9a5-f13aeab72082';
  $display->content['new-3bf894df-1c22-4bf8-b9a5-f13aeab72082'] = $pane;
  $display->panels['sidebar_right'][3] = 'new-3bf894df-1c22-4bf8-b9a5-f13aeab72082';
  $pane = new stdClass();
  $pane->pid = 'new-99807058-4896-4ed0-b015-5d96ce16ff5a';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_accordion';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
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
  $pane->uuid = '99807058-4896-4ed0-b015-5d96ce16ff5a';
  $display->content['new-99807058-4896-4ed0-b015-5d96ce16ff5a'] = $pane;
  $display->panels['sidebar_right'][4] = 'new-99807058-4896-4ed0-b015-5d96ce16ff5a';
  $pane = new stdClass();
  $pane->pid = 'new-834f7018-e796-4aea-9b60-62b79d52f2b5';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_trans_dls';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_has_foriegn_lang_dl_variant',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
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
  $pane->uuid = '834f7018-e796-4aea-9b60-62b79d52f2b5';
  $display->content['new-834f7018-e796-4aea-9b60-62b79d52f2b5'] = $pane;
  $display->panels['sidebar_right'][5] = 'new-834f7018-e796-4aea-9b60-62b79d52f2b5';
  $pane = new stdClass();
  $pane->pid = 'new-17234d7b-f99a-45a8-a69c-64f2923b0d01';
  $pane->panel = 'sidebar_right';
  $pane->type = 'highwire_article_collections';
  $pane->subtype = 'highwire_article_collections';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'prelabel' => NULL,
    'label' => NULL,
    'target' => NULL,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Subjects',
    'scheme' => 'topic',
    'link' => 1,
    'threaded' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '17234d7b-f99a-45a8-a69c-64f2923b0d01';
  $display->content['new-17234d7b-f99a-45a8-a69c-64f2923b0d01'] = $pane;
  $display->panels['sidebar_right'][6] = 'new-17234d7b-f99a-45a8-a69c-64f2923b0d01';
  $pane = new stdClass();
  $pane->pid = 'new-eedac36b-5b0c-4963-9375-c5cd5ce81155';
  $pane->panel = 'sidebar_right';
  $pane->type = 'highwire_term_full_title';
  $pane->subtype = 'highwire_term_full_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'style_list' => 'comma-inline',
    'link' => 1,
    'taxonomy_field_name' => 'field_highwire_article_keyword',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Keywords',
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
  $pane->uuid = 'eedac36b-5b0c-4963-9375-c5cd5ce81155';
  $display->content['new-eedac36b-5b0c-4963-9375-c5cd5ce81155'] = $pane;
  $display->panels['sidebar_right'][7] = 'new-eedac36b-5b0c-4963-9375-c5cd5ce81155';
  $pane = new stdClass();
  $pane->pid = 'new-6fa837ea-975c-4a63-982a-2f64c275f9b8';
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
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_style' => 'highwire_article_top_a',
    'title_type' => 'full',
    'title_as_link' => 0,
    'choose_pubdate' => 'ppubdate',
    'display_original_link' => 0,
    'display_access_indicator' => 0,
    'display_access_indicator_text' => 0,
    'display_variants' => 0,
    'display_supplements' => 0,
    'display_abstract_tooltip' => 0,
    'form_build_id' => 'form-zZc-gFoxEXxN8fDKlFKnA3KUGkoe8_-9gcKcR2YW4ik',
    'form_token' => 'OhlQjF_iSMgRh5Ly0uL6bHJ42zWQ9RkIIWXwSQfQ2nw',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
    'display_markup_snippet' => '',
    'display_author_tooltip' => 1,
    'override_title_heading' => 'h2',
    'citation_settings_source' => 'corpus_config',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_page_title_complete',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'full_page_titles',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6fa837ea-975c-4a63-982a-2f64c275f9b8';
  $display->content['new-6fa837ea-975c-4a63-982a-2f64c275f9b8'] = $pane;
  $display->panels['top'][0] = 'new-6fa837ea-975c-4a63-982a-2f64c275f9b8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Adjuncts',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Adjunct Article',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_highwire_adjunct_subject-node-node',
        'delta' => '0',
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
              'highwire_adjunct' => 'highwire_adjunct',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'sidebar_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Supplement to %node_2:title';
  $display->uuid = 'f901c611-c5e7-4f89-a3c6-94eb0be19707';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8449dcf1-0430-4b5f-bf64-23159a4cc9b0';
  $pane->panel = 'content';
  $pane->type = 'highwire_markup';
  $pane->subtype = 'highwire_markup';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'index',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 0,
          'referer_first_click_referers' => '',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'variant' => 'index',
    'process' => array(
      'highwire_article_glossary_popup' => 0,
      'highwire_article_reference_popup' => 0,
      'highwire_arxiv_url' => 0,
      'highwire_at_symbol' => 0,
      'highwire_author_affiliates' => 0,
      'highwire_author_affiliates_tooltip' => 0,
      'highwire_brightcove_video' => 0,
      'highwire_cc_logo' => 0,
      'highwire_collapsible_supplemental' => 0,
      'highwire_css' => 'highwire_css',
      'highwire_delete_elements' => 0,
      'highwire_disable_references' => 0,
      'highwire_doi' => 0,
      'highwire_embed' => 0,
      'highwire_extract_element' => 0,
      'highwire_figures' => 0,
      'highwire_google_scholar' => 0,
      'highwire_image_protection' => 0,
      'highwire_inline_ads' => 0,
      'highwire_inline_linked_media' => 0,
      'highwire_keywords' => 0,
      'highwire_math' => 0,
      'highwire_openurl' => 0,
      'highwire_pdf_fallback' => 0,
      'highwire_quick_nav' => 0,
      'highwire_reclass' => 'highwire_reclass',
      'highwire_remove_invalid_links' => 0,
      'highwire_socialcite_doi' => 0,
      'highwire_src_rewrites' => 'highwire_src_rewrites',
      'highwire_tables' => 0,
      'highwire_url_rewrites' => 'highwire_url_rewrites',
      'highwire_video_flowplayer' => 0,
    ),
    'variant_404' => 'not_found',
    'ac_403' => 'access_denied',
    'variant_custom_text' => '',
    'variant_url' => '',
    'ac_custom_text' => '',
    'ac_url' => '',
    'disable_logging' => 0,
    'lock_variant' => 0,
    'disable_ac' => 0,
    'process_settings' => array(
      'highwire_author_affiliates_tooltip' => array(
        'search-url' => '/search',
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
      'highwire_collapsible_supplemental' => array(
        'title_expand' => 'Expand view',
        'title_expand_icon' => 'icon-plus',
        'title_collapse' => 'Collapse view',
        'title_collapse_icon' => 'icon-minus',
        'title_subtitle' => 0,
        'expand_all' => 1,
        'title_all' => 'Expand all view',
      ),
      'highwire_delete_elements' => array(
        'xpath' => '',
        'selector' => '',
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
      'highwire_doi' => array(
        'patterns' => '',
      ),
      'highwire_extract_element' => array(
        'xpath' => '',
      ),
      'highwire_figures' => array(
        'image_size' => 'medium',
        'click_image' => 'colorbox',
        'hide_caption' => 0,
        'exclude_protected' => 0,
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
          'include_on_behalf' => 1,
          'display_foxycart_add_to_cart' => 0,
          'show_mark_citation' => 0,
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
              'selector' => 0,
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
              'include_on_behalf' => 0,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
                'include_on_behalf' => 1,
                'display_foxycart_add_to_cart' => 0,
                'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
                'include_on_behalf' => 0,
                'display_foxycart_add_to_cart' => 0,
                'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
          'include_on_behalf' => 1,
          'display_foxycart_add_to_cart' => 0,
          'show_mark_citation' => 0,
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
              'selector' => 0,
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
              'include_on_behalf' => 0,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
                'include_on_behalf' => 1,
                'display_foxycart_add_to_cart' => 0,
                'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
                'include_on_behalf' => 0,
                'display_foxycart_add_to_cart' => 0,
                'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
              'include_on_behalf' => 1,
              'display_foxycart_add_to_cart' => 0,
              'show_mark_citation' => 0,
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
          'foxycart_add_to_cart' => 0,
          'foxycart_add_to_cart_text' => '',
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
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'bypass_stamper' => 'global',
    'referer_first_click_referers' => '',
    'referer_first_click' => 0,
    'variant_language' => '0',
    'google_abstract_link' => 0,
    'google_abstract_link_title' => 'View Abstract',
    'google_fulltext_link_title' => 'View Full Text',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'border-top-hairline',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8449dcf1-0430-4b5f-bf64-23159a4cc9b0';
  $display->content['new-8449dcf1-0430-4b5f-bf64-23159a4cc9b0'] = $pane;
  $display->panels['content'][0] = 'new-8449dcf1-0430-4b5f-bf64-23159a4cc9b0';
  $pane = new stdClass();
  $pane->pid = 'new-1222d6ea-67af-4fcf-93de-1e35ee52d355';
  $pane->panel = 'content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'jnl_isa_login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'highwire_ac',
        'settings' => array(
          'variant' => 'index',
          'log_ac_denied' => 0,
          'log_ac_granted' => 0,
          'referer_first_click' => 0,
          'referer_first_click_referers' => '',
        ),
        'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1222d6ea-67af-4fcf-93de-1e35ee52d355';
  $display->content['new-1222d6ea-67af-4fcf-93de-1e35ee52d355'] = $pane;
  $display->panels['content'][1] = 'new-1222d6ea-67af-4fcf-93de-1e35ee52d355';
  $pane = new stdClass();
  $pane->pid = 'new-847c94f9-7230-48a0-a320-cfb56cd9270e';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'link to adjunct subject',
    'title' => '',
    'body' => '<p><a href="%node_2:url"><i class="icon-arrow-left">&nbsp;</i> View article</a></p>
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '847c94f9-7230-48a0-a320-cfb56cd9270e';
  $display->content['new-847c94f9-7230-48a0-a320-cfb56cd9270e'] = $pane;
  $display->panels['content'][2] = 'new-847c94f9-7230-48a0-a320-cfb56cd9270e';
  $pane = new stdClass();
  $pane->pid = 'new-51b9ad77-eb41-42db-a35e-97b0a75f6095';
  $pane->panel = 'top';
  $pane->type = 'highwire_article_citation';
  $pane->subtype = 'highwire_article_citation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => 'relationship_entity_from_field:field_highwire_adjunct_subject-node-node_1',
    'aligner_start' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'citation_settings_source' => 'corpus_config',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_page_title_complete',
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
    ),
    'form_build_id' => 'form-E0PJ3iRb3wee5wMHiJTFs9mqlY3W8nH81SGnKeikRmI',
    'form_token' => 'OhlQjF_iSMgRh5Ly0uL6bHJ42zWQ9RkIIWXwSQfQ2nw',
    'form_id' => 'highwire_highwire_article_citation_content_type_edit_form',
    'pubdate_format_type' => '',
    'pubdate_format_custom' => '',
    'highlight_image_toggle' => 0,
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
  $pane->uuid = '51b9ad77-eb41-42db-a35e-97b0a75f6095';
  $display->content['new-51b9ad77-eb41-42db-a35e-97b0a75f6095'] = $pane;
  $display->panels['top'][0] = 'new-51b9ad77-eb41-42db-a35e-97b0a75f6095';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'eLetter/Highwire Comment Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'highwire_comment' => 'highwire_comment',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c52c6d14-8761-4807-babb-0582dbce002b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-07fbac26-c1d2-4c30-b9bf-ac6343239fc8';
  $pane->panel = 'content';
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
    'citation_settings_source' => 'custom',
    'citation_manager_wrapper' => array(
      'citation_manager_citation' => 'jcore_apa',
    ),
    'corpus_config_wrapper' => array(
      'corpus_config_citation_context' => 'toc',
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
      'highwire_comment' => array(
        'selector' => 1,
        'citation_style' => 'highwire_comments_node_view',
        'show_title' => 0,
        'title_as_link' => 0,
        'title_as_link_type' => 'tab_view',
        'author_format_type' => 'fullname',
        'author_format_custom' => '',
        'author_list_separator' => ', ',
        'date_format' => 'j F Y',
        'display_comment_body' => 1,
        'display_attachment' => 0,
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
    ),
    'form_build_id' => 'form-0rOXSt8WERhrFu2tu1K9Su-jv1CccQmeENfbNKyazSQ',
    'form_token' => 'nHx5JH4n9BFXckbDHqzoCdSXTi-kB0qq4u8anSMF2Fc',
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
  $pane->uuid = '07fbac26-c1d2-4c30-b9bf-ac6343239fc8';
  $display->content['new-07fbac26-c1d2-4c30-b9bf-ac6343239fc8'] = $pane;
  $display->panels['content'][0] = 'new-07fbac26-c1d2-4c30-b9bf-ac6343239fc8';
  $pane = new stdClass();
  $pane->pid = 'new-b8a305ee-2954-4c7d-b7b7-e9cdab449272';
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
  $pane->uuid = 'b8a305ee-2954-4c7d-b7b7-e9cdab449272';
  $display->content['new-b8a305ee-2954-4c7d-b7b7-e9cdab449272'] = $pane;
  $display->panels['top'][0] = 'new-b8a305ee-2954-4c7d-b7b7-e9cdab449272';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function jnl_isa_entity_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'isa_articles_from_section';
  $page->task = 'page';
  $page->admin_title = 'isa Articles From Section';
  $page->admin_description = '';
  $page->path = 'content/by/section/!toc';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'toc' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_isa_articles_from_section_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'isa_articles_from_section';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'isa Article From Section',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
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
  $display->title = 'More articles from %toc:html_safe';
  $display->uuid = 'cdb67b15-7456-4634-bc3e-b2577e9cc8ee';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_isa_articles_from_section_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6d92ae2a-804f-4f88-9ebc-883d68726915';
  $pane->panel = 'content';
  $pane->type = 'highwire_articles_in_toc';
  $pane->subtype = 'highwire_articles_in_toc';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'context' => array(
      0 => 'empty',
      1 => 'empty',
      2 => 'argument_string_1',
    ),
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => '',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'toc_section' => '',
    'article_citation' => array(
      'citation_settings_source' => 'corpus_config',
      'citation_manager_wrapper' => array(
        'citation_manager_citation' => 'jcore_list_full',
      ),
      'corpus_config_wrapper' => array(
        'corpus_config_citation_context' => 'full_browse',
      ),
      'citation_style' => 'jcore_standard',
      'cache_enabled' => 1,
      'cache_time' => '600',
      'title_type' => 'full',
      'short_title_options' => array(
        'char_count' => '50',
        'add_ellipsis' => 0,
      ),
      'title_as_link' => 1,
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
    ),
    'pager_settings' => array(
      'show_more' => 0,
      'show_more_text' => 'Show more [toc_section_plural]',
      'show_more_link' => '',
      'limit' => '',
      'display_pager' => 1,
      'items_per_page' => '10',
    ),
    'form_build_id' => 'form-SNh7qrvT0EbvvdW6gTGum-8wbGhEkBV0vqtsOQtvidQ',
    'form_token' => '6v3t6UjpRsYZ9_h7VWcIuI136oLris4xFwFR7uiDcEQ',
    'form_id' => 'highwire_articles_in_toc_content_type_edit_form',
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
  $pane->uuid = '6d92ae2a-804f-4f88-9ebc-883d68726915';
  $display->content['new-6d92ae2a-804f-4f88-9ebc-883d68726915'] = $pane;
  $display->panels['content'][0] = 'new-6d92ae2a-804f-4f88-9ebc-883d68726915';
  $pane = new stdClass();
  $pane->pid = 'new-9e90c544-d32d-4a14-b00f-aa55d2f39ecf';
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
  $pane->uuid = '9e90c544-d32d-4a14-b00f-aa55d2f39ecf';
  $display->content['new-9e90c544-d32d-4a14-b00f-aa55d2f39ecf'] = $pane;
  $display->panels['top'][0] = 'new-9e90c544-d32d-4a14-b00f-aa55d2f39ecf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6d92ae2a-804f-4f88-9ebc-883d68726915';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['isa_articles_from_section'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jnl_isa_cpc_articles';
  $page->task = 'page';
  $page->admin_title = 'isa Continuous publication articles';
  $page->admin_description = 'Continous publication component for articles.';
  $page->path = 'content/continous-publication-articles';
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
  $handler->name = 'page_jnl_isa_cpc_articles_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jnl_isa_cpc_articles';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Continus Publication Component',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = 'Continuous Publication Articles';
  $display->uuid = 'a9380b36-e3ca-4ca9-af81-0f2e226494d6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_jnl_isa_cpc_articles_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6f997b23-6ec0-4bcf-a621-4eb30cd8fabe';
  $pane->panel = 'content';
  $pane->type = 'views';
  $pane->subtype = 'jnl_isa_continous_publication_component';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
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
  $pane->uuid = '6f997b23-6ec0-4bcf-a621-4eb30cd8fabe';
  $display->content['new-6f997b23-6ec0-4bcf-a621-4eb30cd8fabe'] = $pane;
  $display->panels['content'][0] = 'new-6f997b23-6ec0-4bcf-a621-4eb30cd8fabe';
  $pane = new stdClass();
  $pane->pid = 'new-84dc90ef-2969-444a-ac7f-6d1354aefc30';
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
  $pane->uuid = '84dc90ef-2969-444a-ac7f-6d1354aefc30';
  $display->content['new-84dc90ef-2969-444a-ac7f-6d1354aefc30'] = $pane;
  $display->panels['top'][0] = 'new-84dc90ef-2969-444a-ac7f-6d1354aefc30';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jnl_isa_cpc_articles'] = $page;

  return $pages;

}
