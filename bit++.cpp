#include <iostream>
using namespace std;

int main ()
{
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    int k;
    cin>>k;
    string n;
    int X= 0;

    for(int i=0 ; i<k; i++)
    {
        cin>>n;

       if ((n[0]=='+'&&n[1]=='+'&&n[2]=='X' )||(n[0]=='X'&&n[1]=='+'&&n[2]=='+' ) )
        {
            ++X;
        }
        else if((n[0]=='-'&&n[1]=='-'&&n[2]=='X' )||(n[0]=='X'&&n[1]=='-'&&n[2]=='-' ) )
        {
            --X;
        }
    }
    cout<< X << endl;
}