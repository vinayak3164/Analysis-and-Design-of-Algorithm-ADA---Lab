#include <iostream> usingnamespacestd;

intknapsack(intwt[],intval[],intn,intW){


if(n==0||W==0) return 0;

if(wt[n-1]>W)
returnknapsack(wt,val,n-1,W);


else{
inttake=val[n-1]+knapsack(wt,val,n-1,W-wt[n-1]); int skip = knapsack(wt, val, n-1, W);
returnmax(take,skip);
}
}


intmain(){ intn,W;

cout<<"Enternumberofitems:"; cin >> n;
 
intwt[n],val[n];


cout<<"Enterweights:\n"; for(int i = 0; i < n; i++) {
cin>>wt[i];
}


cout<<"Entervalues:\n"; for(int i = 0; i < n; i++) {
cin>>val[i];
}


cout<<"Entercapacity:"; cin >> W;

intresult=knapsack(wt,val,n,W);


cout<<"MaximumProfit:"<<result;


return0;
}

