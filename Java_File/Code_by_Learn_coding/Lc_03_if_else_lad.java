package Code_by_Learn_coding;

import java.util.Scanner;

public class Lc_03_if_else_lad {
    public static void main(String[] args) {
        int chc;
        System.out.println("Enter the condition:");
        Scanner obj = new Scanner(System.in);
        chc = obj.nextInt();
        if (chc == 1) {
            System.out.println("Sunday");
        } else if (chc == 2) {
            System.out.println("Monday");
        } else if (chc == 3) {
            System.out.println("Tuesday");
        } else if (chc == 4) {
            System.out.println("Wednesday");
        } else if (chc == 5) {
            System.out.println("Thursday");
        } else if (chc == 6) {
            System.out.println("Friday");
        } else if (chc == 7) {
            System.out.println("Saturday");
        } else {
            System.out.println("Invalid Input! U have Entered");
        }

    }}