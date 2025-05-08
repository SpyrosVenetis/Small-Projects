<?php
$x = 5;
$y = 7;

echo var_dump($x.$y);

$new = $x.$y;

$new = (int)$new;

echo var_dump($new);

$new++;

echo "<br>". $new, "<br>";

$name = "George";;
$surname = "Papas";
$name .= $surname;
echo $name;
?>