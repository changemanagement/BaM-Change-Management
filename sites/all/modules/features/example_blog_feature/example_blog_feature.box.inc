<?php
/**
 * @file
 * example_blog_feature.box.inc
 */

/**
 * Implementation of hook_default_box().
 */
function example_blog_feature_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'about_the_blog';
  $box->plugin_key = 'simple';
  $box->title = 'About Our Blog';
  $box->description = 'About the blog';
  $box->options = array(
    'body' => array(
      'value' => 'This is some information about our blog. It will be pretty amazing someday. Just watch.',
      'format' => 'blog_format',
    ),
  );
  $export['about_the_blog'] = $box;

  return $export;
}
