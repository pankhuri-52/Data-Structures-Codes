import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    static void dogLover(int arr[],int n){
        HashMap <Integer,Integer> hm=new HashMap<Integer,Integer>();
        for(int i=0;i<n;i++){
            if(hm.containsKey(arr[i])){
                hm.put(arr[i],hm.get(arr[i])+1);
            } else {
                hm.put(arr[i],1);
            }
        }
        int sum=0;
        for(Map.Entry entry:hm.entrySet()){
            // System.out.println(entry.getKey()+" "+entry.getValue());
            if((Integer)entry.getValue()%2!=0){
                sum+=((Integer)entry.getValue()-1);
            } else {
                sum += (Integer)entry.getValue();
            }
        }
        System.out.println(sum);
    }
	public static void main (String[] args) {
		int t;
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		while(t!=0){
		    int n=sc.nextInt();
		    int arr[]=new int[n];
		    for(int i=0;i<n;i++){
		        arr[i]=sc.nextInt();
		    }
		    dogLover(arr,n);
		    t--;
		}
	}
}
