int arr[50];
void binarySearch(int low,int high,int searchElement);
int main(){
    int n,i,searchElement;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the search element: ");
    scanf("%d",&searchElement);
    binarySearch(0,n-1,searchElement);
    printf("not Found");
}
void binarySearch(int low,int high,int searchElement){
    if(low!=high){
        int mid=(low+high)/2;
        if(searchElement==arr[mid]){
            printf("Element Found at %d index",mid);
            exit(1);
        }else if(searchElement<arr[mid]){
            binarySearch(low,mid-1,searchElement);
        }else{
            binarySearch(mid+1,high,searchElement);
        }
    }
}
