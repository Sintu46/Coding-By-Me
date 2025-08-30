package Code_by_Learn_coding;

import java.util.Scanner;

public class Lc_04_nes_if_else {
    public static void main(String[] args) {
      //  int num1 = 300, num2 = 400, num3 = 530;
        int num1,num2,num3;
        System.out.println("Entter the three value:");
        Scanner obj= new Scanner(System.in);
        num1=obj.nextInt();
        num2= obj.nextInt();
        num3=obj.nextInt();
        if (num1>num2)
        {
             if (num1>num3) {
                System.out.println("Maximum no:"+num1);}
              else {
                System.out.println("Maximum no:"+num3);}
        }
        else
        {

            if (num2 > num3) {
                System.out.println("maximum No:" + num2);
            }
            else {
                System.out.println("maximum No:" + num3);
            }
            }
        }
    }


