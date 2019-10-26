#include <iostream>
#define n 4
using namespace std;
int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
void juggle(int arr[],int d,int count){
	int g_c_d=gcd(d,count);
	for(int i=0;i<g_c_d;i++){
		int temp=arr[i];
		int j=i;
		while(1){
			int k=j+d;
			if(k>=count)
			k=k-count;
			if(k==i)
			break;
			arr[j]=arr[k];
			j=k;
		}
		arr[j]=temp;
	}
	cout<<"Array after applying juggling algorithm"<<endl;
	for(int i=0;i<count;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void rings(int arr[][n],int right,int bottom){
	int left=0;
	int top=0;
	while(left<right && top<bottom){
		int count=0;
		int b[99];
		int k=0;
		for(int i=left;i<right;i++){
			cout<<arr[top][i]<<" ";
			b[k++]=arr[top][i];
			count++;
		}
		top++;
		for(int i=top;i<bottom;i++){
			cout<<arr[i][right-1]<<" ";
			b[k++]=arr[i][right-1];
			count++;
		}
		right--;
		if(top<bottom){
			for(int i=right-1;i>=left;i--){
				cout<<arr[bottom-1][i]<<" ";
				b[k++]=arr[bottom-1][i];
				count++;
			}
			bottom--;
		}
		if(left<right){
			for(int i=bottom-1;i>=top;i--){
				cout<<arr[i][left]<<" ";
				b[k++]=arr[i][left];
				count++;
		        }
			left++;
		}
		cout<<endl;
		cout<<"No of elements in this particular ring"<<endl;
		cout<<count<<endl;
		/*for(int i=0;i<count;i++){
			cout<<b[i]<<" ";
		}*/
		juggle(b,count/2,count);
		
	}
}
int main(){
	int arr[n][n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	rings(arr,n,n);
	return 0;
}
