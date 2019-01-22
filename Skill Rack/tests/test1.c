int main(){
    int x,y,i,j,k,t,l;
    scanf("%d %d",&x,&y);
    t=y;
    for(i=1;i<=x;i++){
            if(i%2!=0){
                for(k=0;k<x;k++){
                    printf("%d ",t++);
                }
                printf("\n");
                t=t+x-1;
                l=t;
            }
            else{
                for(k=0;k<x;k++){
                    printf("%d ",t--);
                }
                printf("\n");
                t=t+x+1;
            }
    }
}
