#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,highest = 0,lowest = 0;

    cin >> n;
    for(int h = 0,l = INT_MAX, a,i = 0; i < n; i++){
        cin >> a;
        if(i == 0) h = l = a;
        else if(a > h){
            h = a;
            highest++;
        }
        else if(a < l){
            l = a;
            lowest++;
        }
    }
    cout << highest << " " << lowest << endl;
    return 0;
}
