import java.util.*;
public class variables_ops {
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your name : ");


        String name = input.nextLine();

        System.out.print("Enter your age : ");
        int age = input.nextInt();

        System.out.print("My name is ");
        System.out.println(name);
        System.out.print("And my age is ");
        System.out.println(age);

        input.close();
    }
}

