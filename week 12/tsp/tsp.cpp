#include <iostream> usingnamespacestd;
 
intn;
intcost[10][10]; int visited[10];

inttsp(intcity,intcount,intcurrCost){ if (count == n && cost[city][0] > 0) { return currCost + cost[city][0];
}


intans= 100000;


for(inti=0;i<n; i++){
if(visited[i]==0&&cost[city][i]>0){ visited[i] = 1;
inttemp=tsp(i,count+1,currCost+cost[city][i]); if (temp < ans) {
ans=temp;
}
visited[i]=0;
}
}


returnans;
}


intmain(){
cout<<"Enternumberofcities:"; cin >> n;

cout<<"Entercostmatrix:\n";
 
for (int i = 0; i < n; i++) { for(intj=0;j<n;j++){
cin>> cost[i][j];
}
}


for(inti=0;i<n;i++){ visited[i] = 0;
}


visited[0]=1;


intresult=tsp(0,1,0);


cout<<"Minimumtravellingcost="<<result;


return0;
}



