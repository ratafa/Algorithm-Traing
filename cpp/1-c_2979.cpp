#include<bits/stdc++.h>
using namespace std;
int A,B,C,a,b,ret,cnt[101];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> A >> B >> C;
    for(int i=0; i<3; i++) {
        cin >> a >> b;
        for(int j=a; j<b; j++) cnt[j]++;
    }
    for(int i=1; i<100; i++) {
        if(cnt[i]) {
            if(cnt[i] == 1) ret += A;
            else if(cnt[i] == 2) ret += B * 2;
            else if(cnt[i] == 3) ret += C * 3;
        }
    }
    cout << ret << '\n';
}