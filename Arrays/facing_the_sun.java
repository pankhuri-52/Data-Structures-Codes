import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    static void sun_facing(int arr[],int n){
        int min=arr[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(arr[i]>min && arr[i]>arr[i-1]){
                min=arr[i];
             count++;
            }
        }
        System.out.print(count);
    }
	public static void main (String[] args) {
		int t;
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		while(t!=0){
		    int n;
		    n=sc.nextInt();
		    int arr[]=new int[n];
		    for(int i=0;i<n;i++){
		        arr[i]=sc.nextInt();
		    }
		    sun_facing(arr,n);
		    System.out.println();
		    t--;
		}
	}
}
