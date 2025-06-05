<?php
$servername = "localhost";
$username = "root";
$password = "";
$database = "school";

$firstname = $_POST["Name"];
$lastname = $_POST["Surname"];

$conn = mysqli_connect($servername,$username,$password,$database);

if ($conn == false){
    die ("Αποτυχημένη σύνδεση" .mysqli_connect_error());
}

$myquery = "INSERT INTO students (FirstName, LastName) VALUE ('$firstname','$lastname')";

$sql = mysqli_query($conn,$myquery);

if ($sql == false){
    echo "Δεν δημιουργήθικε νέα εγγραφή.<br>";
    die (mysqli_connect_error());
}

else {
    echo "<h3>Δημιουργήθικε νέα εγγραή με τα παρακάτω στοιχεία:</h3>";
    echo "<p>Όνομα: <strong>$firstname</strong></p>";
    echo "<p>Επώνημο: <strong>$lastname</strong></p>";
}

mysqli_close($conn);
?>