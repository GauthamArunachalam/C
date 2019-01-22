int  main(){
    int x=5,y=10;
    int *p,*q,*pp,*qq;
    p=&x;
    q=&y;
    pp=&p;
    qq=&q;
    printf("%d %d",**pp,**qq);
}
