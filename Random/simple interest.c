main()
{
    int p,n;
    float r,fa;
    printf("\n\t Enter the principle amount: ");
    scanf("%d",&p);
    printf("\n\t Enter the no. of years: ");
    scanf("%d",&n);
    printf("\n\t Enter the rate of interest: ");
    scanf("%f",&r);
    fa=(p*n*r)/100;
    printf("\n\t simple inerest = %f",fa);

}
