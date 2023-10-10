#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int sum[t];
    for(int k=0; k<t; k++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            {
                cin>>arr[i];
            }
        int top=arr[n-1];
        int bot=arr[0];
        for(int i=0; i<n; i++)
        {
            if(top<arr[i])
            {
                top=arr[i];
            }
            if(bot>arr[i])
            {
                bot=arr[i];
            }
        }
        sum[k]=top-bot;
    }
    for(int i=0; i<t; i++)
    {
        cout<<sum[i]<<endl;
    }
    return 0;
}