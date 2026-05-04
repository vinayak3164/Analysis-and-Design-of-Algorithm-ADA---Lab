#include <iostream> #include<algorithm> usingnamespace std;

struct Activity
{
intstart,finish;
};
 
boolcmp(constActivity&a,constActivity&b)
{
returna.finish<b.finish;
}


intmain()
{
intn;


cout<<"Enternumberofactivities:"; cin >> n;

Activitya[n];


cout<<"Enterstartandfinishtimes:\n"; for (int i = 0; i < n; i++)
{
cin>>a[i].start>>a[i].finish;
}


sort(a,a+n,cmp);


cout<<"\nSelectedActivities:\n";


inti=0;
cout<<"("<<a[i].start<<","<<a[i].finish<<")\n";


for(intj=1;j<n;j++)
{
if(a[j].start>=a[i].finish)
 
{
cout<<"("<<a[j].start<<","<<a[j].finish<<")\n"; i = j;
}
}


return0;
}


