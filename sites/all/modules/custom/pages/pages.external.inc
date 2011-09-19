<?php
// $Id$

/**
 * @file
 * Admin page callback for the scaffolding module.
 */

/**
 * Builds and returns the scaffolding settings form.
 */
function pages_external() {
  return array(
    'content' => array(
      '#type' => 'markup',
      '#markup' => '<p>The function that generates this page is in pages.external.inc.</p>',
    ),
  );
}