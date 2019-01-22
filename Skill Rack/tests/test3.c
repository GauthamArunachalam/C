int main(){
    char s[1000],ans[1000];
    int l,i,j,l1;
    scanf("%s",&s);
    l=strlen(s);
    for(i=0; i<l; i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
		s[i]=='o' || s[i]=='u' || s[i]=='A' ||
		s[i]=='E' || s[i]=='I' || s[i]=='O' ||
		s[i]=='U')
		{
			for(j=i; j<l; j++)
			{
				s[j]=s[j+1];
			}
		l--;
		}
	}
	j=l-1;
	l1=0;
	for(i=0;i<l;i++){
        if(i%2==0){
            ans[i]=s[l1];
            l1++;
        }
        else{
            ans[i]=s[j];
            j--;
        }
	}
	printf("%s",ans);
}
