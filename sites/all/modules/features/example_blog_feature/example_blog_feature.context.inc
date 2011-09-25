<?php
/**
 * @file
 * example_blog_feature.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function example_blog_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = 'All blog-related pages.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
        'blog/*' => 'blog/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-about_the_blog' => array(
          'module' => 'boxes',
          'delta' => 'about_the_blog',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('All blog-related pages.');
  $export['blog'] = $context;

  return $export;
}
