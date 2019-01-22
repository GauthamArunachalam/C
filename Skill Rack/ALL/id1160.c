int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int count;
    for(int i=x;i<=y;i++){
        if(i%7==0){
            if(i%2!=0){
                count++;
            }
        }

    }
    printf("%d",count);
}
