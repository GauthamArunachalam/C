int main(){
    char str[50],c;
    scanf("%[^\n]s",str);
   // printf("\n\n%s\n",str);
    int a[26]={0},sum=0,flag=0;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        a[str[i]-97] +=1;
        //printf("%c %d\n",str[i],a[i]);
    }
   // for(int i=0;i<26;i++){
   //     printf("%c %d\n",i+97,a[i]);
   // }
    //printf("\n\n");
    for(int i=0;i<26;i++){
        if(a[i]==1 && flag==0){
            c=i+97;
            flag++;
        }
        a[i]/=2;
        sum+=a[i];
        //printf("%c %d\n",i+97,a[i]);
    }
    //printf("\n%d",sum);
    char s[sum*2+1];
    int j=0,last=sum*2;
    for(int i=0;i<26;i++){
        if(a[i]>0){
            int t=a[i];
            while(t--){
                s[j]=i+97;
                s[last]=i+97;
                j++;
                last--;
            }
        }
    }
    s[last]=c;
    printf("%s %d",s,strlen(s));
}
//this is a sample text for testing
