package Code_by_Learn_coding;

import java.util.Scanner;

public class Lc_07_whl_loop {
    public static void main(String[] args) {
        int num;
        Scanner N=new Scanner(System.in);
        System.out.println("Enter the any Number:");
        num=N.nextInt();

        while (num>=0)

        {
            if(num%2==0){
                System.out.println("even no.");
                break;
            }
            else {
                System.out.println("Odd number.");
                break;
            }


        }
    }
}
