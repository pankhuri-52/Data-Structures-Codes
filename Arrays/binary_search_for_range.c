int lowerIndex(int arr[],int n,int x){
     int l=0;
     int h=n-1;
     while(l<=h){
         int mid=(l+h)/2;
         if(arr[mid]>=x)
          h=mid-1;
         else {
            l=mid+1;
         }
     }
     return l;
 }
 int upperIndex(int arr[],int n,int y){
     int l=0;
     int h=n-1;
     while(l<=h){
         int mid=(l+h)/2;
         if(arr[mid]<=y)
           l=mid+1;
           else
              h=mid-1;
     }
     return h;
 }
 int countInRange(int arr[],int n,int x,int y){
     int count=0;
     count=upperIndex(arr,n,y)-lowerIndex(arr,n,x)+1;
     return count;
 }
 void swap(int *a,int *b){
     int temp=*a;
     *a=*b;
     *b=temp;
 }
 int partition(int arr[],int low,int high){
     int pivot=arr[high];
     int i=(low-1);
     for(int j=low;j<=high;j++){
         if(arr[j]<pivot){
             i++;
             swap(&arr[i],&arr[j]);
         }
     }
     swap(&arr[i+1],&arr[high]);
     return (i+1);
 }
 void quickSort(int arr[],int low,int high){
     if(low<high){
         int pi=partition(arr,low,high);

         quickSort(arr,low,pi-1);
         quickSort(arr,pi+1,high);
     }
 }
int* jobOffers(int scores_size, int* scores, int lowerLimits_size, int* lowerLimits, int upperLimits_size, int* upperLimits, int* result_size) {
    int *a=malloc(scores_size*sizeof(int));
    int i=0;
    int x=0;
    int count=0;
    quickSort(scores,0,scores_size-1);
    while(i<lowerLimits_size && i<upperLimits_size){
        int res=countInRange(scores,scores_size,lowerLimits[i],upperLimits[i]);
        i++;
        a[x++]=res;
    }
    *result_size=x;
    return a;
 }

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    int* res;
int res_size;
    int scores_size = 0;
    scanf("%d\n", &scores_size);

    int scores[scores_size];
    for(int i = 0; i < scores_size; i++) {
        int scores_item;
        scanf("%d", &scores_item);
        scores[i] = scores_item;
    }

    int lowerLimits_size = 0;
    scanf("%d\n", &lowerLimits_size);

    int lowerLimits[lowerLimits_size];
    for(int i = 0; i < lowerLimits_size; i++) {
        int lowerLimits_item;
        scanf("%d", &lowerLimits_item);
        lowerLimits[i] = lowerLimits_item;
    }

    int upperLimits_size = 0;
    scanf("%d\n", &upperLimits_size);

    int upperLimits[upperLimits_size];
    for(int i = 0; i < upperLimits_size; i++) {
        int upperLimits_item;
        scanf("%d", &upperLimits_item);
        upperLimits[i] = upperLimits_item;
    }

    res = jobOffers(scores_size, scores, lowerLimits_size, lowerLimits, upperLimits_size, upperLimits, &res_size);
    for (int res_i = 0; res_i < res_size; res_i++) {

        fprintf(f, "%d\n", res[res_i]);

    }


    fclose(f);
    return 0;
}

