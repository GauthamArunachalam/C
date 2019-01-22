/*    automoshphic number

6->36
5->25
376->141376*/
void check(int ,int );
int main(){
    int n;
    scanf("%d",&n);
    int ans = n*n;
    check(n,ans);
}

void check(int n,int ans){
    while(n>0){
        if(n%10==ans%10){
            n/=10;
            ans/=10;
        }
        else{
            printf("No");
            exit(0);
        }
    }
    printf("yes");
}
