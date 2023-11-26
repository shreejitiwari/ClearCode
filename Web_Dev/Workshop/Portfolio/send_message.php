<?php

$server = "localhost";
$username = "id20665153_timepass";
$password = "Web_dev_1234";
$database = "id20665153_workshop";
$con = mysqli_connect($server, $username, $password, $database);

if ($con)
{
    $name = $_POST['username'];
    $email = $_POST['email'];

    $phn = $_POST['phone']
    $message = $_POST['message'];

    $sql = "insert into tbl_feedback values('$name', '$email', '$phn', '$message )";

    if (mysqli_querry($con, $sql))
    {
        function_alert("Thanks for sending message");
    }

    else
    {
        echo "ERROR :   Could not able to execute sql".mysqli_error($con);
    }

    mysqli_close($con);
    

}