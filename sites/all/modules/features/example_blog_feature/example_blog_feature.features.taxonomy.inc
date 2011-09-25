<?php
/**
 * @file
 * example_blog_feature.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function example_blog_feature_taxonomy_default_vocabularies() {
  return array(
    'blog_categories' => array(
      'name' => 'Blog categories',
      'machine_name' => 'blog_categories',
      'description' => 'Used for blog entries only.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
