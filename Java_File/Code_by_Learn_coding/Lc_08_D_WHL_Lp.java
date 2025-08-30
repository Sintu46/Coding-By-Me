package Code_by_Learn_coding;

import java.util.Scanner;

public class Lc_08_D_WHL_Lp {
    public static void main(String[] args) {
        System.out.println("enter any no:");
        Scanner J=new Scanner(System.in);
       int num=J.nextInt();
       do {
           System.out.println(num);
           ++num;
       }
       while(num<=10);
       }
    }

