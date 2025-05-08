<!DOCTYPE HTML>
<html>
    <head>
        <title>CSS-PHP</title>
        <meta charset="UTF-8">
        <style>
            h1 {
                color: blue;
            }
            body {
                background-color: <?php echo $bgcolor; ?>;
            }
        </style>
    </head>
    <body>
        <form action="color.php" method="POST">
            Enter your Name:
            <br>
            <input type="text" name="myusername">
            <br>
            <br>
            Enter your message:
            <br>
            <textarea rows="5" cols="40" name="message"></textarea>
            <br>
            <br>
            Enter your gender:
            <br>
            Man: 
            <input type="radio" name="gender" value="Man">
            <br>
            Woman: 
            <input type="radio" name="gender" value="Woman">
            <br>
            Other: 
            <input type="radio" name="gender" value="Other">
            <br>
            <br>
            <input type="submit" value="Send">
            <input type="reset" value="Clear">
        </form>
    </body>
</html>