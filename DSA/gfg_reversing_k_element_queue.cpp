#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    queue<int> q;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        q.push(x);
    }

    int k; cin >> k;
    stack<int> st;
    for(int i=0; i<n; i++) {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    for(int i=0; i<(n-k); i++) {
        q.push(q.front());
        q.pop();
    }

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
