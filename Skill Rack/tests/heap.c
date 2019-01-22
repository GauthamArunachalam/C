#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

void buildMaxHeap(int arr[],int size);
void maxHeapify(int arr[],int size,int parent);

void shiftUp(int arr[], int curr){
    if(curr != 0){
        int parent = (curr-1)/2;

        if(arr[curr] > arr[parent]){
            int temp = arr[curr];
            arr[curr] = arr[parent];
            arr[parent] = temp;

            shiftUp(arr, parent);
        }
    }
}

void insert(int arr[], int *size, int val){
    if((*size) + 1 <= SIZE){
        (*size)++;
        arr[(*size)-1] = val;
        shiftUp(arr, (*size)-1);
    }
}

int main(){
    int n, value;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    buildMaxHeap(a,n);
    int n1=n;
    for(int i=0;i<n1;i++){
    if(n>0){
        printf("%d ",a[0]);
        a[0]=a[n-1];
        n--;
        maxHeapify(a,n,0);
    }
    }

    printf("\nEnter a new value:");

    scanf("%d",&value);

    insert(a, &n, value);

    for(int i = 0; i < n+1; i++){
        printf("%d ",a[i]);
    }

}
void buildMaxHeap(int arr[],int size){
    int index;
    for(index=size/2-1;index>=0;index--)
        maxHeapify(arr,size,index);
}
void maxHeapify(int arr[], int size, int parent){
    int largest=parent;
    if(2*parent+1<size){
        if(arr[largest]<arr[2*parent+1])
            largest=(2*parent)+1;
    }
    if(2*parent+2<size){
        if(arr[largest]<arr[2*parent+2])
            largest=(2*parent)+2;
    }
    if(largest!=parent){
        int temp = arr[parent];
        arr[parent]=arr[largest];
        arr[largest]=temp;
        maxHeapify(arr,size,largest);
    }


}
