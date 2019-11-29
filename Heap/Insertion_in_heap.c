#include <stdio.h>
#include <stdlib.h>
int heap[100];
int heapSize=-1;
void swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}
void insert(int element){
     heapSize++;
     heap[heapSize]=element;
     int now=heapSize;
     while(now!=0 && heap[(now-1)/2]>element){
	     heap[now]=heap[(now-1)/2];
	     now=(now-1)/2;
     }
     heap[now]=element;
}
void heapify(int heap[],int n,int i){
     int smallest=i;
     int l=2*i+1;
     int r=2*i+2;
     if(l<n && heap[l]<heap[smallest])
	     smallest=l;
     if(r<n && heap[r]<heap[smallest])
	     smallest=r;
     if(smallest!=i){
	     swap(heap[i],heap[smallest]);
	     heapify(heap,n,smallest);
     }
}
void delete_element(int heap[],int n){
	int last_element=heap[n-1];
	heap[0]=last_element;
	n=n-1;
	heapify(heap,n,0);
}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	for(int i=2;i<argc;i++){
		insert(atoi(argv[i]));
	}
	printf("After inserting the elements in the heap\n");
	for(int i=0;i<n;i++){
		printf("%d ",heap[i]);
	}
	printf("\n");
	delete_element(heap,n);
	printf("After deletion\n");
	for(int i=0;i<n-1;i++){
		printf("%d ",heap[i]);
	}
	return 0;
}
