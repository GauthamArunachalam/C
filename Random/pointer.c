
void length(char *pt);
int main(){
   char str[100];
   scanf("%s",str);
   length(str);
}

void length(char *pt){
    int count =0;
    while(*pt!='\0'){
        count++;
        pt++;
    }
    printf("%d",count);
}
