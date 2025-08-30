//Html Manipulation.
$(document).ready(function () {
    console.log("JQUERY HTML WORKING.");
    //Text 
    // $('#txt').text() // Use for get text of div byits id.
    //$('#txt').text("Text will be repaced with this text.")//Set a text of a div. 
    //HTML Manipulation-->replace Html code/Content. 
    //$('body').html("<b>HTML Code for Body in html.</b>");
    //value manipulation-->
    //$('#ar').val("Submit Your Feedback."); //it will change the content of textarea.
    //Attribute Manipulation.
    $('#link').attr("href", "https://www.amazon.in/"); //this method  replace the link with nwe Link.

    //Apend-->
    // After the end of Sentence
     $('#txt').append("<p>This will give You Answer.</p>"); 
    //Before the Sentence
    $('#txt').prepend("<p>Adding the Sentence before content.</p>");
    //Remove-->
    //remove
    //Removed the Content.
    //$('#txt2').remove();
    //empty()
    //$('#txt2').empty();

    //Wrap & unwrap.
  $('#txt').wrap("<div id ='txt'></div>");
    //Unwrap
    $('#txt').unwrap();

});