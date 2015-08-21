(function ($, Drupal, window, document, undefined) {

    jQuery(document).ready(function($) {


        var duration = determineDuration();

        $('#edit-field-event-date-und-0-value-timeEntry-popup-1').timepicker({
            'minTime': '07:30',
            'maxTime': '23:00',
            'timeFormat': 'H:i',
            'step': 15
        });

        $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').timepicker({
            'minTime': '07:30',
            'maxTime': '23:00',
            'timeFormat': 'H:i',
            'step': 15
        });


        $('.field-name-field-catering-time input').timepicker({
            'minTime': '07:30',
            'maxTime': '23:00',
            'timeFormat': 'H:i',
            'step': 15
        });


        $('#edit-field-event-date-und-0-value-timeEntry-popup-1').change(function(){
            var endtimefield = $('#edit-field-event-date-und-0-value2-timeEntry-popup-1');
            if(endtimefield.val() == ""){
                endtimefield.val($(this).val());
            }else{
                var d = new Date();
                var theDate = d.getFullYear() + '-' + ( d.getMonth() + 1 ) + '-' + d.getDate();
                var theTime = theDate + " "+ $(this).val()+":00";
                var newTime = new Date( Date.parse( theTime ) + duration );

                endtimefield.val(pad(newTime.getHours())+":"+pad(newTime.getMinutes()));
            }
        })
        function pad( value) {
            if(value < 10) {
                return '0' + value;
            } else {
                return value;
            }
        }

        $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').change(function(){
            duration = determineDuration();
        })

        function determineDuration(){
            var starttimefield = $('#edit-field-event-date-und-0-value-timeEntry-popup-1');
            var endtimefield = $('#edit-field-event-date-und-0-value2-timeEntry-popup-1');
            if(starttimefield.val() !== ""){
                return convertToTime(endtimefield.val()) - convertToTime(starttimefield.val());
            }else{
                return 0;
            }
        }

        function convertToTime(sTime){
            var d = new Date();
            var theDate = d.getFullYear() + '-' + ( d.getMonth() + 1 ) + '-' + d.getDate();
            var theTime = theDate + " " + sTime +":00";
            var newTime = new Date( Date.parse( theTime )  );
            return newTime;
        }

        // clear rooms when none is checked (mainly for new events)
        if($('.field-name-field-event-room .form-checkbox:checked').length == 0){
            clear_rooms();
        }

        /*
         * Hide enddate but update when startdate changes
         */
        $('.form-item-field-event-date-und-0-value2-date').css("display","none");
        $("label[for='edit-field-event-date-und-0-value2']").html("tot");

        $('#edit-field-event-date-und-0-value-datepicker-popup-0').change(function() {
            $("#edit-field-event-date-und-0-value2-datepicker-popup-0").val($("#edit-field-event-date-und-0-value-datepicker-popup-0").val());
            onchange_date();
        });
        $('#edit-field-event-date-und-0-value-timeEntry-popup-1').change(onchange_date);
        $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').change(onchange_date);


        $('#edit-check').mousedown(function(){
            $('#edit-check').css("border","0px");
        });

        function onchange_date(){
            $('#edit-check').css("border","2px solid orange");
            clear_rooms();
        }

        function clear_rooms(){
            $('.field-name-field-event-room .form-checkboxes').html("klik op 'Controleer beschikbaarheid' voor beschikbare zalen.");
        }

    });

})(jQuery, Drupal, this, this.document);