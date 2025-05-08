<?php
    $cc = $_POST["cc"];
    $age = $_POST["age"];
    $name = $_POST["name"];
    $pin = $_POST["pin"];
    $price = 0;

    if($cc <= 1000){
        $price = 170;
    }
    elseif($cc > 1000 and $cc <= 2000){
        $price = 230;
    }
    elseif($cc > 2000){
        $price = 350;
    }

    if($age <= 20){
        $price += 50;
    }

    $priceVAT = $price + 0.24 * $price;
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Results</title>
    <style>
        body{
            font-size: large;
            font-family:Arial, Helvetica, sans-serif;
            text-align: center;
        }
    </style>
</head>
<body>
    <h1>Ειδοποητήριο Πληρωμής Ασφάλιστρου</h1>
    <br>
    <br>
    Ονοματεπώνημο: <strong><?php echo $name; ?></strong>
    <br>
    Όχημα με Πινακίδα Κυκλοφορίας: <strong><?php echo $pin; ?></strong>
    <br>
    Τελικό ποσό Πληρωμής Ασφάλιστρου είναι: <strong><?php echo $priceVAT; ?></strong>
</body>
</html>