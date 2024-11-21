#include <iostream>
using namespace std;

int main ()
{
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    int k,n,count=0;
    cin>>n>>k;
    int a[n];

    for(int i=0 ; i<n; i++)
    {
        cin>>a[i];
    }
    int refrence=a[k-1];
    for(int i=0 ; i<n; i++)
    {
       if (a[i]>=refrence && a[i] != 0)
        {
            cout<<a[i]<<" ";
          count++;
        }
    }
    
    cout<< count << endl;
}