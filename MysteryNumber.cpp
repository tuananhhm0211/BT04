#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],b[n+1];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n+1;i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i <= n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (b[i] == a[j])break;
        }
        if (j == n) cout << b[i];
    }
    return 0;
}
