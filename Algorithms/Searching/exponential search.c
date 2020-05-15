/*      EXPONENTIAL SEARCH     */
void input();
void exponentialSearch(int index);
int binarySearch(int low,int high);
int arr[50],n,size,searchElement;
int main(){
    input();
    exponentialSearch(1);
    printf("Element not found");
}

void input(){
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number of elements %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the search Element: ");
    scanf("%d",&searchElement);
}

void exponentialSearch(int index){
    if(arr[index]==searchElement){
        printf("Element found at %d",index);
        exit(1);
    }else if(arr[index]>searchElement){

            printf("Element found at %d %d",binarySearch(index/2,index),arr[binarySearch(index/2,index)]);
            exit(0);
    }else{
        exponentialSearch(index*2);
    }
}

int binarySearch(int low,int high){
    if(low!=high){
        int mid=(high+low)/2;
        if(arr[mid]==searchElement){
            return mid;
        }else if(arr[mid]>searchElement){
            binarySearch(low,mid-1);
        }else{
            binarySearch(mid+1,high);
        }
    }
}
