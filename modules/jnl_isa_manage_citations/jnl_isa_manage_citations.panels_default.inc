<?php
/**
 * @file
 * jnl_isa_manage_citations.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function jnl_isa_manage_citations_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_cit_email';
  $mini->category = 'Citation toolbox';
  $mini->admin_title = 'Citation Download Toolbox: Email';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Highwire Saved Citation Context',
      'keyword' => 'highwire_saved_citation_object_context',
      'name' => 'highwire_saved_citation',
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'citations_email';
    $pane->subtype = 'citations_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'requiredcontext_highwire_saved_citation_1',
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
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_cit_email'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_cit_print';
  $mini->category = 'Citation toolbox';
  $mini->admin_title = 'Citation Download Toolbox: Print';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Highwire Saved Citation Context',
      'keyword' => 'highwire_saved_citation_object_context',
      'name' => 'highwire_saved_citation',
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'citations_print';
    $pane->subtype = 'citations_print';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'requiredcontext_highwire_saved_citation_1',
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
    $display->content['new-2'] = $pane;
    $display->panels['middle'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_cit_print'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_cit_toolb';
  $mini->category = 'Citation toolbox';
  $mini->admin_title = 'isa Citation Download toolbox';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Highwire Saved Citation Context',
      'keyword' => 'highwire_saved_citation_object_context',
      'name' => 'highwire_saved_citation',
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'minipanel_dialog_link';
    $pane->subtype = 'jnl_isa_mult_exrt';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'link_title' => 'Download to Citation Manager',
      'link_icon' => 'icon-download-alt',
      'modal_window_title' => 'Exporting citations',
      'modal_window_fallback_url' => '',
      'modal_window_width' => '560',
      'modal_window_trigger' => 'download-to-citation-dialog-link-trigger',
      'context' => array(
        0 => 'requiredcontext_highwire_saved_citation_1',
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
    $display->content['new-3'] = $pane;
    $display->panels['middle'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'minipanel_dialog_link';
    $pane->subtype = 'jnl_isa_save_copy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'link_title' => 'Save a copy',
      'link_icon' => 'icon-download',
      'modal_window_title' => 'Save a copy',
      'modal_window_fallback_url' => '',
      'modal_window_width' => '560',
      'modal_window_trigger' => 'save-as-copy-citation-dialog-link-trigger',
      'context' => array(
        0 => 'requiredcontext_highwire_saved_citation_1',
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
    $display->content['new-4'] = $pane;
    $display->panels['middle'][1] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'middle';
    $pane->type = 'minipanel_dialog_link';
    $pane->subtype = 'jnl_isa_cit_print';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'link_title' => 'Print',
      'link_icon' => 'icon-print',
      'modal_window_title' => 'Print',
      'modal_window_fallback_url' => '',
      'modal_window_width' => '560',
      'modal_window_trigger' => 'print-citation-dialog-link-trigger',
      'context' => array(
        0 => 'requiredcontext_highwire_saved_citation_1',
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
    $display->content['new-5'] = $pane;
    $display->panels['middle'][2] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'middle';
    $pane->type = 'minipanel_dialog_link';
    $pane->subtype = 'jnl_isa_cit_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'link_title' => 'Email',
      'link_icon' => 'icon-envelope',
      'modal_window_title' => 'Email Citations',
      'modal_window_fallback_url' => '',
      'modal_window_width' => '560',
      'modal_window_trigger' => 'email-citation-dialog-link-trigger',
      'context' => array(
        0 => 'requiredcontext_highwire_saved_citation_1',
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
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['middle'][3] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_cit_toolb'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_mult_exrt';
  $mini->category = 'Citation toolbox';
  $mini->admin_title = 'Citation Download Toolbox: Multi export citations';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Highwire Saved Citation Context',
      'keyword' => 'highwire_saved_citation_object_context',
      'name' => 'highwire_saved_citation',
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'middle';
    $pane->type = 'highwire_citation_multi_export';
    $pane->subtype = 'highwire_citation_multi_export';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
        1 => 'requiredcontext_highwire_saved_citation_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'citation_formats_list' => array(
        'bibtext' => 'bibtext',
        'bookends' => 'bookends',
        'easybib' => 'easybib',
        'endnote-tagged' => 'endnote-tagged',
        'endnote-8-xml' => 'endnote-8-xml',
        'medlars' => 'medlars',
        'mendeley' => 'mendeley',
        'papers' => 'papers',
        'refworks-tagged' => 'refworks-tagged',
        'reference-manager' => 'reference-manager',
        'ris' => 'ris',
        'zotero' => 'zotero',
      ),
      'citation_formats_description' => 'You have selected <span class = "hw-selection-count">!count</span> citations to be exported. Please select format:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['middle'][0] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7';
  $mini->display = $display;
  $export['jnl_isa_mult_exrt'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jnl_isa_save_copy';
  $mini->category = 'Citation toolbox';
  $mini->admin_title = 'Citation Download Toolbox: Save a copy';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Highwire Saved Citation Context',
      'keyword' => 'highwire_saved_citation_object_context',
      'name' => 'highwire_saved_citation',
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'middle';
    $pane->type = 'save_a_copy';
    $pane->subtype = 'save_a_copy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'requiredcontext_highwire_saved_citation_1',
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
    $display->content['new-8'] = $pane;
    $display->panels['middle'][0] = 'new-8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_save_copy'] = $mini;

  return $export;
}
