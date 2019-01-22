#include<stdio.h>
#include<conio.h>
int stack[101],top=-1;
void push(int val);
int pop();
int peek(int top);
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
    push(source);
    visited[source]=1;
    while(top>=0){
        int curr=pop();
        printf("%d ",curr);
        for(int col=1;col<=nodes;col++){
            if(adjMatrix[curr][col]==1 && visited[col]==0){
                push(col);
                visited[col]=1;
            }
        }
    }
}
void push(int val){
    stack[++top]=val;
}
int pop(){
    return stack[top--];
}
int peek(int top){
    return stack[top];
}
