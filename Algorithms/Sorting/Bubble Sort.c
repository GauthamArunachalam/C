/*   BUBBLE SORT   */

void input();
void bubbleSort();
void output();
void swap(int i,int j);
int arr[30],n;
int main(){
    input();
    bubbleSort();
    output();
}

void input(){
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number of elements %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void bubbleSort(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(j,j+1);
            }
        }
    }
}

void swap(int i,int j){
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void output(){
    printf("The sorted array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
