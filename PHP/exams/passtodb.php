<?php
$servername = "localhost";
$username = "root";
$password = "";
$database = "school";

$firstname = $_POST['name'];
$lastname = $_POST['surname'];
$birthdate = $_POST['birthdate'];
$gender = $_POST['gender'];
$department = $_POST['department'];

$conn = mysqli_connect($servername, $username, $password, $database);
if ($conn->connect_error) {
    die("Αποτυχεία σύνδεσης: " .mysqli_connect());
}

$myquery = "INSERT INTO students (name, surname,birthdate,gender,department) VALUES ('$firstname', '$lastname', '$birthdate', '$gender', '$department')";

$result = mysqli_query($conn, $myquery);

if ($result == false) {
    echo "Σφαλμα κατα την εγγραφη δεδομένων.<br>";
    die (mysqli_connect_error());
}

else {
    echo "<!DOCTYPE html>";
    echo "<html>";
    echo "<head>";
    echo'<link rel="stylesheet" type="text/css" href="style.css">';
    echo "<meta charset='UTF-8'>";
    echo "</head>";
    echo "<body>";
    echo "<div id='container'>";
    echo "<h3>Δημιουργήθικε νέα εγγραή με τα παρακάτω στοιχεία:</h3>";
    echo "<table>
        <tr>
            <td>Όνομα:</td>
            <td>$firstname</td>
        </tr>
        <tr>
            <td>Επώνυμο:</td>
            <td>$lastname</td>
        </tr>
        <tr>
            <td>Ημερομηνία Γέννησης:</td>
            <td>$birthdate</td>
        </tr>
        <tr>
            <td>Φύλο:</td>
            <td>$gender</td>
        </tr>
        <tr>
            <td>Τμήμα:</td>
            <td>$department</td>
        </tr>
    </table>";

    echo "</body>";
    echo "</html>";
}

mysqli_close($conn);
?>