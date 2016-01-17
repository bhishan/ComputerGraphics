#include<stdio.h>
#include<graphics.h>
#include<math.h>

void drawLine(int, int, int, int);

int main(){
    int x1, y1, x2, y2;
    printf("Enter the value of x1 and y1: \n");
    scanf("%d %d", &x1, &y1);
    printf("Enter the value of x2 and y2: \n");
    scanf("%d %d", &x2, &y2);
    drawLine(x1, y1, x2, y2);
    getch();
    return 0;
}

void drawLine(int x1, int y1, int x2, int y2){
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    int delx, dely, steps, xinc, yinc;
    delx = abs(x2-x1);
    dely = abs(y2-y1);

    if(delx >= dely){
        steps = delx;
    }else{
        steps = dely;
    }

    xinc = delx/steps;
    yinc = dely/steps;

    for(int i = 0; i < steps; i++){
        putpixel(x1, y1, WHITE);
        x1 = x1 + xinc;
        y1 = y1 + yinc;
    }
}
