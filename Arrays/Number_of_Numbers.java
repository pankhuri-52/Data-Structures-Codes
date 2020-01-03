import java.util.*;
class Numbers{
public static void main(String[] args)
{
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	while(t-->0)
	{
		int n=sc.nextInt();
		int[] a=new int[n];
		for(int i = 0; i < n; i++)
		{
			a[i]=sc.nextInt();
		}
		int k=sc.nextInt();
		GfG g=new GfG();
		System.out.println(g.num(a,n,k));
	}
}
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the Function below*/
class GfG
{
          public static int num(int a[], int n, int k)
            {
                   int count=0;
                   for(int i=0;i<n;i++){
                       if(a[i]==0)
                           count++;
                        int temp=a[i];
                        int factor=1;
                           while(temp!=0){
                              temp=temp/10;
                              factor = factor*10;
                          }
                          while(factor>1){
                              factor = factor/10;
                              if((a[i]/factor)==k)
                                count++;
                            a[i] = a[i] % factor;
                          }
                   }
                   return count;
            }
}
