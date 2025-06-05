<?php
$num = $_POST["num"];

echo "<table border='1'>";

for($i=1; $i<=$num; $i++){
    echo "<tr>";
    echo "<td>",$i,"</td>";
    echo "<td>",$i*$i,"</td>";
    echo "</tr>";
}

echo "</table>";
?>