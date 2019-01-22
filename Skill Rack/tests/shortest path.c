int que[101],front=-1,rear=-1;
void add(int val);
int poll();
int main(){
    int nodes,source,desti;
    scanf("%d",&nodes);
    scanf("%d %d",&source,&desti);
    int adjMatrix[nodes+1][nodes+1],visited[nodes+1],distance[nodes+1];
    for(int row=1;row<=nodes;row++){
        visited[row]=0;
        distance[row]=0;
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
                distance[col]=distance[curr]+1;
                add(col);
                visited[col]=1;
            }
        }
    }
    printf("\n");
    //printf("\n%d",distance[desti]);
    for(int i=1;i<=nodes;i++)
            printf("%d ",distance[i]);
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
