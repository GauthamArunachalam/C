void check(char a[50],char b[50],int bindex,int l2,int aindex);
int t=0;
int main(){
    char s1[50],s2[50];
    scanf("%s",s1);
    scanf("%s",s2);
    int l1=strlen(s1);
    int l2=strlen(s2);
    for(int i=0;i<l1;i++){
        check(s1,s2,0,l2,i);
    }
    if(t==0)
        printf("no");
   // printf("%s %s",s1,s2);
}
void check(char a[50],char b[50],int bindex, int l2,int aindex){
    //int t=0;
    if(bindex<l2){
        if(a[aindex]==b[bindex]){
           // printf("%d\n",bindex);
            if(bindex==l2-1){
                printf("yes");
                exit(1);
                t=1;
            }
            aindex++;
            bindex++;
            check(a,b,bindex,l2,aindex);
           // return;
        }
        else{
            return;
        }
    }//if(bindex==l2-1 && t==1){
       // printf("yes");
       // return;
    //}
    //else{
      //  printf("no");
    //}
}
