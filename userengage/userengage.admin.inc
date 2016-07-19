<?php
/**
 * Admin page
 */

function userengage_admin_form() {
  $form = array();

  $form['userengage_app_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Your Api Key:'),
    '#description' => t('Please enter your application key which has been sent to your email address. The api key is a 64 letter and number key.'),
    '#default_value' => variable_get('userengage_app_key', ''),
  );

  $form = system_settings_form($form);
  return $form;
}


