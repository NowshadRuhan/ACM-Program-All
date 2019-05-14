#include<stdio.h>
#include<string.h>
int check(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return 1;
    return 2;
}

int main()
{
    char s[1000],t[1000];
    scanf("%s %s", s,t);

    if(strlen(s)!=strlen(t)) {
        printf("No\n");
        return 0;
    }

    for(int i=0; i<strlen(s); i++){
        if(check(s[i])!=check(t[i])) {
            printf("No\n");
            return 0;
        }

    }
    printf("Yes\n");
    return 0;
}
