<?php
$value = 900;
if ($value > 0 and $value < 900){
    echo "Χαμηλόμισθμος";
}

elseif ($value >= 900 and $value < 1600){
    echo "Μεσαία αμειβόμενος";
}

elseif ($value >= 1600){
    echo "Υψηλόμισθος";
}

else {
    echo "Δεν γίνεται να είναι απο μηδέν και κάτω";
}

?>