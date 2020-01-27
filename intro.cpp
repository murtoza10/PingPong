#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <graphics.h>
#include<string.h>
#include<string>
#include<Windows.h>
#include<MMSystem.h>
void intro(void)
{
    char d;
    readimagefile("title.jpg",0,0,800,600);
    delay(3000);
    cleardevice();
    sndPlaySound("Tower-of-Paradise",SND_ASYNC);
    readimagefile("intro.jpg",0,0,800,600);
    getch();
    while(1){
    readimagefile("story.jpg",0,0,800,600);
    d=getch();
    int fl=0;
    if(d=='p')fl=1;
    if(fl==1)break;
    else if(d=='e')exit(0);
    else continue;
    }
   readimagefile("loading.jpg",0,0,800,600);
    delay(500);
    int i;
    for(i=0;i<10;i++)
    {
        readimagefile("1e.jpg",520,240,590,310);
        delay(100);
        readimagefile("2e.jpg",520,240,590,310);
        delay(100);
        readimagefile("3e.jpg",520,240,590,310);
        delay(100);
        readimagefile("4e.jpg",520,240,590,310);
        delay(100);
    }
    cleardevice();
    sndPlaySound("choco.wav",SND_ASYNC);
    return;

}
