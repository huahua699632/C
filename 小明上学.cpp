#include<iostream>
using namespace std;

int main()
{
    int r, y, g;
    int n;
    int k, t;
    int i = 0;
    int sum = 0;

    cin>>r>>y>>g;
    cin>>n;
    for(; i<=n; i++)
    {
        cin>>k>>t;
        if((k==0) || (k==1))
                sum = sum + t[i];
            else if(k==2)
                sum = sum + t[i] + r;
            else if(k==3)
                sum = sum;
    }
    cout<<sum<<endl;
}
