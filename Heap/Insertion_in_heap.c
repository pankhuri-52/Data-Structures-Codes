#include <stdio.h>
#include <stdlib.h>
int heap[100];
int heapSize=-1;
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
	return 0;
}
