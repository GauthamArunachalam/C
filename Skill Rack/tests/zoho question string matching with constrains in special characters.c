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
}
void check(char a[50],char b[50],int bindex, int l2,int aindex){
    if(bindex<l2){
            if(b[bindex]=="\\"){
                    if(b[bindex+1]=='*'){
                        bindex++;
                    }
            }
            if(b[bindex]=='*'){
                while(b[bindex+1]!=a[aindex])
                    aindex++;
            }
        if(a[aindex]==b[bindex]){
            if(bindex==l2-1){
                printf("yes");
                exit(1);
                t=1;
            }
            aindex++;
            bindex++;
            check(a,b,bindex,l2,aindex);
        }
        else{
            return;
        }
    }
}

