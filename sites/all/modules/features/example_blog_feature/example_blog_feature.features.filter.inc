<?php
/**
 * @file
 * example_blog_feature.features.filter.inc
 */

/**
 * Implementation of hook_filter_default_formats().
 */
function example_blog_feature_filter_default_formats() {
  $formats = array();

  // Exported format: Blog format
  $formats['blog_format'] = array(
    'format' => 'blog_format',
    'name' => 'Blog format',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
    ),
  );

  return $formats;
}
