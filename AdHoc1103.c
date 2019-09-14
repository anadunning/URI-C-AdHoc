#include <stdio.h>

int main(){

    int h1, m1, h2, m2, th, tm, tt;

    while(1){

        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        if ((h1 == 0) && (m1 == 0) && (h2 == 0) && (m2 == 0)){
            break;
        }

        if (h2 > h1){
            if (m2 > m1){
                th = (h2 - h1) * 60;
                tm = (m2 - m1);
                tt = th + tm;
            }
            else if (m1 > m2){
                th = (h2 - h1 - 1) * 60;
                tm = (m2 - m1 + 60);
                tt = th + tm;
            }
            else if (m1 == m2){
                th = (h2 - h1) * 60;
                tm = 0;
                tt = th + tm;
            }
        } else if (h1 == h2){
            if (m2 > m1){
                th = 0;
                tm = (m2 - m1);
                tt = th + tm;
            }
            else if (m2 == m1){
                th = 24 * 60;
                tm = 0;
                tt = th + tm;
            }
            else if (m1 > m2){
                th = 23 * 60;
                tm = (m2 - m1 + 60);
                tt = th + tm;
            }
        } else if (h2 < h1){
            if (m2 == m1){
                th = (h2 - h1 + 24) * 60;
                tm = 0;
                tt = th + tm;
            }
            else if (m2 > m1){
                th = (h2 - h1 + 24) * 60;
                tm = m2 - m1;
                tt = th + tm;
            }
            else if (m1 > m2){
                th = (h2 - h1 + 23) * 60;
                tm = (m2 - m1 + 60);
                tt = th + tm;
            }
        }

        printf("%d\n", tt);

    }
    return 0;
}
