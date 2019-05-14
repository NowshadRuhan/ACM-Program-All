#include <stdio.h>

void update(int *a,int *b) {

            int a1 ;
            a1 = *a+*b;
            *b = *b-*a;
            *b = abs(*b);
            *a = a1;



}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

