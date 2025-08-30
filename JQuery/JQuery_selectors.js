
$(document).ready(function () {
    console.log("U R Using JQuery.");
    //Element Selector.
    //$('div').click(); // Click on Div Element.
    $('div').click(function () {
        console.log("Clicked on div Element.");
    });
    // Id Selector.
    $('#second').css("color", "darkred"); // Apply on Id.
    $('#second').click(function () {
        console.log("Clicked on Id.", this);
    });
    //Class Selector.
    $('.cls1').css("color", "green");
    $('.cls1').click(function () {
       console.log("Clicked on Class-->cls1");
    });
        // Attach Multiple event
        $('.cls1').on(
            {
                click: function () {
                    console.log("Thanks for Clicking on Cls", this);
                },
                //Now Using Second event.
                mouseenter: function () {
                    console.log(" MouseEntered.");
                }

         });
    // Others Selectors...
    // $('*').click(); // SElect All Element.
    // $('div.odd') . click(); //Select all odd Div
});


