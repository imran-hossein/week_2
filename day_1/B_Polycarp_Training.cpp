#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int days = 1;
    int countDays = 0;
    for (int i = 0;i < n;i++)
    {
        if (a[i] >= days)
        {
            countDays++;
            days++;
        }

    }

    cout << countDays << endl;
    return 0;
}