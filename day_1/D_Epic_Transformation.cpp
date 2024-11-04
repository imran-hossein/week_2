#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int>freq;
        for (int i = 0;i < n;i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int maxFreq = 0;

        for (auto element : freq)
        {
            maxFreq = max(maxFreq, element.second);
        }

        if (maxFreq > n / 2)
        {
            cout << 2 * maxFreq - n << endl;
        }
        else cout << n % 2 << endl;


    }
    return 0;
}