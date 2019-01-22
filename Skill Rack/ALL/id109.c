int main(){
    int from,to;
    scanf("%d %d",&from,&to);
    for(int currentvalue=from;currentvalue<=to;currentvalue){
        if(currentvalue%2==0)
            continue;
        else
            printf("%d ",currentvalue);
    }
}
