import java.util.*;



 // } Driver Code Ends


//User function Template for Java

// Helper class to find largest number with minimum frequency
class Geeks
{
    //Function to sort acc to the value
    public static HashMap<Integer, Integer> sortByValue(HashMap<Integer, Integer> hm) 
    { 
        List<Map.Entry<Integer, Integer> > list = 
               new LinkedList<Map.Entry<Integer, Integer> >(hm.entrySet()); 
  
        Collections.sort(list, new Comparator<Map.Entry<Integer, Integer> >() { 
            public int compare(Map.Entry<Integer, Integer> o1,  
                               Map.Entry<Integer, Integer> o2) 
            { 
                return (o1.getValue()).compareTo(o2.getValue()); 
            } 
        }); 
          
        HashMap<Integer, Integer> temp = new LinkedHashMap<Integer, Integer>(); 
        for (Map.Entry<Integer, Integer> aa : list) { 
            temp.put(aa.getKey(), aa.getValue()); 
        } 
        return temp; 
    } 
    
    // Function to find largest number with minimum frequency
    public static int LargButMinFreq(int arr[], int n)
    {
        //Counting the frequency of every character
        HashMap <Integer,Integer> hm=new HashMap <Integer,Integer>();
        for(int element : arr){
            if(hm.containsKey(element)){
                hm.put(element,hm.get(element)+1);
            } else {
                hm.put(element,1);
            }
        }
        
        //Sort value wise
        Map<Integer, Integer> hm1 = sortByValue(hm); 
        
        //Find the maximum number with the minimum frequency
        int max=0;
        int freq=999;
        int ans;
        for(Map.Entry<Integer,Integer> en : hm1.entrySet()){
            if(en.getValue()<=freq && en.getKey()>max){
                max=en.getKey();
                freq=en.getValue();
            }
        }
        
        return max;
    }
}
