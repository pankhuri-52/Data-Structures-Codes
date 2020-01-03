import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    static void negative_in_pairs(int n,int arr[],int k){
        int c;
        for(int i=0;i<n;i++){
            if((i+k)<=n){
                c=0;
            for(int j=i;j<(i+k);j++){
                if(arr[j]<0){
                    System.out.print(arr[j]+" ");
                    break;
                } else {
                    c++;
                }
               
            }
             if(c==k)
             System.out.print("0 ");
           
        }
       
        }
         
        System.out.println();
    }
public static void main (String[] args) {
Scanner sc=new Scanner(System.in);
int t;
t=sc.nextInt();
while(t!=0){
   int n;
   n=sc.nextInt();
   int arr[];
   arr=new int[n];
   for(int i=0;i<n;i++){
       arr[i]=sc.nextInt();
   }
   int k;
   k=sc.nextInt();
   negative_in_pairs(n,arr,k);
   t--;
}
}
}
