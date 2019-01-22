int main(){
    int number;
    scanf("%d",&number);
    do{
        printf("%d ",number);
        number--;
    }while(number%9!=0);
    printf("%d",number);
}
