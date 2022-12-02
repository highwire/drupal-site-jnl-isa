<?php
/**
 * @file
 * jnl_isa.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jnl_isa_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_page_url';
  $strongarm->value = TRUE;
  $export['advanced_page_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_page_url_alias';
  $strongarm->value = 'page/';
  $export['advanced_page_url_alias'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highwire_metatags';
  $strongarm->value = 'enabled_description';
  $export['highwire_metatags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hw_ac_enable_referer_based_access';
  $strongarm->value = 1;
  $export['hw_ac_enable_referer_based_access'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_highwire_adjunct_pattern';
  $strongarm->value = '[node:field_highwire_a_cpath]';
  $export['pathauto_node_highwire_adjunct_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_highwire_article_pattern';
  $strongarm->value = '[node:field_highwire_a_cpath]';
  $export['pathauto_node_highwire_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_highwire_fragment_pattern';
  $strongarm->value = '[node:field_highwire_a_cpath]';
  $export['pathauto_node_highwire_fragment_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_highwire_issue_pattern';
  $strongarm->value = '[node:field_highwire_a_cpath]';
  $export['pathauto_node_highwire_issue_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_highwire_journal_pattern';
  $strongarm->value = '[node:field_highwire_a_cpath]';
  $export['pathauto_node_highwire_journal_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_highwire_volume_pattern';
  $strongarm->value = '[node:field_highwire_a_cpath]';
  $export['pathauto_node_highwire_volume_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_highwire_article_categories_pattern';
  $strongarm->value = 'category/[term:name]';
  $export['pathauto_taxonomy_term_highwire_article_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_highwire_article_keywords_pattern';
  $strongarm->value = 'keyword/[term:name]';
  $export['pathauto_taxonomy_term_highwire_article_keywords_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_highwire_collection_pattern';
  $strongarm->value = '[term:field_highwire_a_alias]';
  $export['pathauto_taxonomy_term_highwire_collection_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_highwire_fragment_keywords_pattern';
  $strongarm->value = 'image-gallery/[term:name]';
  $export['pathauto_taxonomy_term_highwire_fragment_keywords_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_highwire_import_category_pattern';
  $strongarm->value = 'highwire/import/[term:name]';
  $export['pathauto_taxonomy_term_highwire_import_category_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'referer_access_source_list';
  $strongarm->value = 'google.com
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
google.com.mm';
  $export['referer_access_source_list'] = $strongarm;

  return $export;
}
