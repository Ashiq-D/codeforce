#include <iostream>
using namespace std;

int main ()
{
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    string n;
    cin>>n;
    
    for(int i=0 ; i<n.length(); i+=2)
    { 
        for(int j=i+2 ; j<n.length(); j+=2)   
        {
            if (n[i]>n[j] )
            {
                char temp=n[i];
                n[i]=n[j];
                n[j]= temp;   
            }
        }
    }
    cout<< n << endl;
}