int main(){
    int inputNumber;
    scanf("%d",&inputNumber);
    int counter=1;
    for(;counter<=inputNumber;counter++){
        if(counter%2==0)
            continue;
        printf("%d",counter);
    }
}
