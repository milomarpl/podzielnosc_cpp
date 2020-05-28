#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int lzt;
    cin>>lzt;
    for(int i=0; i<lzt; i++)
    {
        int n,x,y;
        cin>>n>>x>>y;
        for(int i=2; i<n;i++)
        {
            if(i%x==0 && i%y!=0) cout<<i<<" ";
        }
        cout<<endl;

    }
    return 0;
}


