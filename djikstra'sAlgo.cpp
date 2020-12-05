#include<bits/stdc++.h>

using namespace std;

int dijsktra(int src, int des, int n) {
	priority_queue<P, vector<P>, greater<P>> Q;
	vector<int> mindis(n + 1, INT_MAX);
	Q.push({0, src});
	while (!Q.empty()) {
		pair<int, int> tp = Q.top();
		Q.pop();
		int cur = tp.S;
		int dis = tp.F;
		if (mindis[cur] != INT_MAX) continue;
		mindis[cur] = dis;

		for (auto x : gr[cur]) {
			Q.push({mindis[cur] + x.S, x.F});
		}
	}
	return mindis[des];
}