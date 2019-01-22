/*Mirror Reflection*/
int main(){
    int n;
    printf("Enter the number of Strings: ");
    scanf("%d",&n);
    char names[n][100];
    for(int i=0;i<n;i++){
        printf("\nEnter the name %d: ",i+1);
        scanf("%s",names[i]);
    }
    for(int i=0;i<n;i++){
        int l=strlen(names[i]);
        for(int j=0;j<l;j++){
            if(i%2==0){
                if(j%2==0){
                    printf("%c",toupper(names[i][j]));
                }else{
                    printf("%c",tolower(names[i][j]));
                }
            }else{
                if(j%2!=0){
                    printf("%c",toupper(names[i][j]));
                }else{
                    printf("%c",tolower(names[i][j]));
                }
            }
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;i--){
        int l=strlen(names[i]);
        for(int j=0;j<l;j++){
            if(i%2!=0){
                if(j%2==0){
                    printf("%c",toupper(names[i][j]));
                }else{
                    printf("%c",tolower(names[i][j]));
                }
            }else{
                if(j%2!=0){
                    printf("%c",toupper(names[i][j]));
                }else{
                    printf("%c",tolower(names[i][j]));
                }
            }
        }
        printf("\n");
    }


}
