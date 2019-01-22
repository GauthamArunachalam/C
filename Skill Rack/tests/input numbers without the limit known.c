//int main(){
//    int index=0,arr[100];
//    while(scanf("%d",&arr[index])>0){
//        index++;
//    }
//}

int main(){
    char str[1001];
    int arr[100],index=0;
    scanf("%[^\n]s",str);
    int read=0,currRead;
    while(sscanf(&str[read],"%d%n",&arr[index],&currRead)>0){
        printf("%d\n",arr[index]);
        index++;
        read+=currRead;
    }
}
