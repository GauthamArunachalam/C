int main(){
    char str[100],maxchar;
    scanf("%s",str);
    int charcount[127]={0},maxOccurrence=0,index=0;
    char ch=str[index];
    while(ch!='\0'){
        charcount[ch]++;
        if(charcount[ch]>maxOccurrence){
            maxOccurrence = charcount[ch];
            maxchar=ch;
        }
        ch=str[++index];
    }

    printf("%c",maxchar);
}
