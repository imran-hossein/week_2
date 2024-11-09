#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 1;i <= n;i++)
        {
            int x;cin >> x;
            mp[x].insert(i);
        }

        for (int i = 0;i < m;i++)
        {
            int l, r;
            cin >> l >> r;
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end())
            {

                cout << "NO" << endl;
            }
            else {
                int leftMost = *mp[l].begin();
                int rightMost = *mp[r].rbegin();
                if (leftMost < rightMost)
                {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
        }

    }
    return 0;
}