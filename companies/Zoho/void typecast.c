int main(){
    void *vp;
    char ch='g',*cp="goofy";
    int j=20;
    vp=&ch;
    printf("%c",*(char *)vp);
    vp=&j;
    printf("%d",*(int *)vp);
    vp=cp;
    printf("%s",(char *)vp+3);
}
