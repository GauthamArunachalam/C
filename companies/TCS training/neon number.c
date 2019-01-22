/*  Neon Number

9  -> YES   => 9 square = 81  =>8+1=9
8  -> No    => 8 square = 64  =>6+4=10 */

int main(){
    int n;
    scanf("%d",&n);
    int sq = n*n;
    int sum =0;
    while(sq>0){
        sum+=sq%10;
        sq/=10;
    }
    if(n==sum)
        printf("neon");
    else
        printf("No");
}
