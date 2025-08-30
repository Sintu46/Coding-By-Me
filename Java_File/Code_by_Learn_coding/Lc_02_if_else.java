package Code_by_Learn_coding;

import java.util.Scanner;

public class Lc_02_if_else {

    public static void main(String[] args) {
        int age;
        System.out.println("enter the age:");
        Scanner obj=new Scanner(System.in);
        age=obj.nextInt();
        if(age>=18)
        {
            System.out.println("You are Eligible for vote."+"\n"+
                    " You can go for vote");
        }
        else {
            System.out.println("You are not eligible for vote.");
            System.out.println("Wait until your are not become adult.");
        }
    }
}
