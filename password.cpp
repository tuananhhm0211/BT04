#include<iostream>
using namespace std;
bool ktdaonguoc(string s1,string s2)
{
    int x=s1.length();
    int y=s2.length();
    if (x==y)
    {
        for(int i=0;i<x;i++)
        {
            if(s1[i]!=s2[x-i-1]) return false;
        }
        return true;
    }
    return false;
}
int main ()
{
    int n;
    cin >> n;
    string a[n];
    for (int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n-1;i++)
    {
        int z=a[i].length();
        for(int j=i+1;j<n;j++)
        {
            if (ktdaonguoc(a[i],a[j]))
            {
                cout << z << endl;
                cout << a[i][z/2];
                break;
            }
        }
    }
    return 0;
}
