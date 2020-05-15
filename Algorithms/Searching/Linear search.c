int main(){
        int n,i=0,searchElement;
        printf("Enter the no. of elements: ");
        scanf("%d",&n);
        int arr[n];
        for(;i<n;i++){
            printf("Enter the %d element: ",i+1);
            scanf("%d",&arr[i]);
        }
        printf("Enter the search Element: ");
        scanf("%d",&searchElement);
        for(i=0;i<n;i++){
            if(searchElement==arr[i]){
                printf("The element is present at the index %d",i);
                exit(1);
            }
        }
        printf("Element is not found");
}
