package Code_by_Learn_coding;

import java.util.Scanner;

public class Lc_11_switch {
    public static void main(String[] args) {
        int a,b,c,ch;

        Scanner j=new Scanner(System.in);
        System.out.println("Enter the two number:");
        a=j.nextInt();
        b=j.nextInt();
        System.out.println("Enter the Choice");
        ch= j.nextInt();
        c=a-b;
        switch (ch){
            case 1:{
                System.out.println("Addition "+a+b);}
            break;
            case 2:{
                System.out.println("Mul "+a*b);}
            break;
            case 3:{
                System.out.println("Sub "+c);}
            break;
            case 4:{
                System.out.println("Div "+a/b);}
            break;
            case 5:{
                System.out.println("Remainder "+ a%b);
            }
            default :{
                System.out.println("You are Entered the Wrong Option");
            }
            }
    }
}
