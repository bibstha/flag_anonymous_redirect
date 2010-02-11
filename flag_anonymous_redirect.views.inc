<?php 
function flag_anonymous_redirect_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'flag_anonymous_redirect') .'/includes',
    ),
    'handlers' => array(
      'flag_anonymous_redirect_handler_field_flag_override' => array(
        'parent' => 'flag_handler_field_ops',
      ),
    ),
  );
}