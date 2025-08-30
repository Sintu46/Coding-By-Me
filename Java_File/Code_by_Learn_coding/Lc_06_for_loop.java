package Code_by_Learn_coding;

import java.util.Scanner;

public class Lc_06_for_loop {
    public static void main(String[] args) {
        int num;
        Scanner w=new Scanner(System.in);
        System.out.println("Enter the number:");
        num=w.nextInt();
        System.out.println("Table of:");
        for(int i=1;i<=10;i++){
            System.out.println(num*i);
        }
    }
}
