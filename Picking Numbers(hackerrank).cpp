#include<bits/stdc++.h>
using namespace std;

int main() {
   int n,k,max = 0;
    cin>>n;
    int a[100]={0};
    for(int i = 0;i<n;i++){
        cin>>k;
        a[k]++;
    }
    for(int i = 0;i<n-1;i++){
        if(a[i]+a[i+1]> max) max = a[i]+a[i+1];
    }
    cout<<max<<endl;
    return 0;
}
