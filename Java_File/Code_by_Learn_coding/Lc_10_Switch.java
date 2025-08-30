package Code_by_Learn_coding;

import java.util.Scanner;

public class Lc_10_Switch {
    public static void main(String[] args) {
        int ch;
        Scanner j= new Scanner(System.in);
        System.out.println("Enter your Choice:" );
        ch=j.nextInt();

        switch(ch)
        {
            case 1:
                System.out.println("Sunday");
                break;
            case 2:
                System.out.println("Monday");
            break;
            case 3:
                System.out.println("Tuesday");
            break;
            case 4:
                System.out.println("Wednesday");
            break;
            case 5:
                System.out.println("Thursday");
            break;
            case 6:
                System.out.println("Friday");
                break;
            case 7:
                System.out.println("Saturday");
            break;
            default: System.out.println("Wrong Option!"+"\n"+"Enter the Choice Again.");
            }
            }
        }




