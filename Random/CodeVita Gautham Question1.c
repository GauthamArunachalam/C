int n,arr[30],countValue=0,doubleJumpFlag=0;
void input();
void output();
void process(int index);
int main(){
    input();
    process(0);
}

void input(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==n-1){
            scanf("%d",&arr[i]);
        }else{
        scanf("%d,",&arr[i]);
        }
    }
}

void process(int index){
    if(index>=n-1){
        printf("\n\n\n%d",countValue);
        exit(1);
    }

    if(doubleJumpFlag==0){
        if(arr[index]>(arr[index+1]*2) && arr[index]>(arr[index+2]*3)){
            countValue+=arr[index];
            //printf("%d\n",countValue);
            process(index+1);
        }else if((arr[index+1]*2)>arr[index] && (arr[index+1]*2)>(arr[index+2]*3)){
            countValue+=(arr[index+1]*2);
            //printf("%d\n",countValue);
            process(index+2);
        }
        else if((arr[index+2]*3)>arr[index] && (arr[index+2]*3)>(arr[index+2]*2)){
            countValue+=(arr[index+2]*3);
            doubleJumpFlag=1;
           // printf("FUCK %d\n",countValue);
            process(index+2);
        }
    }else{
        if(arr[index]>(arr[index+1]*2)){
            countValue+=(arr[index]);
           // printf("%d\n",countValue);
            process(index+1);
        }
        else{
            countValue+=(arr[index+1]*2);
            //printf("%d\n",countValue);
            process(index+2);
        }
    }


}


