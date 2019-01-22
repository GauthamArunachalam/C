int main(){
    int x,y,passord;
    scanf("%d %d %d",&x,&y,&password);
    if(password%x==0 || password%y==0){
        printf("accept");
    }else{
        printf("reject");
    }
}
