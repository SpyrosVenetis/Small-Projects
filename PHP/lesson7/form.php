<?php
$name = $_POST["name"];
$surname = $_POST["surname"];
$esoda = $_POST["esoda"];

if ($esoda < 1000 and $esoda > 0){
    $apo = ((6*$esoda) / 100) * 12;
}
else if ($esoda > 999 and $esoda < 2000){
    $apo = ((10*$esoda) / 100) * 12;
}
else if ($esoda > 1999){
    $apo =  ((25*$esoda) / 100) * 12;
}
else {
    $apo = "Σφαλμα";
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>From</title>
</head>
<body>
    <form>
        <table>
            <tr>
                <th colspan="2">
                    Υπολογισμός Φόρου
                </th>
            </tr>
            <tr>
                <td>Όνομα:</td>
                <td><?php echo $name; ?></td>
            </tr>
            <tr>
                <td>Επώνημο:</td>
                <td><?php echo $surname; ?></td>
            </tr>
            <tr>
                <td>Αποτελεσμα:</td>
                <td><?php echo $apo; ?></td>
            </tr>
        </table>
    </form>
</body>
</html>