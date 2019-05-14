#include<bits/stdc++.h>
using namespace std;

string s, t;

int check(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return 1;
    return 2;
}

int main()
{
    cin>>s>>t;
    if(s.size()!=t.size()){
        printf("No\n");
        return 0;
    }

    for(int i=0; i<s.size(); i++)
        if(check(s[i])!=check(t[i])){
            printf("No\n");
            return 0;
        }


    printf("Yes\n");

    return 0;
}
