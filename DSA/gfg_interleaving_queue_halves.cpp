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

    queue<int> f;
    for(int i=0; i<n/2; i++) {
        f.push(q.front());
        q.pop();
    }

    while(!f.empty()) {
        q.push(f.front());
        f.pop();
        q.push(q.front());
        q.pop();
    }

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
