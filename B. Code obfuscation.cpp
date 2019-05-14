#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;

    char pos = 'a'-1;
    for(int i=0;i<str.size();i++) {
        if(str[i]<pos || str[i]==pos+1 || str[i]==pos) {
            pos = max(pos,str[i]);
        }
        else {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}

