#include <iostream> usingnamespacestd;

intmain(){ int n;

cout<<"Enternumberofvertices:"; cin >> n;

intgraph[n][n];


cout<<"Enteradjacencymatrix:\n"; for(int i = 0; i < n; i++) {
for(intj=0;j<n;j++){ cin >> graph[i][j];
}
}


intsrc;
 
cout<<"Entersourcevertex:"; cin >> src;

int dist[n];boolvisited[n];

for(inti=0;i<n;i++){ dist[i] = 100000; visited[i] = false;
}


dist[src]=0;


for(intcount=0;count<n -1;count++){


intmin=100000,u;


for(int i = 0; i < n; i++) { if(!visited[i]&&dist[i]<min){
min=dist[i]; u = i;
}
}


visited[u]=true;


for(int v = 0; v < n; v++) { if(!visited[v]&&graph[u][v]&&
dist[u]+graph[u][v]<dist[v]){


dist[v]=dist[u]+graph[u][v];
 
}
}
}


cout<<"\nShortestdistancesfromsource:\n"; for(int i = 0; i < n; i++) {
cout<<"To"<<i<<"="<<dist[i]<<endl;
}


return0;
}
