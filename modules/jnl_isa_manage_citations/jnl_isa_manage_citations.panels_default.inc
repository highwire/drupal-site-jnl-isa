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
  $display->uuid = '8cad3e91-ab80-4b40-ade7-c666795e736e';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_cit_email';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-47ab1395-8d81-4b6f-a9eb-b0b32f13a95c';
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
  $pane->uuid = '47ab1395-8d81-4b6f-a9eb-b0b32f13a95c';
  $display->content['new-47ab1395-8d81-4b6f-a9eb-b0b32f13a95c'] = $pane;
  $display->panels['middle'][0] = 'new-47ab1395-8d81-4b6f-a9eb-b0b32f13a95c';
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
  $display->uuid = '8e99433e-af33-4b6b-bea6-ac0ff43b523d';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_cit_print';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0dbf239e-2893-4340-996c-2f93d00af1b1';
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
  $pane->uuid = '0dbf239e-2893-4340-996c-2f93d00af1b1';
  $display->content['new-0dbf239e-2893-4340-996c-2f93d00af1b1'] = $pane;
  $display->panels['middle'][0] = 'new-0dbf239e-2893-4340-996c-2f93d00af1b1';
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
  $display->uuid = '4858e579-5a85-441c-9dbe-9ea2ff5230db';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_cit_toolb';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d542afdd-0f31-455a-919a-098a6d0e3154';
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
  $pane->uuid = 'd542afdd-0f31-455a-919a-098a6d0e3154';
  $display->content['new-d542afdd-0f31-455a-919a-098a6d0e3154'] = $pane;
  $display->panels['middle'][0] = 'new-d542afdd-0f31-455a-919a-098a6d0e3154';
  $pane = new stdClass();
  $pane->pid = 'new-e0069c51-719f-42f4-a9ef-3e43a94ef60f';
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
  $pane->uuid = 'e0069c51-719f-42f4-a9ef-3e43a94ef60f';
  $display->content['new-e0069c51-719f-42f4-a9ef-3e43a94ef60f'] = $pane;
  $display->panels['middle'][1] = 'new-e0069c51-719f-42f4-a9ef-3e43a94ef60f';
  $pane = new stdClass();
  $pane->pid = 'new-bb81f2b3-9ae6-46b3-a50e-dc9083015248';
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
  $pane->uuid = 'bb81f2b3-9ae6-46b3-a50e-dc9083015248';
  $display->content['new-bb81f2b3-9ae6-46b3-a50e-dc9083015248'] = $pane;
  $display->panels['middle'][2] = 'new-bb81f2b3-9ae6-46b3-a50e-dc9083015248';
  $pane = new stdClass();
  $pane->pid = 'new-0cae3df9-5e8b-4dcb-95e6-b340a904bac5';
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
  $pane->uuid = '0cae3df9-5e8b-4dcb-95e6-b340a904bac5';
  $display->content['new-0cae3df9-5e8b-4dcb-95e6-b340a904bac5'] = $pane;
  $display->panels['middle'][3] = 'new-0cae3df9-5e8b-4dcb-95e6-b340a904bac5';
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
  $display->uuid = 'b16bc18a-486a-4b03-8c8c-bc4d49dafccd';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_mult_exrt';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1389fe4d-7caa-4d4f-810a-cd0f19592a53';
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
  $pane->uuid = '1389fe4d-7caa-4d4f-810a-cd0f19592a53';
  $display->content['new-1389fe4d-7caa-4d4f-810a-cd0f19592a53'] = $pane;
  $display->panels['middle'][0] = 'new-1389fe4d-7caa-4d4f-810a-cd0f19592a53';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1389fe4d-7caa-4d4f-810a-cd0f19592a53';
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
  $display->uuid = '66bd6202-ae4b-482a-8a9b-4ea259bbc511';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'jnl_isa_save_copy';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d66fab10-dd17-46e4-bf87-7b7df023169e';
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
  $pane->uuid = 'd66fab10-dd17-46e4-bf87-7b7df023169e';
  $display->content['new-d66fab10-dd17-46e4-bf87-7b7df023169e'] = $pane;
  $display->panels['middle'][0] = 'new-d66fab10-dd17-46e4-bf87-7b7df023169e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jnl_isa_save_copy'] = $mini;

  return $export;
}
