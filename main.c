#include <stdio.h>

void calc_mcd(int r , int a , int b , int *mcd) {
    if (a > 0 && b > 0) {
        r = a % b;
        if(r == 0) {
            *mcd = b;
        } else if(r > 0) {
            *mcd = r;
        }
    } else {
        printf("Errore");
    }
}

int main() {
    int r = 0, a, b , mcd;

    printf("Inserire a: \n");
    scanf("%d", &a);
    printf("Inserire b: \n");
    scanf("%d", &b);

    calc_mcd(r , a , b , &mcd);

    printf("Mcd di a:[%d] b:[%d] e: --->[%d]<--- \n" , a , b , mcd);

    return 0;
}
