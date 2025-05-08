<?php
$gender = $_POST["gender"];
$name = $_POST["myusername"];
$message = $_POST["message"];

if ($gender == "Woman"){
    $bgcolor = "pink";
}
else if ($gender == "Man"){
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
        <h1>Αλλαγη Χρώματος</h1>
        <?php
        echo "Ονομα: $name";
        echo "<br>Message: $message";
        echo "<br>gender: $gender";
        ?>
    </body>
</html>