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
  $display->uuid = '93e8d593-8591-4b08-a67f-4eac3b6eaee0';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_dp_alert';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-77fa9445-ba59-4a0b-bbe8-4b45c4324419';
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
  $pane->uuid = '77fa9445-ba59-4a0b-bbe8-4b45c4324419';
  $display->content['new-77fa9445-ba59-4a0b-bbe8-4b45c4324419'] = $pane;
  $display->panels['middle'][0] = 'new-77fa9445-ba59-4a0b-bbe8-4b45c4324419';
  $pane = new stdClass();
  $pane->pid = 'new-5defe68c-4d51-4fee-981d-697bae187620';
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
  $pane->uuid = '5defe68c-4d51-4fee-981d-697bae187620';
  $display->content['new-5defe68c-4d51-4fee-981d-697bae187620'] = $pane;
  $display->panels['middle'][1] = 'new-5defe68c-4d51-4fee-981d-697bae187620';
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
  $display->uuid = 'c2fd5862-1edd-4394-a3c1-1e47e8fed038';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_dp_tabs';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7d898f84-e16b-4a24-b461-57ae92bb68e8';
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
  $pane->uuid = '7d898f84-e16b-4a24-b461-57ae92bb68e8';
  $display->content['new-7d898f84-e16b-4a24-b461-57ae92bb68e8'] = $pane;
  $display->panels['middle'][0] = 'new-7d898f84-e16b-4a24-b461-57ae92bb68e8';
  $pane = new stdClass();
  $pane->pid = 'new-4cc32822-8b6b-49f0-8d97-7bee11b1b37b';
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
  $pane->uuid = '4cc32822-8b6b-49f0-8d97-7bee11b1b37b';
  $display->content['new-4cc32822-8b6b-49f0-8d97-7bee11b1b37b'] = $pane;
  $display->panels['middle'][1] = 'new-4cc32822-8b6b-49f0-8d97-7bee11b1b37b';
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
  $display->uuid = '11ab995f-7223-4bbd-83cd-ce3e2300ec4d';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_dp_tools';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f8800ea2-5f06-4235-ba77-01efffc4b095';
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
  $pane->uuid = 'f8800ea2-5f06-4235-ba77-01efffc4b095';
  $display->content['new-f8800ea2-5f06-4235-ba77-01efffc4b095'] = $pane;
  $display->panels['content_left'][0] = 'new-f8800ea2-5f06-4235-ba77-01efffc4b095';
  $pane = new stdClass();
  $pane->pid = 'new-d626a5f2-1115-4128-be7e-4d0982851d9b';
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
  $pane->uuid = 'd626a5f2-1115-4128-be7e-4d0982851d9b';
  $display->content['new-d626a5f2-1115-4128-be7e-4d0982851d9b'] = $pane;
  $display->panels['content_left'][1] = 'new-d626a5f2-1115-4128-be7e-4d0982851d9b';
  $pane = new stdClass();
  $pane->pid = 'new-0092e1b3-0712-4a9f-9e84-22e7db6d160a';
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
  $pane->uuid = '0092e1b3-0712-4a9f-9e84-22e7db6d160a';
  $display->content['new-0092e1b3-0712-4a9f-9e84-22e7db6d160a'] = $pane;
  $display->panels['content_left'][2] = 'new-0092e1b3-0712-4a9f-9e84-22e7db6d160a';
  $pane = new stdClass();
  $pane->pid = 'new-2ddbea4b-769d-4b02-b17c-f1050ba9bac1';
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
  $pane->uuid = '2ddbea4b-769d-4b02-b17c-f1050ba9bac1';
  $display->content['new-2ddbea4b-769d-4b02-b17c-f1050ba9bac1'] = $pane;
  $display->panels['content_left'][3] = 'new-2ddbea4b-769d-4b02-b17c-f1050ba9bac1';
  $pane = new stdClass();
  $pane->pid = 'new-e94247be-a571-4287-8133-a8c8272e15d4';
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
  $pane->uuid = 'e94247be-a571-4287-8133-a8c8272e15d4';
  $display->content['new-e94247be-a571-4287-8133-a8c8272e15d4'] = $pane;
  $display->panels['content_left'][4] = 'new-e94247be-a571-4287-8133-a8c8272e15d4';
  $pane = new stdClass();
  $pane->pid = 'new-0d17304a-e124-4c51-8948-43721f1cf078';
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
  $pane->uuid = '0d17304a-e124-4c51-8948-43721f1cf078';
  $display->content['new-0d17304a-e124-4c51-8948-43721f1cf078'] = $pane;
  $display->panels['content_left'][5] = 'new-0d17304a-e124-4c51-8948-43721f1cf078';
  $pane = new stdClass();
  $pane->pid = 'new-0ad99d1d-92be-47c3-84f2-231cf402d310';
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
  $pane->uuid = '0ad99d1d-92be-47c3-84f2-231cf402d310';
  $display->content['new-0ad99d1d-92be-47c3-84f2-231cf402d310'] = $pane;
  $display->panels['content_left'][6] = 'new-0ad99d1d-92be-47c3-84f2-231cf402d310';
  $pane = new stdClass();
  $pane->pid = 'new-d0995630-8649-4090-8ab2-d8ef8d3d6426';
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
  $pane->uuid = 'd0995630-8649-4090-8ab2-d8ef8d3d6426';
  $display->content['new-d0995630-8649-4090-8ab2-d8ef8d3d6426'] = $pane;
  $display->panels['content_left'][7] = 'new-d0995630-8649-4090-8ab2-d8ef8d3d6426';
  $pane = new stdClass();
  $pane->pid = 'new-d5c3fb7e-07b3-460f-a415-b0fa77129c05';
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
  $pane->uuid = 'd5c3fb7e-07b3-460f-a415-b0fa77129c05';
  $display->content['new-d5c3fb7e-07b3-460f-a415-b0fa77129c05'] = $pane;
  $display->panels['content_right'][0] = 'new-d5c3fb7e-07b3-460f-a415-b0fa77129c05';
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
  $display->uuid = '7d4429c3-8f89-4020-a0fa-b1f025d650aa';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_home_dp';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-caba42ed-9396-460d-a3ce-756cfddbe85b';
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
  $pane->uuid = 'caba42ed-9396-460d-a3ce-756cfddbe85b';
  $display->content['new-caba42ed-9396-460d-a3ce-756cfddbe85b'] = $pane;
  $display->panels['middle'][0] = 'new-caba42ed-9396-460d-a3ce-756cfddbe85b';
  $pane = new stdClass();
  $pane->pid = 'new-7c957e8f-1648-4a86-b491-8d764d6c39b2';
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
  $pane->uuid = '7c957e8f-1648-4a86-b491-8d764d6c39b2';
  $display->content['new-7c957e8f-1648-4a86-b491-8d764d6c39b2'] = $pane;
  $display->panels['middle'][1] = 'new-7c957e8f-1648-4a86-b491-8d764d6c39b2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-caba42ed-9396-460d-a3ce-756cfddbe85b';
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
  $display->uuid = '75a8d866-7117-4f9f-b303-dc1810c0c32a';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_rec_blog';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-52d2206a-82e5-4634-be99-a2c00831b1ea';
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
  $pane->uuid = '52d2206a-82e5-4634-be99-a2c00831b1ea';
  $display->content['new-52d2206a-82e5-4634-be99-a2c00831b1ea'] = $pane;
  $display->panels['middle'][0] = 'new-52d2206a-82e5-4634-be99-a2c00831b1ea';
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
  $display->uuid = '2f39e2bf-1683-4492-964c-69acef7d95c5';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_rec_news';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-42450988-229e-4310-a227-a8c7c9e12e27';
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
  $pane->uuid = '42450988-229e-4310-a227-a8c7c9e12e27';
  $display->content['new-42450988-229e-4310-a227-a8c7c9e12e27'] = $pane;
  $display->panels['middle'][0] = 'new-42450988-229e-4310-a227-a8c7c9e12e27';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_rec_news'] = $mini;

  return $export;
}
