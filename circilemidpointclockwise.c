#include<stdio.h>
#include<graphics.h>

int main(){
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    int xc, yc, r, x, y;
    float decissionparam;
    printf("Enter the center of the circle: \n");
    scanf("%d %d", &xc, &yc);
    printf("Enter the radius of the circle: \n");
    scanf("%d", &r);
    x = 0;
    y = r;
    putpixel(xc + r, yc, WHITE);
    putpixel(xc - r, yc, WHITE);
    putpixel(xc, yc + r, WHITE);
    putpixel(xc, yc - r, WHITE);
    decissionparam = 1 - r;

    while(x < y){
        if(decissionparam < 0){
            x = x + 1;
            decissionparam = decissionparam + 2 * x + 1;
        }else{
            x = x + 1;
            y = y - 1;
            decissionparam = decissionparam + 2 * (x - y) + 1;
        }
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc - y, yc - x, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc -y , yc + x, WHITE);
    }
    getch();
    return 0;
}
