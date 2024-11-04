#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    vector<int> distinctCount(n + 1);
    map<int, bool>seen;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = n;i >= 1;i--)
    {
        if (!seen[a[i]])
        {
            seen[a[i]] = true;
            count++;
        }
        distinctCount[i] = count;
    }

    for (int j = 0;j < m;j++)
    {
        int li;
        cin >> li;
        cout << distinctCount[li] << endl;
    }
    return 0;
}