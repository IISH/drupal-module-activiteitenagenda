<?php
/**
 * @file
 * iishagenda_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iishagenda_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accomodation|node|event|default';
  $field_group->group_name = 'group_accomodation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accommodatie',
    'weight' => '4',
    'children' => array(
      0 => 'field_room',
      1 => 'field_people',
      2 => 'field_note',
      3 => 'field_event_room',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Accommodatie',
      'instance_settings' => array(
        'classes' => 'group-accomodation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_accomodation|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accomodation|node|event|form';
  $field_group->group_name = 'group_accomodation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accommodatie',
    'weight' => '5',
    'children' => array(
      0 => 'field_event_date',
      1 => 'field_event_room',
      2 => 'field_note',
      3 => 'field_people',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Accommodatie',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-accomodation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_accomodation|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|node|event|default';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beheer',
    'weight' => '0',
    'children' => array(
      0 => 'field_approved',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Beheer',
      'instance_settings' => array(
        'classes' => 'group-admin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_admin|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|node|event|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beheer',
    'weight' => '0',
    'children' => array(
      0 => 'field_approved',
      1 => 'field_canceled',
      2 => 'group_organiser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Beheer',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-admin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_admin|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catering|node|event|default';
  $field_group->group_name = 'group_catering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catering',
    'weight' => '5',
    'children' => array(
      0 => 'field_catering',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Catering',
      'instance_settings' => array(
        'classes' => 'group-catering field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_catering|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catering|node|event|form';
  $field_group->group_name = 'group_catering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catering',
    'weight' => '6',
    'children' => array(
      0 => 'field_catering',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Catering',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-catering field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_catering|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|event|default';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Algemeen',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_event_date',
      2 => 'field_expense',
      3 => 'field_type_activity',
      4 => 'field_special',
      5 => 'field_internal_external',
      6 => 'field_attachment',
      7 => 'field_reference_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Algemeen',
      'instance_settings' => array(
        'classes' => 'group-general field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_general|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|event|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Algemeen',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_attachment',
      2 => 'field_expense',
      3 => 'field_internal_external',
      4 => 'field_reference_number',
      5 => 'field_special',
      6 => 'field_type_activity',
      7 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Algemeen',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_general|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organiser|node|event|default';
  $field_group->group_name = 'group_organiser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisator',
    'weight' => '3',
    'children' => array(
      0 => 'field_contact_person',
      1 => 'field_phone',
      2 => 'field_email',
      3 => 'field_existing_user',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organisator',
      'instance_settings' => array(
        'classes' => 'group-organiser field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organiser|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organiser|node|event|form';
  $field_group->group_name = 'group_organiser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin';
  $field_group->data = array(
    'label' => 'Organiser',
    'weight' => '3',
    'children' => array(
      0 => 'field_contact_person',
      1 => 'field_email',
      2 => 'field_existing_user',
      3 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organiser',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-organiser field-group-fieldset',
        'description' => 'Gebruik onderstaande velden om voor een bestaande gebruiker of voor een extern persoon een reservering te maken.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organiser|node|event|form'] = $field_group;

  return $export;
}
