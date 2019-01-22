int main(){
    char *p;
    int *q;
    long *r;
    p=q=r=0;
    p++;
    q++;
    r++;
    printf("%p...%p...%p",p,q,r);
}
