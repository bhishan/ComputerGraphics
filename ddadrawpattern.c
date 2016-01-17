#include<stdio.h>
#include<graphics.h>
#include<math.h>

void drawLine(int, int, int, int);

int main(){
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    drawLine(20, 20, 220, 20);
    drawLine(220, 20, 220, 220);
    drawLine(220, 220, 20, 220);
    drawLine(20, 220, 20, 20);
    drawLine(20, 70, 220, 70);
    drawLine(20, 120, 220, 120);
    drawLine(20, 170, 220, 170);
    drawLine(70, 20, 70, 220);
    drawLine(120, 20, 120, 220);
    drawLine(170, 20, 170, 220);
    drawLine(20, 20, 220, 220);
    drawLine(220, 20, 20, 220);
    drawLine(120, 20, 20, 120);
    drawLine(120, 20, 220, 120);
    drawLine(20, 120, 120, 220);
    drawLine(120, 220, 220, 120);
    getch();
    return 0;
}

void drawLine(int x1, int y1, int x2, int y2){
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
