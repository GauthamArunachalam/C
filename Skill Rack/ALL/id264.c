#include <stdio.h>

int main()
{
    int firstNumber,secondNumber;
    scanf("%d",&firstNumber);
    scanf("%d",&secondNumber);

    printf("%d",((firstNumber%10)+(secondNumber%10)));


    return 0;
}
