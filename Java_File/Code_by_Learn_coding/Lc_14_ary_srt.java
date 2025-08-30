package Code_by_Learn_coding;

import java.util.Arrays;
import java.util.Scanner;

public class Lc_14_ary_srt {
    public static void main(String[] args) {
         int a[]=new int [10];
        Scanner j=new Scanner(System.in);
        System.out.print("Enter the ArrayElement");
        for( int i=0; i<10; i++){
            a[i]=j.nextInt();
        }
        Arrays.sort(a);
        System.out.println("Array Element After the Sorting");
       for(int b:a){
           System.out.print(b+ " ");
       }
    }
}
