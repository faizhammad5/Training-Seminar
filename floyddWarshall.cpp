#include<bits/stdc++.h>

using namespace std;

const int INF = 99999;



vector<vi> floydWarshall (int V){ 
    int i, j, k;
    vector<vi> dist(V,vi(V)); 
    for (i = 0; i < V; i++) 
        for (j = 0; j < V; j++) 
            dist[i][j] = gr2[i][j]; 

    for (k = 0; k < V; k++) 
    { 
        for (i = 0; i < V; i++) 
        { 
            for (j = 0; j < V; j++) 
            { 
                if (dist[i][k] + dist[k][j] < dist[i][j]) 
                    dist[i][j] = dist[i][k] + dist[k][j]; 
            } 
        } 
    }
    return dist;
}