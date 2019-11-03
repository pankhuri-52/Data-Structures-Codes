#include <iostream>
#include <stack>
using namespace std;
int get_max_area(int hist[],int n){
	stack<int> stk;
	int max_area=0;
	int top_of_stack;
	int area_with_top;
	int i=0;
	while(i<n){
           if(stk.empty() || hist[stk.top()]<=hist[i]){
		   stk.push(i++);
	   } else{
              top_of_stack=stk.top();
	      stk.pop();
	      area_with_top=hist[top_of_stack]*(stk.empty()?i:(i-stk.top()-1));
	      if(area_with_top>max_area)
		      max_area=area_with_top;
	}
     }
	while(stk.empty()==false){
		top_of_stack=stk.top();
		stk.pop();
		area_with_top=hist[top_of_stack]*(stk.empty()?i:i-stk.top()-1);
		if(area_with_top>max_area)
			max_area=area_with_top;
	}
	return max_area;
}
int main(int argc,const char *argv[]){
    int n=atoi(argv[1]);
    int arr[n];
    int k=0;
    for(int i=2;i<argc;i++){
         arr[k++]=atoi(argv[i]);
    }
    cout<<"The length of bars are:\n";
    for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
    }
    cout<<endl;
    int largest_area=get_max_area(arr,n);
    cout<<"The largest area of histogram is:\n";
    cout<<largest_area<<endl;
    return 0;
}
