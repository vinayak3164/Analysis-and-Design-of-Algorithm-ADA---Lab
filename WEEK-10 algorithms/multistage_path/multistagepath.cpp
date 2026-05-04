#include<iostream>
 
#include<vector> #include <set>
usingnamespace std;


constintINF=10000000;


vector<set<int>>st;


voidstage(vector<vector<int>>&a){ int i = 0;

set<int> s1; s1.insert(0); st.push_back(s1);

while(i<st.size()){ set<int> s2;

for(intx:st[i]){
for(intj=0;j<a.size();j++){
if(a[x][j]!=0&&a[x][j]!=INF){ s2.insert(j);
}
}
}


if (!s2.empty()) { st.push_back(s2);
} i++;
}
 
cout<<"Stages="<<st.size()<<endl;
}


voidshortestPath(vector<vector<int>>&a,intn){ vector<int> cost(n, INF), d(n);

cost[n-1]=0;


for(inti=n-2;i>=0;i--){ for(intj =0; j<n;j++){
if(a[i][j]!=0&&a[i][j]!=INF){
if(a[i][j]+cost[j]<cost[i]){
cost[i]=a[i][j]+cost[j]; d[i] = j;
}
}
}
}


cout<<"Path:0"; int i = 0;
while(i!=n-1){ i = d[i];
cout<<i<<"";
}
cout<<endl;
}


intmain(){ int n;
 
cout<<"Enternumberofvertices:"; cin >> n;

vector<vector<int>>a(n,vector<int>(n));


for (int i = 0; i < n; i++) { for(intj=0;j<n;j++){
cin>> a[i][j];
}
}


stage(a); shortestPath(a,n);

return0;
}

