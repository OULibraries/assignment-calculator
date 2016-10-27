/**
 * Created by smit0015 on 10/24/2016.
 */

(function ($) {
    var groups;

    // called when we want to show the group
    function showBlock(n) { console.log('here here');
        $('.step-' + n + '-display-field-group').show();
        $('#field-date-complete' + n + '-add-more-wrapper').hide();
    }

    // called when we want to hide the group
    function hideBlock(n) {
        $('.step-' + n + '-display-field-group').hide();
    }

    // Bringing the number of groups variable in from assignment_tmeplate-node-form.tpl.php
    // looping through each group determining if it is checked or not
    // if checked then show the next group...if not checked don't show the next group
    Drupal.behaviors.assignment_calculator = {
        attach: function (context, settings) {
            groups = Drupal.settings.assignment_calculator.numOfGroups;
            for (var i = 1; i < groups; i++) { console.log(i);
                n = i + 1;
                $('#edit-field-date-complete' + i).hide();
                if (document.getElementById('edit-field-add-step' + i + '-und').checked) {
                    showBlock(n);
                } else {
                    hideBlock(n);
                }
            }
        }
    };

    // listening for the click on 'add step'
    // if it's clicked we either call the function to show the next group or hide the next group
    $(document).ready(function () {
        var n;
        var i;
        $("[id^=edit-field-add-step]").click(function (event) { console.log('hello');
            if (document.getElementById(event.target.id)) {
                if (document.getElementById(event.target.id).checked) {
                    n = event.target.id.match(/\d/g);
                    n = n.join("");
                    n++;
                    showBlock(n);
                }
                else {
                    n = event.target.id.match(/\d/g);
                    n = n.join("");
                    n++;
                    hideBlock(n);
                }
            }
        });
    });

}(jQuery));