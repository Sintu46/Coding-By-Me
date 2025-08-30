package Code_by_Learn_coding;

import java.util.Scanner;
//<----Taking Input from the user For Array----->
public class Lc_16_arry_input {
    public static void main(String[] args) {
        System.out.println("Enter the size of the Array:");
        Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int arr[]= new int[n];
        System.out.print("Enter the"+ n +" "+ "element:");
         for( int i=0;i<arr.length;i++){
             arr[i]=sc.nextInt();
         }
          for( int i=0;i<arr.length;i++){
              System.out.print(arr[i]+" ");

          }
    }
}
