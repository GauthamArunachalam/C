int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=100 && marks<=200)
        printf("pass");
    else if(marks>=0 && marks<100)
        printf("fail");
    else
        printf("invalidinput");
}
