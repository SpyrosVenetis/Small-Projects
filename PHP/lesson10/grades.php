<?php
$grades = $_POST['grades'];
$total = 0;
$i = 0;

/*for ($i = 0; $i < 5; $i++){
    $grade = (int)$grades[$i];
    $total += $grade;
    echo "Βαθμός για μάθημα ", ($i + 1), ": $grade<br>";
} */

foreach ($grades as $grade){
    $i += 1;
    $total +=$grade;
    echo "Βαθμός για μάθημα ", ($i), ": $grade<br>";
}

$avarage = $total /count($grades);
echo "Ο μέσος όρος σου είναι: $avarage<br>";

if ($avarage >= 5){
    echo "Πέρασες";
}

else {
    echo "Δεν Πέρασες";
}
?>