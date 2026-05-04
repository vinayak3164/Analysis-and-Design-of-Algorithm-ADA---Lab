#include <iostream>
 #include <vector> 
 using namespace std;

struct Coord
{
double x, y;
};


double findTurn(const Coord &p1,const Coord &p2,const Coord &p3)
{
return(p2.x-p1.x)*(p3.y-p1.y)-
(p2.y-p1.y)*(p3.x-p1.x);
}


bool isInside(const Coord&p1,const Coord&p2, const Coord &p3, const Coord &check)
{


doublet1=findTurn(p1,p2,check); doublet2=findTurn(p2,p3,check); doublet3=findTurn(p3,p1,check);
 
bool positive = (t1 > 0) ||(t2 > 0) || (t3 > 0); boolnegative=(t1<0)||(t2<0)||(t3<0);

return!(positive&&negative);
}


intmain()
{
inttotal;
cout<<"Entertotalpoints:"; cin >> total;

vector<Coord>arr(total);


cout<<"Entercoordinates(xy):\n"; for (int i = 0; i < total; i++)
{
cin>>arr[i].x>>arr[i].y;
}


vector<bool>hullPoint(total,true);


for(inta=0;a<total;a++)
{


for(intb=0;b<total;b++)
{
if (b == a) continue;
 
for(intc=b+1;c<total;c++)
{
if (c == a) continue;

for(intd=c+1;d<total;d++)
{
if (d == a) continue;

if(isInside(arr[b],arr[c],arr[d],arr[a]))
{
hullPoint[a]=false; break;
}
}
if(!hullPoint[a]) break;
}
if(!hullPoint[a]) break;
}
}


cout<<"\nPointsonConvexHull:\n"; for (int i = 0; i < total; i++)
{
if(hullPoint[i])
{
cout<<arr[i].x<<""<<arr[i].y<<endl;
}
 
}


return0;
}
