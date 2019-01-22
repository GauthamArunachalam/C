
int main(){
    char names[10][100];
    int len[10];
    for(int i=0;i<5;i++){
        scanf("%s",names[i]);
        len[i]=strlen(names[i]);
    }
    for(int i=0;i<5;i++){
        printf("%s %d",names[i],len[i]);
    }
}
