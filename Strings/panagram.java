import java.lang.*;
import java.io.*;
import java.util.*;
class solve
{
    public static boolean checkPangram  (String s)
    {
        String s1=s.toLowerCase();
       HashMap<Character,Integer> hm= new HashMap<Character,Integer>();
       for(int i=0;i<s1.length();i++){
           if(s1.charAt(i)>=97 && s1.charAt(i)<=122){
               hm.put(s1.charAt(i),1);
           }
       }
       
       int count=0;
       for (Map.Entry entry : hm.entrySet()) { 
            if(entry.getValue()==(Integer)1)
            count++;
        }
        if(count==26)
        return true;
        else
        return false;
     }
}
