<?php
/**
 * @file
 * jnl_isa_direct_publishing.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function jnl_isa_direct_publishing_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_dp_alert';
  $mini->category = 'HW Direct Publishing';
  $mini->admin_title = 'jnl_isa_dp_alert';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'news_edit_form';
    $pane->subtype = 'news_edit_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:highwire_news_story:field_highwire_news_story_type',
          'settings' => array(
            'field_highwire_news_story_type' => array(
              'und' => array(
                0 => array(
                  'value' => 'news',
                  'format' => '',
                ),
              ),
            ),
            'field_highwire_news_story_type_value' => array(
              0 => 'news',
            ),
            'field_highwire_news_story_type_format' => array(
              0 => '',
            ),
          ),
          'context' => 'requiredcontext_entity:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'news_heading' => 'Alert me via email when news content is published',
      'news_checkbox' => 'Check the box to sign up for News alerts',
      'news_display_name' => 'News',
      'enabled_alerts_panel' => array(
        'news' => 'news',
      ),
      'enabled_alerts' => array(
        0 => 'news',
      ),
      'site_code' => '',
      'context' => 'context_highwire_alerts_user_1',
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
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'blog_edit_form';
    $pane->subtype = 'blog_edit_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:highwire_news_story:field_highwire_news_story_type',
          'settings' => array(
            'field_highwire_news_story_type' => array(
              'und' => array(
                0 => array(
                  'value' => 'blog',
                  'format' => '',
                ),
              ),
            ),
            'field_highwire_news_story_type_value' => array(
              0 => 'blog',
            ),
            'field_highwire_news_story_type_format' => array(
              0 => '',
            ),
          ),
          'context' => 'requiredcontext_entity:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'blog_heading' => 'Alert me via email when blog content is published',
      'blog_checkbox' => 'Check the box to sign up for blog alerts',
      'blog_display_name' => 'Blog',
      'enabled_alerts_panel' => array(
        'blog' => 'blog',
      ),
      'enabled_alerts' => array(
        0 => 'blog',
      ),
      'site_code' => '',
      'context' => 'context_highwire_alerts_user_1',
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
    $display->panels['middle'][1] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_dp_alert'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_dp_tabs';
  $mini->category = 'HW Direct Publishing';
  $mini->admin_title = 'Highwire Direct Publishing Recent Content Tabs';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'panels_ajax_tab_tabs';
    $pane->subtype = 'panels_ajax_tab_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mini_panels' => array(
        'responsive_menu_main_menu' => array(
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
        'jnl_isa_alert' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_rec_blog' => array(
          'selected' => 1,
          'tab_title' => 'Blog',
          'url_id' => 'recent-blog',
          'weight' => '-10',
        ),
        'jnl_isa_inst_brand' => array(
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
        'jnl_isa_home_list' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_home_dp' => array(
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
        'jnl_isa_mc_read' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_dp_tabs' => array(
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
        'responsive_menu_article_nav' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'jnl_isa_rec_news' => array(
          'selected' => 1,
          'tab_title' => 'News',
          'url_id' => 'recent-news',
          'weight' => '-10',
        ),
        'responsive_menu' => array(
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
        'jnl_isa_save_copy' => array(
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
        'jnl_isa_mult_exrt' => array(
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
        'jnl_isa_tab_art' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-9',
        ),
        'jnl_isa_search_box' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-7',
        ),
        'jnl_isa_uid_strng' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-6',
        ),
        'jnl_isa_challenge' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-5',
        ),
        'jnl_isa_login' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-4',
        ),
        'jnl_isa_accordion' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-3',
        ),
        'jnl_isa_art_alert' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-2',
        ),
        'jnl_isa_art_email' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-1',
        ),
        'jnl_isa_art_info' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '0',
        ),
        'jnl_isa_art_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '1',
        ),
        'jnl_isa_art_tools' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '2',
        ),
        'jnl_isa_cite_apa' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '3',
        ),
        'jnl_isa_cite_chi' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '4',
        ),
        'jnl_isa_cite_en' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '5',
        ),
        'jnl_isa_cite_mla' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '6',
        ),
        'jnl_isa_cite_tool' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '7',
        ),
        'jnl_isa_top_topics' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '8',
        ),
        'jnl_isa_cite_view' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '8',
        ),
        'jnl_isa_iss_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '9',
        ),
        'jnl_isa_most_cited' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '9',
        ),
        'jnl_isa_most_read' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '10',
        ),
        'jnl_isa_arcpage' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '10',
        ),
        'jnl_isa_tab_refs' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '10',
        ),
        'jnl_isa_tab_supp' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '10',
        ),
        'jnl_isa_trans_dls' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '10',
        ),
        'jnl_isa_tab_data' => array(
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
        'jnl_isa_tab_info' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '10',
        ),
        'jnl_isa_tab_elets' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '10',
        ),
        'jnl_isa_hme_issue' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '10',
        ),
        'jnl_isa_tab_pdf' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '10',
        ),
      ),
      'container_id' => 'jnl_isa_dp_recent_content_panel',
      'url_enabled' => 0,
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'clean_url' => 0,
      'clean_url_delim' => '.',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['middle'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'panels_ajax_tab_container';
    $pane->subtype = 'panels_ajax_tab_container';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'container_id' => 'jnl_isa_dp_recent_content_panel',
      'context' => array(
        0 => 'empty',
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
    $display->content['new-4'] = $pane;
    $display->panels['middle'][1] = 'new-4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_dp_tabs'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_dp_tools';
  $mini->category = 'HW Direct Publishing';
  $mini->admin_title = 'Story Toolbox';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'content_left';
    $pane->type = 'highwire_variant_link';
    $pane->subtype = 'highwire_variant_link';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'variant' => 'full-text.print',
      'prelabel' => '',
      'label' => 'Print',
      'target' => '_blank',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'link_icon' => 'icon-print',
      'link_icon_position' => 'before',
      'link_classes' => '',
      'rel' => 'nofollow',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['content_left'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'content_left';
    $pane->type = 'highwire_variant_link';
    $pane->subtype = 'highwire_variant_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'variant' => 'full-text.pdf',
      'prelabel' => '',
      'label' => 'Download PDF',
      'link_icon' => 'icon-download-alt',
      'link_icon_position' => 'before',
      'link_classes' => '',
      'target' => '_blank',
      'rel' => '',
      'title_attribute' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'text-no-wrap',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['content_left'][1] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'content_left';
    $pane->type = 'minipanel_dialog_link';
    $pane->subtype = 'jnl_isa_art_email';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:highwire_news_story:field_highwire_news_story_type',
          'settings' => array(
            'field_highwire_news_story_type' => array(
              'und' => array(
                0 => array(
                  'value' => 'news',
                  'format' => '',
                ),
              ),
            ),
            'field_highwire_news_story_type_value' => array(
              0 => 'news',
            ),
            'field_highwire_news_story_type_format' => array(
              0 => '',
            ),
          ),
          'context' => 'requiredcontext_entity:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => '',
      'link_title' => 'Email News Article',
      'context' => array(
        0 => 'requiredcontext_entity:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'link_icon' => 'icon-envelope',
      'modal_window_title' => 'Email this News Article',
      'modal_window_fallback_url' => '',
      'modal_window_width' => '560',
      'modal_window_trigger' => '',
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
    $display->content['new-7'] = $pane;
    $display->panels['content_left'][2] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'content_left';
    $pane->type = 'highwire_share_link';
    $pane->subtype = 'highwire_share_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'link_title' => 'Share',
      'link_icon' => 'icon-share-alt',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'shareit',
      'css_class' => 'highwire_clipboard_link_ajax',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['content_left'][3] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'content_left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'jnl_isa_share';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'highwire_clipboard_form_ajax_shareit',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['content_left'][4] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'content_left';
    $pane->type = 'minipanel_dialog_link';
    $pane->subtype = 'jnl_isa_art_email';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:highwire_news_story:field_highwire_news_story_type',
          'settings' => array(
            'field_highwire_news_story_type' => array(
              'und' => array(
                0 => array(
                  'value' => 'blog',
                  'format' => '',
                ),
              ),
            ),
            'field_highwire_news_story_type_value' => array(
              0 => 'blog',
            ),
            'field_highwire_news_story_type_format' => array(
              0 => '',
            ),
          ),
          'context' => 'requiredcontext_entity:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => '',
      'link_title' => 'Email Blog Post',
      'link_icon' => 'icon-envelope',
      'modal_window_title' => 'Email this Blog Post',
      'modal_window_fallback_url' => '',
      'modal_window_width' => '560',
      'modal_window_trigger' => '',
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
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['content_left'][5] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'content_left';
    $pane->type = 'minipanel_dialog_link';
    $pane->subtype = 'jnl_isa_dp_alert';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:highwire_news_story:field_highwire_news_story_type',
          'settings' => array(
            'field_highwire_news_story_type' => array(
              'und' => array(
                0 => array(
                  'value' => 'news',
                  'format' => '',
                ),
              ),
            ),
            'field_highwire_news_story_type_value' => array(
              0 => 'news',
            ),
            'field_highwire_news_story_type_format' => array(
              0 => '',
            ),
          ),
          'context' => 'requiredcontext_entity:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => '',
      'link_title' => 'News Alerts',
      'link_icon' => 'icon-exclamation-sign',
      'modal_window_title' => 'Sign Up for News Alerts',
      'modal_window_fallback_url' => '',
      'modal_window_width' => '560',
      'modal_window_trigger' => '',
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
    $display->content['new-11'] = $pane;
    $display->panels['content_left'][6] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'content_left';
    $pane->type = 'minipanel_dialog_link';
    $pane->subtype = 'jnl_isa_dp_alert';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:highwire_news_story:field_highwire_news_story_type',
          'settings' => array(
            'field_highwire_news_story_type' => array(
              'und' => array(
                0 => array(
                  'value' => 'blog',
                  'format' => '',
                ),
              ),
            ),
            'field_highwire_news_story_type_value' => array(
              0 => 'blog',
            ),
            'field_highwire_news_story_type_format' => array(
              0 => '',
            ),
          ),
          'context' => 'requiredcontext_entity:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => '',
      'link_title' => 'Blog Alerts',
      'link_icon' => 'icon-exclamation-sign',
      'modal_window_title' => 'Sign Up for Blog Alerts',
      'modal_window_fallback_url' => '',
      'modal_window_width' => '560',
      'modal_window_trigger' => '',
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
    $pane->position = 7;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['content_left'][7] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'content_right';
    $pane->type = 'service_links';
    $pane->subtype = 'service_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'service_links_style' => 'service_links',
      'service_links_block_style' => '3',
      'forward' => 0,
      'delicious' => 0,
      'digg' => 0,
      'twitter' => 0,
      'reddit' => 0,
      'facebook' => 0,
      'google' => 0,
      'citeulike' => 0,
      'mendeley' => 0,
      'twitter_widget' => 1,
      'facebook_like' => 1,
      'google_plus_one' => 1,
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
    $display->content['new-13'] = $pane;
    $display->panels['content_right'][0] = 'new-13';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_dp_tools'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_home_dp';
  $mini->category = 'Home Page';
  $mini->admin_title = 'Homepage - Direct Publishing widgets';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
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
    'style' => 'naked',
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'jnl_isa_dp_featured_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Featured News',
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
    $display->content['new-14'] = $pane;
    $display->panels['middle'][0] = 'new-14';
    $pane = new stdClass();
    $pane->pid = 'new-15';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'jnl_isa_dp_tabs';
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
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-15'] = $pane;
    $display->panels['middle'][1] = 'new-15';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-14';
  $mini->display = $display;
  $export['jnl_isa_home_dp'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_rec_blog';
  $mini->category = 'Home tabs';
  $mini->admin_title = 'Recent Blogs';
  $mini->admin_description = 'Minipanel to hold the "Recent Blog Posts"';
  $mini->requiredcontexts = array();
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
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '14400',
      'granularity' => 'none',
    ),
  );
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'jnl_isa_dp_recent_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-16'] = $pane;
    $display->panels['middle'][0] = 'new-16';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_rec_blog'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_rec_news';
  $mini->category = 'Home tabs';
  $mini->admin_title = 'Recent News';
  $mini->admin_description = 'Minipanel to hold the "Recent News"';
  $mini->requiredcontexts = array();
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
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '14400',
      'granularity' => 'none',
    ),
  );
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'jnl_isa_dp_recent_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-17'] = $pane;
    $display->panels['middle'][0] = 'new-17';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_rec_news'] = $mini;

  return $export;
}
