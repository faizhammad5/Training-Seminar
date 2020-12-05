#include <iostream>
using namespace std;
/*
vector<int> path;
int gd=INT_MAX;
void answer(vector<vector<int> >&dist,vector<bool> visited,int src,vector<int>S,int d,vector<int>currPath){

	visited[src]=true;
	int count=0;
	for(int x:S){
		if(!visited[x]){
			count++;
			currPath.push_back(x);
			answer(dist,visited,x,S,d+dist[src][x],currPath);
			currPath.pop_back();
		}
	}
	if(count==0){
		if(d<gd){
			path=currPath;
			gd=d;
		}
	}
	visited[src]=false;
}
*/
vector<int> path;
int gd=INT_MAX;
void answer(vector<vector<int> >&dist,vector<bool> visited,int src,vector<int>des,int d,vector<int>currPath){

	visited[src]=true;
	int count=0;
	for(int x:des){
		if(!visited[x]){
			count++;
			currPath.push_back(x);
			answer(dist,visited,x,des,d+dist[src][x],currPath);
			currPath.pop_back();
		}
	}
	if(count==0){
		if(d<gd){
			path=currPath;
			gd=d;
		}
	}
	visited[src]=false;
}