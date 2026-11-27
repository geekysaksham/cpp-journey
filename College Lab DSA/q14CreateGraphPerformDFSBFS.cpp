#include<iostream>
#include<queue>
using namespace std;
const int MAX=20;
void DFS(int graph[MAX][MAX],bool visited[],int n,int v){
    cout<<v<<" ";
    visited[v]=true;

    for(int i=0;i<n;i++)
        if(graph[v][i] && !visited[i])
            DFS(graph,visited,n,i);
}
void BFS(int graph[MAX][MAX],int n,int start){
    bool visited[MAX]={};
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        cout<<v<<" "; 
        for(int i=0;i<n;i++)
            if(graph[v][i] && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
    }
}
int main(){
    int n,e,u,v;
    int graph[MAX][MAX]={};

    cout<<"Enter Number of Vertices: ";
    cin>>n;
    if(n<=0 || n>MAX) return cout<<"Invalid Size!",0;

    cout<<"Enter Number of Edges: ";
    cin>>e;
    cout<<"Enter Edges:\n";
    for(int i=0;i<e;i++){
        cin>>u>>v;
        if(u<0 || u>=n || v<0 || v>=n)
            return cout<<"Invalid Edge!",0;
        graph[u][v]=graph[v][u]=1;
    }
    int start;
    cout<<"Enter Starting Vertex: ";
    cin>>start;
    if(start<0 || start>=n)
        return cout<<"Invalid Vertex!",0;
    bool visited[MAX]={};
    cout<<"\nDFS Traversal: ";
    DFS(graph,visited,n,start);
    cout<<"\nBFS Traversal: ";
    BFS(graph,n,start);
    return 0;
}