<?php
/**
 * @file
 * jnl_isa.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jnl_isa_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "highwire_citation_manager" && $api == "default_highwire_citation_manager_citation_settings") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "highwire_corpus_config" && $api == "default_highwire_corpus_config_settings") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "snippet" && $api == "default_snippet") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function jnl_isa_image_default_styles() {
  $styles = array();

  // Exported image style: hw_citation_fragments_small.
  $styles['hw_citation_fragments_small'] = array(
    'name' => 'hw_citation_fragments_small',
    'label' => 'HW Citation: Fragments Small',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '150',
          'height' => '150',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}
