package Code_by_Learn_coding;

import java.util.Scanner;

public class Lc_15_2d_ary {
    public static void main(String[] args) {
        System.out.print("Enter the Array Element:");
         int a[][]= new int [2][2];
        Scanner l= new Scanner(System.in);
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                a[i][j]=l.nextInt();
            }
        }
        System.out.println("\nMatrix Element:\n");
         for ( int i=0;i<2;i++){
             for( int j=0;j<2;j++){
                 System.out.print(a[i][j]+" ");
             }
            System.out.println();
         }
    }
}
