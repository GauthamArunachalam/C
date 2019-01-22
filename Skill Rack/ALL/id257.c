int main(){
    int number;
    scanf("%d",&number);
    if(number%3==0 && number%5==0)
        printf("ticfic");
    else if(number%3==0)
        printf("tic");
    else if(number%5==0)
        printf("fic");
}
