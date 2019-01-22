int main(){
    int a,b,c,diff,term,res;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d",&term);
    diff = b-a;
    res = a;
    for(int i=1;i<term;i++){
        res+=diff;
    }
    printf("%d",res);
}
