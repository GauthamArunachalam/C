#include<stdio.h>

int main()
{
3
apple
orange
pineapple
    int N, len, characterCount[128] = {0};
    scanf("%d", &N);
    char str[100001];
    for(int ctr = 0; ctr < N; ctr++)
    {
        scanf("%s", str);
        int len = strlen(str);
        int character[128] = {0};
        for(int index = 0; index < len; index++)
        {
            if((characterCount[str[index]] == ctr ||
                characterCount[str[index]] == ctr - 1) &&
               character[str[index]] == 0)
            {
                characterCount[str[index]]++;
                character[str[index]] = 1;
            }
        }
    }
    for(int ctr = 0; ctr < 128; ctr++)
    {
        if(characterCount[ctr] == N-1 || characterCount[ctr] == N)
        {
            printf("%c", ctr);
        }
    }
}
