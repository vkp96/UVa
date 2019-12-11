/*
*11498 Division of Nlogonia
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    int x, y;
    int d1, d2;
    scanf("%d", &n);
    while(n != 0) {
        scanf("%d %d", &d1, &d2);
        while(n--) {
            scanf("%d %d", &x, &y);
            if(x == d1 || y == d2){
                printf("divisa\n");
            } else {
                if(x < d1) {
                    if(y < d2) {
                        printf("SO\n");
                    } else {
                        printf("NO\n");
                    }
                } else {
                    if(y < d2) {
                        printf("SE\n");
                    } else {
                        printf("NE\n");
                    }
                }
            }
        }
        scanf("%d", &n);
    }
    return 0;
}