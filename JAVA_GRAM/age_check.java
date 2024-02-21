import java.util.*;
public class age_check {
    public static void main(String [] args){
        int age;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your age : ");
        age = input.nextInt();

        if (age<18)
            System.out.println("You are a kid");
        
        else if (age<40)
            System.out.println("You are young");

        else
            System.out.println("Tum purane ho chuke ho, tumhari jagah mai lunga");


        input.close();

    }
}