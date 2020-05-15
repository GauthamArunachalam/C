/*   SELECTION SORT    */

void input();
void selectionSort();
void swap(int i,int j);
void output();
int arr[50],n;
int main(){
    input();
    selectionSort();
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

void selectionSort(){
    int minIndex;
    for(int i=0;i<n-1;i++){
        minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(i,minIndex);
    }
}

void swap(int i,int j){
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void output(){
    printf("The sorted array is ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
