<?php
$gender = "man";

if ($gender == "woman"){
    $bgcolor = "pink";
}
else if ($gender == "man"){
    $bgcolor = "cyan";
}
else {
    $bgcolor = "beige";
}
?>

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
        <h2 style="color: red;">HEADER2</h2>
        <h1>HEADER1</h1>
    </body>
</html>