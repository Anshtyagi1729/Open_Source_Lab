#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    for (int i=0 ;i<n;i++)
    {
        for (int j=n;j>0;j--)
        {
            if(i>2 && i<n-j)
            {
                 cout<<"*";
            }

        }
        cout<<endl;
    }
}
