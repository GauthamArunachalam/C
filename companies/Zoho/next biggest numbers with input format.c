int main(){
    char str[1001],temp;
    int arr[100],index=0,read=0,currRead;
    scanf("%[^\n]s",str);
    while(sscanf(&str[read],"%[^0-9]%d%n",temp,&arr[index],&currRead)>0){
        printf("%d",arr[index]);
        index++;
        read+=currRead;
    }
  //  for(int i=0;i<index;i++)
    //    scanf("%d",arr[i]);
}
