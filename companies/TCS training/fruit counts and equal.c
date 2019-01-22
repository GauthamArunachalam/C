int main(){
    int n;
    scanf("%d",&n);
    int fruitCount[n];
    char fruit[n];
    int appleCount=0,orangeCount=0,lastApple=0,lastOrange=0;
    for(int i=0;i<n;i++){
        scanf(" %c%d",&fruit[i],&fruitCount[i]);
        if(fruit[i]=='A'){
            appleCount+=fruitCount[i];
        }else{
            orangeCount+=fruitCount[i];
        }
    }
    scanf("%d %d",&lastApple,&lastOrange);
    appleCount+=lastApple;
    orangeCount+=lastOrange;
   // printf("%d %d\n",appleCount,orangeCount);
    if(appleCount==orangeCount){
        printf("%d %d\n",appleCount,orangeCount);
    }
    for(int i=0;i<n;i++){
        if(fruit[i]=='A'){
            appleCount-=fruitCount[i];
        }else{
            orangeCount-=fruitCount[i];
        }
        if(appleCount==orangeCount){
            printf("%d %d\n",appleCount,orangeCount);
        }
    }
}
