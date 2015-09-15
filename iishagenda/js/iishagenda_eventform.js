(function ($, Drupal, window, document, undefined) {

    jQuery(document).ready(function($) {

        /*
         *  Set catering time pickers
         */

        setCateringTimePicker();

        Drupal.behaviors.dogmodule = {
            attach : function(context, settings) {
                setCateringTimePicker(context, settings);
            }
        };

        function setCateringTimePicker(){
            $('.field-name-field-catering-time input').timepicker({
                'minTime': '07:30',
                'maxTime': '23:00',
                'timeFormat': 'H:i',
                'step': 15
            });
        }


        /*
         *  Set event time pickers
         */

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


        var duration = determineDuration();

        $('#edit-field-event-date-und-0-value-timeEntry-popup-1').change(function(){
            var endtimefield = $('#edit-field-event-date-und-0-value2-timeEntry-popup-1');

            if(endtimefield.val() == "" || duration==0){
                endtimefield.val($(this).val());
            }else{
                var nEndtime = convertToTime($(this).val())+duration;
                var dEnddate = new Date(nEndtime*1000);
                endtimefield.val(pad(dEnddate.getHours())+":"+pad(dEnddate.getMinutes()));
            }
        })


        $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').change(function(){
            duration = determineDuration();
        })


        /*
         *   Adds zero to number below 10
         */
        function pad( value) {
            if(value < 10) {
                return '0' + value;
            } else {
                return value;
            }
        }

        /*
         *   Calculates duration in seconds between start and endtime
         */
        function determineDuration(){
            var starttimefield = $('#edit-field-event-date-und-0-value-timeEntry-popup-1');
            var endtimefield = $('#edit-field-event-date-und-0-value2-timeEntry-popup-1');

            if(starttimefield.val() !== ""){
                startTimestamp = convertToTime(starttimefield.val());
                endTimestamp =convertToTime(endtimefield.val());
                duration =  (endTimestamp-startTimestamp);
            }else{
                duration = 0;
            }
            return duration;
        }

        /*
         *   convert time 12:23 into timestamp,
         */
        function convertToTime(nTime){
            if(nTime == NaN || nTime == undefined){
                return 0;
            }else{
                var today = new Date();
                var aTime = nTime.split(":");
                var d = new Date(today.getFullYear(),today.getMonth(),today.getDate(),aTime[0],aTime[1],0);
                var nTimestamp = Math.floor(d.getTime()/1000);
                return nTimestamp;
            }
        }

        // Disable clone field, used automatically
        $("#edit-field-clone-of-und-0-target-id").prop('disabled', true);
        $("#edit-field-clone-of-und-0-target-id").addClass("input-disabled");


        var showed_changedate_msg = false;
        var current_rooms = new Array();
        $(".currentrooms").css("display","none");

        // clear rooms when none is checked (mainly for new events)
        if($('.field-name-field-event-room .form-checkbox:checked').length == 0){
            clear_rooms();
        }

        /*
         * Hide enddate but update when startdate changes
         */
        $('.form-item-field-event-date-und-0-value2-date').css("display","none");
        $("label[for='edit-field-event-date-und-0-value2']").html("tot");

        $('#edit-field-event-date-und-0-value-datepicker-popup-0').change(function(e) {
            $("#edit-field-event-date-und-0-value2-datepicker-popup-0").val($("#edit-field-event-date-und-0-value-datepicker-popup-0").val());
            onchange_date(this);
        });
        $('#edit-field-event-date-und-0-value-timeEntry-popup-1').change(function(e){ onchange_date(this); });
        $('#edit-field-event-date-und-0-value2-timeEntry-popup-1').change(function(e){ onchange_date(this); });


        $('#edit-check').mousedown(function(){
            $('#edit-check').css("border","0px");

            if(showed_changedate_msg){
                showed_changedate_msg = false;
                $(".currentrooms").css("display","block");
            }else{
                $('.form-item-field-event-date-und-0-value2-date').css("display","none");
            }
        });

        function onchange_date(e){
            if($("body").hasClass('page-node-edit')){
                show_alert();
                $(".ui-timepicker-wrapper").css("display","none");
                $('#edit-check').css("border","2px solid orange");

                clear_rooms();
            }
        }

        function show_alert(){
            if(!showed_changedate_msg){
                alert('Je verandert de datum/tijd. Klik op "Controleer beschikbaarheid" voor beschikbare zalen op deze nieuwe datum/tijd.');
                showed_changedate_msg = true;
            }
        }

        function clear_rooms(){
            $( ".field-name-field-event-room input:checked" ).each(function( index ) {
                current_rooms.push($( this ).attr('id'));
            });

           $('.field-name-field-event-room .form-checkboxes').html("klik op 'Controleer beschikbaarheid' voor beschikbare zalen.");
        }

    });

})(jQuery, Drupal, this, this.document);