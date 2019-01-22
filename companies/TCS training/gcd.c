unsigned long long int hcf(long a,long b){
    return b==0?a:hcf(b,a%b);
}

int main(){
    long a,b;
    scanf("%ld %ld",&a,&b);
    printf("%ld",hcf(a,b));
    return 0;
}
