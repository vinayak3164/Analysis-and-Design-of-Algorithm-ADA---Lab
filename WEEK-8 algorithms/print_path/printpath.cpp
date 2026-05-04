#include <iostream> #include <vector> usingnamespacestd;

#defineINF100000


intmain(){ int n, e;
cout<<"Enternumberofverticesandedges:"; cin >> n >> e;

vector<vector<int>>graph(n,vector<int>(n,INF));


cout<<"Enteredges(uvw):\n"; for (int i = 0; i < e; i++) {
intu,v,w;
cin>>u>>v>>w; graph[u][v] = w;
}


intsrc;
cout<<"Entersourcevertex:"; cin >> src;

vector<int> dist(n, INF); vector<int>visited(n,0);
vector<int>parent(n,-1);


dist[src]=0;
 
for(inti=0;i<n-1;i++){ intu=-1,minDist= INF;

for(intj =0; j<n;j++){
if(!visited[j]&&dist[j]<minDist){ minDist = dist[j];
u= j;
}
}


if(u==-1)break;


visited[u]=1;


for(intv=0;v<n;v++) {
if(graph[u][v]!=INF&&!visited[v]){
if(dist[u]+graph[u][v]<dist[v]){
dist[v]=dist[u]+graph[u][v]; parent[v] = u;
}
}
}
}


cout<<"\nShortestdistancesfromsource:\n"; for (int i = 0; i < n; i++) {
cout<<"To"<<i<<"="<<dist[i]<<endl;
}


cout<<"\nPaths:\n";
 
for(inti=0;i<n;i++){ if (i == src) continue;

cout<<"Pathto"<<i<<":"; int temp = i;
vector<int>path;


while (temp != -1) { path.push_back(temp); temp = parent[temp];
}


for(intj=path.size()-1;j>=0;j--){ cout << path[j];
if(j!=0)cout<<"->";
}
cout<<endl;
}


return0;
}
