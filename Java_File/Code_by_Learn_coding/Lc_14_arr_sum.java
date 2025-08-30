package Code_by_Learn_coding;
public class Lc_14_arr_sum {
    public static void main(String[] args) {
//       main obj=new main();
//       obj.SumOfArray();
       main obj1= new main();
//       obj1.Maximum_Num();
       obj1.search();
    }

    }
  class main{
     // <----Sum Of Array---->
     void SumOfArray(){
         int arr[]={3,5,6,9,8};
         int sum=0;
         for(int i=0;i<arr.length;i++){
             sum+=arr[i];
         }
         System.out.println("Addition of Array:"+sum);
    }
    //<---Maximum No --->
    void Maximum_Num(){
         int arr[]={4,5,6,8,72};
         int ans=0;
         for(int i=0;i<arr.length;i++){
             if(ans<arr[i]){
                 ans=arr[i];
             }
         }
        System.out.println("Maximum no in array:"+ans);
     }

 //<---LINEAR SEARCH--->
 void search() {
     int arr[] = {2, 4, 5, 6, 7, 8,5};
     int a = 6, ans = -1;
     for (int i = 0; i < arr.length; i++) {

         if (arr[i] == a) {
             ans = i;
             break;

         }

     }
     if(ans==-1)
     {
         System.out.println("Not Found");
     }
     else{
         System.out.println("Found"+ " "+ a +" "+ "at index:" + ans);

     }

 }
 }