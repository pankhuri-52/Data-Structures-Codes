import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    static void karatsuba(String str1, String str2){
        int dec1 = Integer.parseInt(str1,2);
        int dec2 = Integer.parseInt(str2,2);
        System.out.println(dec1*dec2);
    }
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int t;
	    t=sc.nextInt();
	    while(t!=0){
		String str1 = sc.next();
		String str2 = sc.next();
		karatsuba(str1,str2);
		t--;
	    }
	}
}
