//graph creation
//traffic initialisation

#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

//number-area relation file
//#define int long long int
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define vi vector<int>

const int N = 100005;

vector<P> gr[N];
int gr2[20][20];

void insert(int *u,int *v,int *w,int *traffic){             //traffic array of w.size()X2 for 2 way w[i]*traffic[i][] is defined edges practical weight
	for(int i=0;i<63;i++){
		gr[u[i]].pb({v[i],w[i]+traffic[i]});
		gr[v[i]].pb({u[i],w[i]+traffic[i]});
	}
}

int m(){
	int u[]={1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,
	            5,5,5,5,5,6,6,6,6,6,7,7,7,7,8,8,8,9,9,10,10,11,12,12,14,15,16,16,17,17,18};
	int v[]={2,3,7,10,12,13,17,20,4,5,6,7,8,11,14,16,18,5,7,9,10,13,15,17,19,5,8,10,11,13,18,20,
	            7,10,14,17,19,8,11,15,18,20,10,11,12,16,11,12,14,13,15,14,17,20,14,16,18,20,17,19,19,20,20};
	int w[]={42,68,35,1,70,25,79,59,63,65,6,46,82,28,62,92,96,43,28,37,92,5,3,54,93,83,22,17,19,96,48,27,72,39,
		       70,13,68,100,36,95,4,12,23,34,74,65,42,12,54,69,48,45,63,58,38,60,24,42,30,79,17,36,91};
	int traffic[]={0,2,3,8,11,4,1,1,8,12,11,2,10,17,9,12,19,19,6,17,13,18,10,17,16,13,13,9,17,
		           5,6,12,6,16,16,6,10,11,3,15,4,3,2,15,19,11,12,8,13,12,9,1,12,3,11,11,16,3,16,14,18,15,17};
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)            //vector<vector<int>> gr2(u.size()+1,vector<int>(v.size()+1,INT_MAX));
		{
			gr2[i][j]=9999;
			if(i==j)
				gr2[i][j]=0;		              //int **gr2 = new int*[u.size()];
		}                                         // for(int i=0;i<u.size();i++){ gr[i]=new int[v.size()+1]};
	}
	for(int i=0;i<63;i++)
	{
		gr2[u[i]-1][v[i]-1]=w[i]+traffic[i];
		gr2[v[i]-1][u[i]-1]=w[i]+traffic[i];
	}
	insert(u,v,w,traffic);
	return 0;
}