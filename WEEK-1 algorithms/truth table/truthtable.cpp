#include <iostream>
using namespace std;

void TT(int num, string prev)
{
    if(prev.size()==num)
    {
        for(int i=0; i<num; i++)
        {
            if(prev[i]=='1')
            cout<<"True\t";
            else
            cout<<"False\t";
        }
        cout<<endl;
        return;
    }
    string temp= prev+ "1";
    TT(num, temp);
    temp= prev+ "0";
    TT(num, temp);
}

int main() {
    int num;
    cout<<"Enter the Number of the Statements:-\t";
    cin>>num;
    for(int i=0; i<num; i++){
        cout<<"S"<<i+1<<"\t";
    }
    cout<<endl;
    TT(num, "");
}