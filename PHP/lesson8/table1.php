<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>TableList</title>
</head>
<body>
    <?php
        $students = array("Γιάννης", "Μαρία", "Γιώργος", "Ειρήνη");
        $ArrayLength = count($students);
?>
<ol>
    <?php
            for ($i=0; $i<$ArrayLength; $i++){
            echo "<li>",$students[$i],"</li>";
}
?>
</ol>
</body>
</html>