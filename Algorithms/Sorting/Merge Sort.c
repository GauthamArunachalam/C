/*   MERGE SORT   */

void input();
void output();
void mergeSort(int low,int high);
void merge(int low,int mid,int high);
int arr[30],n;
int main(){
    input();
    mergeSort(0,n-1);
}

void input(){merge()
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for9int i=0;i<n;i++){
        printf("Enter the number of elements %d : ",i+1);
        scanf("%d",&arr[i]);
    }
}

void mergeSort(int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(low,mid);
        mergeSort(mid+1,high);
        merge(low,mid,high);
    }
}
 void merge(int low,int mid,int high){
    int l1,l2,i;

}

