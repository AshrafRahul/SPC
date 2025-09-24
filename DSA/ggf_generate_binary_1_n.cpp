#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    queue<string> q;
    q.push("1");
    for(int i=0; i<n; i++) {
        string s = q.front();
        q.pop();
        cout << s << endl;
        q.push(s+"0");
        q.push(s+"1");
    }

    return 0;
}
