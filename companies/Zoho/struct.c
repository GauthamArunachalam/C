int main(){
    struct xx{
        int c=3;
        char name[]="hello";

    };
    struct xx *s= (struct xx)malloc(sizeof(strut xx));
    printf("%d",s->c);
    printf("%s",s->name);

}
