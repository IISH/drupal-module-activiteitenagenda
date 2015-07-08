(function ($, Drupal, window, document, undefined) {

    jQuery(document).ready(function($) {
        clear_rooms();
        /*
         * Hide enddate but update when startdate changes
         */
        $('.form-item-field-event-date-und-0-value2-date').css("display","none");
        $("label[for='edit-field-event-date-und-0-value2']").html("tot");

        $('#edit-field-event-date-und-0-value-datepicker-popup-0').change(function() {
            $("#edit-field-event-date-und-0-value2-datepicker-popup-0").val($("#edit-field-event-date-und-0-value-datepicker-popup-0").val());
            clear_rooms();
        });

        $('#edit-field-event-date-und-0-value-timeEntry-popup-1').change(clear_rooms);
        $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').change(clear_rooms);

        function clear_rooms(){
            $('.field-name-field-room .form-checkboxes').html("klik op 'Controleer beschikbaarheid' voor beschikbare zalen.");
        }
    });

})(jQuery, Drupal, this, this.document);