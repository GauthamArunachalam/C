/*   INSERTION SORT   */

void input();
void insertionSort();
void output();
int arr[30],n;
int main(){
    input();
    insertionSort();
    output();
}

void input(){
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void insertionSort(){
    int valueToInsert,insertionPosition;
    for(int i=0;i<n;i++){
        valueToInsert = arr[i];
        insertionPosition = i;
        while(insertionPosition>0 && arr[insertionPosition-1]>valueToInsert){
            arr[insertionPosition] = arr[insertionPosition-1];
            insertionPosition--;
        }
        arr[insertionPosition] = valueToInsert;
    }
}

void output(){
    printf("The sorted array is ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
