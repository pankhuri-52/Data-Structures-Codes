import java.util.*;
import java.io.*;
class Bits{
    public static void main(String[] arsg)throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0){
            long n=Long.parseLong(br.readLine());
            GfG g=new GfG();
            g.count(n);
        }
    }
}



class GfG{
    public void count(long n){
        String s=Long.toBinaryString(n);
        int count_set=0;
        int count_nonset=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='1')
             count_set++;
            else
             count_nonset++;
        }
        System.out.println(count_set+" "+count_nonset);
    }
}
