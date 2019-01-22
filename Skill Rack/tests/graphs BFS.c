int que[101],front=-1,rear=-1;
void add(int val);
int poll();
int main(){
    int nodes,source;
    scanf("%d",&nodes);
    scanf("%d",&source);
    int adjMatrix[nodes+1][nodes+1],visited[nodes+1];
    for(int row=1;row<=nodes;row++){
        visited[row]=0;
        for(int col=1;col<=nodes;col++){
            scanf("%d",&adjMatrix[row][col]);
        }
    }
    add(source);
    visited[source]=1;
    while(front<=rear){
        int curr=poll();
        printf("%d ",curr);
        for(int col=1;col<=nodes;col++){
            if(adjMatrix[curr][col]==1 && visited[col]==0){
                add(col);
                visited[col]=1;
            }
        }
    }
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
