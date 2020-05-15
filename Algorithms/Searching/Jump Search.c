/*       JUMP SEARCH      */

void input();
void jumpSearch(int index);
int arr[50],n,m,searchElement,flag=0;
int main()
{
    input();
    jumpSearch(0);
    printf("Element not found");
}

void input()
{
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the search element : ");
    scanf("%d",&searchElement);
    m=sqrt(n);
}

void jumpSearch(int index)
{
    if(index<n)
    {
        if(arr[index]==searchElement)
        {
            printf("Element Found at %d %d",index,arr[index]);
            exit(0);
        }
        else if(arr[index]>searchElement)
        {
            for(int i=index/2; i<index; i++)
            {
                if(arr[i]==searchElement)
                {
                    printf("Element found at %d %d",index,arr[index]);
                    exit(0);
                }
            }
        }
        else
        {
            if(flag==0)
            {
                jumpSearch(index+m-1);
                flag=1;
            }
            else
            {
                jumpSearch(index*2);
            }
        }
    }
}


