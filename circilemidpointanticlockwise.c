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

    x = r;
    y = 0;

    putpixel(xc + r, yc, WHITE);
    putpixel(xc - r, yc, WHITE);
    putpixel(yc + r, xc, WHITE);
    putpixel(yc - r, xc, WHITE);

    decissionparam = (5/4) - r;

    while(x > y){
        if(decissionparam < 0){
            y = y + 1;
            decissionparam = decissionparam + 2 * y + 1;
        }else{
            x = x - 1;
            y = y + 1;
            decissionparam = decissionparam + 2 * (y - x) + 1;
        }
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc - y, yc - x, WHITE);
    }
    getch();
    return 0;

}
