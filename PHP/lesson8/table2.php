<?php
    $students = array("Γιάννης", "Μαρία", "Γιώργος", "Ειρήνη");
    $ArrayLength = count($students);

    echo "<table border='1'>";

    for ($i=0; $i<$ArrayLength; $i++){
        echo "<tr><td>",$students[$i],"</td></tr>";
    }
    echo "</table>";

?>