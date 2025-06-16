<?php
$Year = date("Y");
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div id="container">
        <h1>Εγγραφή</h1>
        <form action="passtodb.php" method="post">
            <table>
                <tr>
                    <td>Όνομα:<br></td>
                    <td><input type="text" name="name" required></td>
                </tr>
                <tr>
                    <td>Επώνυμο:</td>
                    <td><input type="text" name="surname" required></td>
                </tr>
                <tr>
                    <td>Ημερομηνία Γέννησης:</td>
                    <td><input type="date" name="birthdate" required></td>
                </tr>
                <tr>
                    <td>Φύλο:</td>
                </tr>
                <tr>
                    <td class="genders">Άρεν</td>
                    <td><input type="radio" name="gender" value="Άρεν"></td>
                </tr>
                <tr>
                    <td class="genders">Θήλυ</td>
                    <td><input type="radio" name="gender" value="Θήλυ"></td>
                </tr>
                <tr>
                    <td class="genders">Άλλο</td>
                    <td><input type="radio" name="gender" value="Other"></td>
                </tr>
                <tr>
                    <td>Τμήμα:</td>
                    <td><select name="department" required>
                        <option value="Πληροφορική">Πληροφορική</option>
                        <option value="Ηλεκτρολογία">Ηλεκτρολογία</option>
                        <option value="Μηχανολογία">Μηχανολογία</option>
                        <option value="Πολιτική Μηχανική">Πολιτική Μηχανική</option>
                        <option value="Χημική Μηχανική">Χημική Μηχανική</option>
                    </select></td>
                </tr>
                <tr>
                    <td><button id="submit" type="submit">Υποβολή</button></td>
                    <td><button id="reset" type="reset">Επαναφορά</button></td>
                </tr>
            </table>
            <p style="text-align: center;">©<?php echo "$Year" ?> Spyros Venetis. All rights reserved.</p>
        </form>
    </div>
</body>
</html>