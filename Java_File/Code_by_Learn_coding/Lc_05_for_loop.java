package Code_by_Learn_coding;

import java.util.Scanner;

public class Lc_05_for_loop {
    public static void main(String[] args) {
        int num,fact =1;
        Scanner M=new Scanner(System.in);
        System.out.println("Enter the number:");
        num=M.nextInt();
        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        System.out.println("Factorial :"+fact);
       
    }
}
