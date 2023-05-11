#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    do {


        int a, b, a1, b1;
        //char x = 'x', o = 'o', z, c;
        // char x1[] = "xoo",x2[] = "oxo",x3[]="oox",x4[]="xxo",x5[]="oxx",x6[]="xox",x7[]="xxx",x8[]="ooo";

        printf("hangi satira x koymak istiyorsun?\n");
        scanf("%d", &a);
        printf("hangi sutuna x koymak istiyorsun?\n");
        scanf("%d", &b);
        hata:
        srand(time(NULL));
        a1 = rand() % 3 + 1;
        b1 = rand() % 3 + 1;
        if (a == 1 && b == 1 && a1 == 1 && b1 == 1 || a == 2 && b == 1 && a1 == 2 && b1 == 1 ||
            a == 3 && b == 1 && a1 == 3 && b1 == 1 || a == 1 && b == 2 && a1 == 1 && b1 == 2 ||
            a == 1 && b == 3 && a1 == 1 && b1 == 3 || a == 2 && b == 2 && a1 == 2 && b1 == 2 ||
            a == 2 && b == 3 && a1 == 2 && b1 == 3 || a == 3 && b == 2 && a1 == 3 && b1 == 2 ||
            a == 3 && b == 3 && a1 == 3 && b1 == 3) {
            goto hata;
        } else {

            if (a == 1 && b == 1 && a1 == 1 && b1 == 2) {
                printf("_______\n|x o  |\n|     |\n|     |\n_______\n");

            }
            else if (a == 1 && b == 1 && a1 == 1 && b1 == 3) {
                printf("_______\n|x   o|\n|     |\n|     |\n_______\n");

            }
            else if (a == 1 && b == 1 && a1 == 2 && b1 == 1) {
                printf("_______\n|x    |\n|o    |\n|     |\n_______\n");

            }
            else if (a == 1 && b == 1 && a1 == 2 && b1 == 2) {
                printf("_______\n|x    |\n|  o  |\n|     |\n_______\n");

            }else if (a == 1 && b == 1 && a1 == 2 && b1 == 3) {
                printf("_______\n|x    |\n|    o|\n|     |\n_______\n");

            }else if (a == 1 && b == 1 && a1 == 3 && b1 == 1) {
                printf("_______\n|x    |\n|     |\n|o    |\n_______\n");

            }else if (a == 1 && b == 1 && a1 == 3 && b1 == 2) {
                printf("_______\n|x    |\n|     |\n|  o  |\n_______\n");

            }
            else if (a == 1 && b == 1 && a1 == 3 && b1 == 3) {
                printf("_______\n|x    |\n|     |\n|    o|\n_______\n");

            }else if (a == 1 && b == 2) {
                printf("_______\n|  x  |\n|     |\n|     |\n_______\n");
            } else if (a == 1 && b == 3) {
                printf("_______\n|    x|\n|     |\n|     |\n_______\n");

            } else if (a == 2 && b == 1) {
                printf("_______\n|     |\n|x    |\n|     |\n_______\n");

            } else if (a == 2 && b == 2) {
                printf("_______\n|     |\n|  x  |\n|     |\n_______\n");

            } else if (a == 2 && b == 3) {
                printf("_______\n|     |\n|    x|\n|     |\n_______\n");

            } else if (a == 3 && b == 1) {
                printf("_______\n|     |\n|     |\n|x    |\n_______\n");

            } else if (a == 3 && b == 2) {
                printf("_______\n|     |\n|     |\n|  x  |\n_______\n");

            } else if (a == 3 && b == 3) {
                printf("_______\n|     |\n|     |\n|    x|\n_______\n");
            }
        }
        while (true);

    }
}