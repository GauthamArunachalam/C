long int gcd(long int num1, long int num2){
    long int gcd, r, n, d;
    if (num1 > num2)
    {
        n = num1;
        d = num2;
    }
    else
    {
        n = num2;
        d = num1;
    }
    r = n % d;
    while (r != 0)
    {
        n = d;
        d = r;
        r= n%d;
    }
    gcd = d;
    return gcd;
}
int main()
{
    long int num , gcdn,i,count=0;
    scanf("%ld", &num);
    for(i=1; i<num; i++)
    {
        gcdn = gcd(i,num);
        if(gcdn==1){
            count++;
            printf("%ld ",i);
        }
    }
    printf("\n%ld",count);
}
