#include<iostream>
using namespace std;
bool balance(int a[],int n)
{
    if(n==1) return true;
    for(int i=0;i<n;i++)
    {
        int sum1=0,sum2=0;
        for(int j=i-1;j>=0;j--)
        {
            sum1+=a[j];
        }
        for(int z=i+1;z<n;z++)
        {
            sum2+=a[z];
        }
        if(sum1==sum2) return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        int a[x];
        for (int j=0;j<x;j++)
        {
            cin >> a[j];
        }
        if(balance(a,x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
