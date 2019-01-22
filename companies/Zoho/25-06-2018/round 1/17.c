int main(){
    char str[]="TopFresher";
    char *s1=str,*s2=str;
    int i;
    for(i=0;i<7;i++){
        printf("%c",*str);
        ++s1;
    }
    for(int i=0;i<6;i++){
        printf("%c",*s2);
        ++s2;
    }
    getchar();
}
