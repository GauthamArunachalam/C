int main(){
    int arr[5][5]={{1,3,4,6,2},{3,5,8,9,0},{1,7,3,2,4},{2,3,1,4,2},{6,4,3,2,1}};
    int vis[5][5]={0};
    int favSum;
    scanf("%d",&favSum);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]+arr[i][j+1]==favSum){
                if(vis[i][j]==0 && vis[i][j+1]==0){
                    printf("%d %d\n",arr[i][j],arr[i][j+1]);
                    vis[i][j]+=1;
                    vis[i][j+1]+=1;
                }
                else if(vis[i][j]!=vis[i][j+1]){
                    printf("%d %d\n",arr[i][j],arr[i][j+1]);
                    vis[i][j]+=1;
                    vis[i][j+1]+=1;
                }
            }
            if(arr[i][j]+arr[i][j-1]==favSum){
                if(vis[i][j]==0 && vis[i][j-1]==0){
                    printf("%d %d\n",arr[i][j],arr[i][j-1]);
                    vis[i][j]+=1;
                    vis[i][j-1]+=1;
                }
                else if(vis[i][j]!=vis[i][j-1]){
                    printf("%d %d\n",arr[i][j],arr[i][j-1]);
                    vis[i][j]+=1;
                    vis[i][j-1]+=1;
                }
            }
            if(arr[i][j]+arr[i+1][j]==favSum){
                if(vis[i][j]==0 && vis[i+1][j]==0){
                    printf("%d %d\n",arr[i][j],arr[i+1][j]);
                    vis[i][j]+=1;
                    vis[i+1][j]+=1;
                }
                else if(vis[i][j]!=vis[i+1][j]){
                    printf("%d %d\n",arr[i][j],arr[i+1][j]);
                    vis[i][j]+=1;
                    vis[i+1][j]+=1;
                }
            }
            if(arr[i][j]+arr[i+1][j+1]==favSum){
                if(vis[i][j]==0 && vis[i+1][j+1]==0){
                    printf("%d %d\n",arr[i][j],arr[i+1][j+1]);
                    vis[i][j]+=1;
                    vis[i+1][j+1]+=1;
                }
                else if(vis[i][j]!=vis[i+1][j+1]){
                    printf("%d %d\n",arr[i][j],arr[i+1][j+1]);
                    vis[i][j]+=1;
                    vis[i+1][j+1]+=1;
                }
            }
            if(arr[i][j]+arr[i+1][j-1]==favSum){
                if(vis[i][j]==0 && vis[i+1][j-1]==0){
                    printf("%d %d\n",arr[i][j],arr[i+1][j-1]);
                    vis[i][j]+=1;
                    vis[i+1][j-1]+=1;
                }
                else if(vis[i][j]!=vis[i+1][j-1]){
                    printf("%d %d\n",arr[i][j],arr[i+1][j-1]);
                    vis[i][j]+=1;
                    vis[i+1][j-1]+=1;
                }
            }
        }
    }
}
