#include<stdio.h>
#include<graphics.h>
#include<math.h>

void bresenhamLessThanOne(int, int, int, int);
void bresenhamGreaterThanOne(int, int, int, int);

int main(){
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    int x1, y1, x2, y2;
    printf("Enter the value of x1 and y1 \n");
    scanf("%d %d", &x1, &y1);
    printf("Enter the value of x2 and y2 \n");
    scanf("%d %d", &x2, &y2);
    bresenhamGreaterThanOne(x1, y1, x2, y2);
    //bresenhamLessThanOne(x1, y1, x2, y2);
    getch();
    return 0;
}

void bresenhamLessThanOne(int x1, int y1, int x2, int y2){
    int delx, dely, decissionparam;
    putpixel(x1, y1, WHITE);

    delx = abs(x2 - x1);
    dely = abs(y2 - y1);

    decissionparam = 2 * dely - delx;

    for(int i = 0; i < delx; i++){
        if(decissionparam < 0){
            x1 = x1 + 1;
            decissionparam = decissionparam + 2 * dely;
        }else{
            x1 = x1 + 1;
            y1 = y1 + 1;
            decissionparam = decissionparam + 2 * dely - 2 * delx;
        }
        putpixel(x1, y1, WHITE);
    }
}

void bresenhamGreaterThanOne(int x1, int y1, int x2, int y2){
    int delx, dely, decissionparam;
    putpixel(x1, y1, WHITE);

    delx = abs(x2 - x1);
    dely = abs(y2 - y1);

    decissionparam = 2 * delx - dely;

    for(int i = 0; i < dely; i++){
        if(decissionparam < 0){
            y1 = y1 + 1;
            decissionparam = decissionparam + 2 * delx;
        }else{
            x1 = x1 + 1;
            y1 = y1 + 1;
            decissionparam = decissionparam + 2 * delx - 2 * dely;
        }
        putpixel(x1, y1, WHITE);
    }
}

