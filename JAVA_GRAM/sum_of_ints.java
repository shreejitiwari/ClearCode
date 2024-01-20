import java.util.*;

public class sum_of_ints {
    public static void main(String [] args)
    {
        Scanner ip = new Scanner(System.in);
        System.out.println("Enter two numbers for addition : ");
        System.out.print("a : ");
        int a = ip.nextInt();
        System.out.print("b : ");
        int b = ip.nextInt();

        int sum = a+b;
        System.out.print("a + b = ");
        System.out.println(sum);

        ip.close();
    }
}
