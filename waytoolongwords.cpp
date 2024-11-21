#include <iostream>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    int x;
    string y;
    cin>>x;
     for(int i=0; i<x; i++)
     {
        cin>>y;
     
     if((y.length()-1)>=10)
     {
    
        cout<<y[0]<<(y.length()-2)<<y[y.length()-1]<<endl;
    
     }
     else
        cout<<y<<endl;
     }
}