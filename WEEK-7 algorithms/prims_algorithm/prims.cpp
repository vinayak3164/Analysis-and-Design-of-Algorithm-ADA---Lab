#include <iostream> usingnamespacestd;

intmain(){ int n;

cout<<"Enternumberofvertices:"; cin >> n;

intcost[n][n];


cout<<"Entercostmatrix:\n"; for(int i = 0; i < n; i++) {
for(intj=0;j<n;j++){ cin >> cost[i][j];
}
}


intvisited[n]={0}; visited[0] = 1;

intedges=0,total=0;


cout<<"\nEdgesin MST:\n";


while(edges< n-1){
intmin=100000,a=-1,b=-1;


for(inti=0;i<n;i++){ if(visited[i]) {
for(intj=0;j<n;j++){
 
if(!visited[j]&&cost[i][j]){ if(cost[i][j] < min) {
min= cost[i][j];
a =i;
b= j;
}
}
}
}
}


cout<<a <<" -"<<b<<"="<<min<<endl;


total += min; visited[b]=1; edges++;
}


cout<<"Totalcost:"<<total;


return0;
}

