#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        stack<int> st;
        st.push(0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            while (st.size() > 1 && a[st.top()] <= a[i])
                st.pop();
            cout << i - st.top() << " ";
            st.push(i);
        }
        cout << endl;
    }
}

