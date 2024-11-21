#include <iostream>
using namespace std;

int main ()
{
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    int x,y;
    cin>>x>>y;
    
    int z=2;

    int result = (x*y)/z;

    cout<<result;
 
}