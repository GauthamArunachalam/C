int main(){
    int n,arr[100],index=1;;
    char a;
    while(scanf("%d%c",&n,&a)>0){
        arr[index]=n;
        index++;
        if(a=='\n')
            break;
    }
    for (int i=1;i<index;i++)
        printf("%d ",arr[i]);
}
