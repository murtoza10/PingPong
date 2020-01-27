
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<Windows.h>
#include<MMSystem.h>
int exitt();
using namespace std;
void squish(int x,int y)
{
    char *wav2="squish.wav";
    int x1=x+90,y1=y+90;
    readimagefile("squish1.jpg",0,0,800,600);
    readimagefile("bsplash.jpg",x,y,x1,y1);
    sndPlaySound(wav2, SND_ASYNC);
    delay(3500);
    exitt();

}
