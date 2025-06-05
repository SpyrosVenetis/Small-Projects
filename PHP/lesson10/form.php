<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8" />
    <title>grade form</title>
</head>
<body>
    <form action="grades.php" method="post">
        <h3>Δώστε βαθμούς για 5 μαθήματα</h3>
        <?php
        for ($i = 1; $i <= 5; $i++){
            echo "Μάθημα $i: <input type='number' name='grades[]'min='0' max='10'><br><br>";
        }
        ?>
        <input type="submit" value="Υπολογισμός μέσου όρου">
    </form>
</body>
</html>