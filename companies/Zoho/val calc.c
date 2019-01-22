int main(){
    char s[]={'a','b','c','\n','c','\0'};
    char *p,*str,*str1;
    p=&s[3];
    str=p;
    str1=s;
    printf("%d ",++*p + ++*str1-32);
}

10
11+66=77
