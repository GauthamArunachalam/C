/* Design a calculator program
    Req : 1. Obtain input and and perform arithmetic operations
          2. Indentify the input
          3. Perform Inc/Dec operation
          4. Casting*/
int valReturn(char ch);
float add(float a,float b);
float diff(float a,float b);
float product(float a,float b);
float division(float,float b);
char typefind(char str[]);
void arithmentic();
void inputType();
void incRdec();
void casting();
int main()
{
    int ch,flag=1;
    while(flag)
    {
        printf(" \n\n\t\t Basic Calculator\n");
        printf("\n\t Menu");
        printf("\n\t 1.Arithmentic Operation");
        printf("\n\t 2.Identify the input type");
        printf("\n\t 3.Perform increment or Decrement");
        printf("\n\t 4.Type Casting");
        printf("\n\t 5.Exit");

        printf("\n\n\t Enter Your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            arithmentic();
            break;
        case 2:
            inputType();
            break;
        case 3:
            incRdec();
            break;
        case 4:
            casting();
            break;
        case 5:
            flag=0;
            break;
        default:
            printf("Invalid Choice");
        }
    }
}
void arithmentic()
{
    float a,b,sum,difference,prod,q;
    int choice,ans,flag=1,n=0;
    while(flag)
    {
        if(n==0)
        {
            printf("\nEnter 2 nos.: ");
            scanf("%f %f",&a,&b);
            n++;
        }
        else if(n>0)
        {
            printf("\n Enter the number: ");
            scanf("%f",&b);
        }
        printf("\n\t Menu");
        printf("\n\t 1.Addition");
        printf("\n\t 2.Subtraction");
        printf("\n\t 3.Multiplication");
        printf("\n\t 4.Division");
        printf("\n\t 5.Exit");
        printf("\n\n\t Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            sum=add(a,b);
            ans=(int)sum;
            a=sum;
            if(ans==sum)
                printf("The sum is :%d",ans);
            else
                printf("The sum is : %.2f",sum);
            break;
        case 2:
            difference= diff(a,b);
            ans=(int)difference;
            a=difference;
            if(ans==difference)
                printf("The differnece is :%d",ans);
            else
                printf("The difference is : %.2f",difference);
            break;
        case 3:
            prod = product(a,b);
            ans=(int)prod;
            a=prod;
            if(ans==prod)
                printf("The product is :%d",ans);
            else
                printf("The product is : %.2f",prod);
            break;
        case 4:
            q = division(a,b);
            ans=(int)q;
            a=q;
            if(ans==q)
                printf("The Quotient is :%d",ans);
            else
                printf("The Quotient is : %.2f",q);
            break;
        case 5:
            flag=0;
            break;
        default:
            printf("Invalid Choice");
        }
    }
}
float add(float a,float b)
{
    return a+b;
}
float diff(float a,float b)
{
    return a-b;
}
float product(float a,float b)
{
    return a*b;
}
float division(float a,float b)
{
    return a/b;
}

void inputType()
{
    char str[100],a;
    printf("Enter the data: ");
    scanf("%s",str);
    a=typefind(str);
    switch(a)
    {
    case 'c':
        printf("\n\n\t The input type is a character");
        break;
    case 's':
        printf("\n\n\t The input type is a string");
        break;
    case 'f':
        printf("\n\n\t The input type is a float");
        break;
    case 'i':
        printf("\n\n\t The input type is an integer");
        break;
    }
}

void incRdec()
{
    float a;
    printf("Enter the input: ");
    scanf("%f",&a);
    int ch,ans;
    printf("\n\t Menu");
    printf("\n\t 1.Increment");
    printf("\n\t 2.Decrement");
    printf("\n\n\t Enter the choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        a++;
        ans=(int)a;
        if(ans==a)
        {
            printf("the incremented value is %d",ans);
        }
        else
        {
            printf("the incremented values is %.2f",a);
        }
        break;
    case 2:
        a--;
        ans=(int)a;
        if(ans==a)
        {
            printf("the incremented value is %d",ans);
        }
        else
        {
            printf("the incremented values is %.2f",a);
        }
        break;
    default:
        printf("Invalid choice");
    }
}
void casting()
{
    char str[100],toConvert[100],a;
    int var1,flag=0;
    float var2;
    char var3;
    printf("\n\n\t enter the data and to type to convert:");
    scanf("%s %s",str,toConvert);
    a=typefind(str);
    int len=strlen(str);
    if(a=='c')
    {
        var3=str[0];
        if(strcmp(toConvert,"integer")==0)
        {
            int ans=(int)var3;
            printf("\n\t The integer equalance is %d",ans);
            flag=1;
        }

    }
    else if(a=='i')
    {
        int i=0;
        var1=valReturn(str[0]);
        i=1;
        while(i<len)
        {
            int temp=valReturn(str[i]);
            var1=var1*10+temp;
            i++;
        }
        if(strcmp(toConvert,"character")==0)
        {
            char ans=(char)var1;
            printf("\n\t The character equalance is %c",ans);
            flag=1;
        }
        else if(strcmp(toConvert,"float")==0)
        {
            float ans=(float)var1;
            printf("\n\t The float equalance is %f",ans);
            flag=1;
        }
    }
    else if(a=='f')
    {
        int i=0,p=0,d=0;
        var2=valReturn(str[0]);
        i=1;
        while(i<len)
        {
            if(str[i]=='.')
            {
                p=1;
                i++;
                continue;
            }
            if(p>0)
            {
                d++;
            }
            int temp=valReturn(str[i]);
            var2=var2*10+temp;
            i++;
        }
        int ten=10;
        d--;
        while(d)
        {
            ten=ten*10;
            d--;
        }
        var2=var2/ten;
        if(strcmp(toConvert,"integer")==0)
        {
            int ans=(int)var2;
            printf("\n\t The integer equalance is %d",ans);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\n\n\t The conversion cannot be done");
    }
}
char typefind(char str[])
{
    int c=0,f=0,i=0;
    int len=strlen(str);
    while(i<len)
    {
        int ascii=(int)str[i];
        i++;
        if(ascii>=48 && ascii<=57)
        {
            continue;
        }
        else if(ascii>=97 && ascii<=122)
        {
            c+=1;
            break;
        }
        else if(ascii==46)
        {
            f+=1;
        }
    }
    //printf("\n\n\t %d",f);
    if(c==1 && len==1)
    {
        return 'c';
    }
    else if(c==1 && len>1 )
    {
       // printf("check");
        return 's';
    }
    else if(f==1 && c==0)
    {
        return 'f';
    }
    else if(f==0 && c==0)
    {
        return 'i';
    }
    else if(f>1) {
        return 's';
    }
}
int valReturn(char ch)
{
    switch(ch)
    {
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    case '0':
        return 0;
    }
}
