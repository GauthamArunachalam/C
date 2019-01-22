int que[101],front=-1,rear=-1;
void add(int val);
int poll();
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1][n+1],visited[n+1];
    for(int row=1;row<=nodes;row++){
        visited[row]=0;
        for(int col=1;col<=nodes;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    void BFS()
}
void add(int val){
    if(front==-1 && rear==-1){
        que[++front]=val;
        ++rear;
    }else{
        que[++rear]=val;
    }
}
int poll(){
    return que[front++];
}
