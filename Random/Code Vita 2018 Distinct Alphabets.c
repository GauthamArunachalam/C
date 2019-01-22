int check(char arr[],int elementIndex);
int multipleCheck(char arr[],int elementIndex);
int multiple(char arr[], int elementIndex);
int main()
{
    char inputString[40];
    scanf("%s",inputString);
    int outputValue=0;
    int inputStringLength = strlen(inputString);
    for(int i=0; i<inputStringLength; i++)
    {
        if(check(inputString,i))
        {
            outputValue++;
        }
    }

    for(int i=1; i<inputStringLength; i++)
    {
        if(multiple(inputString,i))
        {
            outputValue++;
        }
    }
    printf("The value is %d",outputValue);
}

int check(char arr[],int elementIndex)
{
    for(int i=0; i<elementIndex; i++)
    {
        if(arr[i]==arr[elementIndex])
        {
            return 0;
        }
    }
    return 1;
}

int multiple(char arr[],int elementIndex)
{
    if(multipleCheck(arr,elementIndex))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int multipleCheck(char arr[],int elementIndex)
{
    for(int i=0; i<elementIndex; i++)
    {
        if(arr[elementIndex]=='7' || arr[elementIndex]=='9')
        {
                if((arr[i]==arr[elementIndex] && (arr[i-1]%4)==(arr[elementIndex-1]%4)) || arr[elementIndex-1]%4==1)
                {
                    return 0;
                }
        }
        else
        {
            if(i!=0)
            {
                if((arr[i]==arr[elementIndex] && (arr[i-1]%3)==(arr[elementIndex-1]%3)) || arr[elementIndex-1]%3==1)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}
