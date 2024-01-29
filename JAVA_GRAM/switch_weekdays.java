import java.util.*;
public class switch_weekdays {
    public static void main(String [] args){
        int week_no;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter weekday number : ");
        week_no = input.nextInt();

        switch(week_no){

            case 1: System.out.println("Monday");
            break;
            case 2: System.out.println("Tuesday");
            break;
            case 3: System.out.println("Wednesday");
            break;
            case 4: System.out.println("Thursday");
            break;
            case 5: System.out.println("Friday");
            break;
            case 6: System.out.println("Saturday");
            break;
            case 7: System.out.println("Sunday");
            break;            
            default: System.out.println("No such day exist for given input");
        }

        input.close();
    }
}
