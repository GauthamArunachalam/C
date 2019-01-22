int main(){
    int a=10,b=20,*p,s=0;
    p=&a;
    a++;
    (*p)++;
    s=a+b+*p;
    printf("%d\n",s);
}
