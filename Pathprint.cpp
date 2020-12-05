#include<bits/stdc++.h>

using namespace std;

#define INF (unsigned)!((int)0)

const int MAX=2e4;
bool visit[MAX];
int dist[MAX];

multiset<pair<int,int>> s;
int parent[MAX]; 

void pathing(int source_node,int dest_node){
	memset(visit,false,sizeof(visit));
    memset(dist,INF,sizeof(dist));
    memset(parent,-1,sizeof(parent));

    dist[source_node]=0;
    s.insert(make_pair(0,source_node));

    while(!s.empty()){
        pair<int,int> elem=*s.begin();
        s.erase(s.begin());
        int node=elem.second;
        if(visit[node])continue;
        visit[node]=true;
        for(auto i=0;i<gr[node].size();++i){
            int dest=gr[node][i].first;
            int w=gr[node][i].second;
            if(dist[node]+w<dist[dest]){
                dist[dest]=dist[node]+w;
                parent[dest]=node;
                s.insert(make_pair(dist[dest],dest));
            }
        }
    }


    int node_for_path=dest_node;
    stack<int> path;
    while(parent[node_for_path]!=source_node){
        path.push(node_for_path);
        node_for_path=parent[node_for_path];
    }
    path.push(node_for_path);
    path.push(source_node);
    cout<<"Shortest Path from "<<source_node<<" to "<<dest_node<<":"<<endl;
    while(!path.empty()){
        if(path.size()==1) cout<<path.top();
        else cout<<path.top()<<"->";
        path.pop();
    }
}