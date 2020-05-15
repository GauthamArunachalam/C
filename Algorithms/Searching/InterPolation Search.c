/*   Interpolation sort

mid = low+((high-low)/(arr[high]-arr[low]))*(searchElement - arr[low]);  */

int arr[50],n,searchElement,mid=-1;
void interpolationSort(int low,int high);
int main(){
    printf("InterPolation sort\n\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&searchElement);
    interpolationSort(0,n-1);
}
void interpolationSort(int low,int high){
    if(low==high || arr[low]==arr[high]){
        printf("Element not found");
        exit(0);
    }
    mid=low+((high-low)/(arr[high]-arr[low]))*(searchElement-arr[low]);
    if(arr[mid]==searchElement){
        printf("Element %d is at the index %d",searchElement,mid);
        exit(1);
    }else if(mid>=n){
        printf("Element not found");
        exit(0);
    }
    else{
        if(arr[mid]<searchElement){
            interpolationSort(mid+1,high);
        }else{
            interpolationSort(low,mid-1);
        }
    }
}
