$(document).ready(function () {
    console.log("JQuery Effects Working.");
    //Show(time->1000-1sec)
    $('#sh').click(function () {
        $('#efect').show(2000);
        $(this).css("background-color", "bisque");
    });
    //Hide(time->1000=1sec)
    $('#hi').click(function () {
        $('#efect').hide(2000);
        $(this).css("background-color", "green");
    });
    //FadeIn
    $('#fdin').click(function () {
        $('#efect').fadeIn(3000);
        $(this).css("background-color", "lightblue");
        //alert("Message FadeIn")
    });
    //fadeOut(time->1k-1sec)
    $('#fdot').click(function () {
        $('#efect').fadeOut(3000);
        $(this).css("background-color", "aqua");
        // alert("Message Fade out.");
    });
    //slideup(speed-2000-2s)
    $('#sldup').click(function () {
        $("#efect").slideUp(3000);
        $(this).css("background-color", "brown");
    });
    $('#slddwn').click(function () {
        $('#efect').slideDown(3000);
        $(this).css("background-color", "red");
    });
    //Custom Animate
    $('#cstm').click(function () {
        $('#efect').animate({
            opacity: 0.5
        }, 2000);
        $(this).css("color", "green");
    });
});