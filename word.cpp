#include <iostream>
using namespace std;

int main ()
{
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    
    int countU=0;
    int countL=0;
    string n;
    cin>>n;
    
    for(int i=0 ; i<n.length(); i++)
    { 
        if (n[i] >= 'A' && n[i] <= 'Z' )
            {
              countU++;   
            }
        else if(n[i] >= 'a' && n[i] <= 'z' )
            {
              countL++;   
            }
        
    }
    if (countU > countL)
    {
        for(int i=0 ; i<n.length(); i++)
        {
            cout<<(char)toupper(n[i]);
            
        }
    }
    else if (countU <= countL)
    {
          for(int i=0 ; i<n.length(); i++)
        {
            cout<<(char)tolower(n[i]);
            
        }
    }

}