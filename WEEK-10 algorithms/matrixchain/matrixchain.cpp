#include <iostream> #include <vector> usingnamespacestd;
 
voidoptSol(vector<vector<int>>&s,inti,intj)
{
if(i ==j)
{
cout<<"A"<<i; return;
}
cout <<"("; optSol(s,i,s[i][j]);
optSol(s,s[i][j]+1,j); cout <<")";
}


intmain()
{
intn;
cout<<"Enternumberofmatrices:"; cin >> n;

vector<int>p(n);
for(inti=0;i <n;i++)
{
cin>>p[i];
}


vector<vector<int>>m(n,vector<int>(n,0)); vector<vector<int>> s(n, vector<int>(n, 0));

for(intlen=2;len<n;len++)
{
for(inti =1;i<n-len+1; i++)
 
{
int j = i + len - 1; m[i][j]=10000000;

for(intk=i;k<j;k++)
{
intcost=m[i][k]+m[k+1][j]+ p[i -1]*p[k]* p[j];


if(cost<m[i][j])
{
m[i][j]=cost;
s[i][j]=k;
}
}
}
}


cout<<"Minimumcost="<<m[1][n -1]<<endl;


cout<<"Order:"; optSol(s,1,n-1); cout << endl;

return0;
}

