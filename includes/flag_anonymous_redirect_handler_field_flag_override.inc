<?php
/**
 * @file flag_anonymous_redirect_handler_field_flag_override
 * Class handles flag display in views.
 * 
 * 
 * @author bibek
 *
 */
class flag_anonymous_redirect_handler_field_flag_override extends flag_handler_field_ops
{
  function render($values) {
    global $user;
    if ($user->uid) {
      return parent::render($values);
    }
    
    $flag = $this->get_flag();
    if (flag_anonymous_redirect_flag_enabled($flag)) {
      $flag->flag_long = 'Login to ' . $flag->flag_long;
      $content_id = $values->{$this->aliases['content_id']};
    
      return theme('flag_anonymous_redirect_flag', $flag);
    } else {
      return '';
    }
  }
}