#include <iostream> usingnamespacestd;

intparent[100];


int find(int i) { while(parent[i]!=i)
i=parent[i]; return i;
}


voidunionSet(inta,intb){
 
parent[a]=b;
}


intmain(){ int n;

cout<<"Enternumberofvertices:"; cin >> n;

intcost[n][n];


cout<<"Entercostmatrix:\n"; for(int i = 0; i < n; i++) {
for(intj=0;j<n;j++){ cin >> cost[i][j];
}
}


// initialize parent for(inti=0;i<n;i++)
parent[i]=i;


intedges=0,total=0;


cout<<"\nEdgesin MST:\n";


while(edges< n-1){
intmin=100000,u=-1,v= -1;


// find minimum edge for(inti=0;i<n;i++){
 
for(intj=0;j<n;j++){
if(cost[i][j]<min&&cost[i][j]!=0){ min = cost[i][j];
u=i; v= j;
}
}
}


inta=find(u); intb=find(v);

if(a!=b) {
cout<<u<<" -"<<v<<"="<<min<<endl; total += min;
unionSet(a,b); edges++;
}


cost[u][v]=cost[v][u]=100000;//markused
}


cout<<"Totalcost:"<<total;


return0;
}
