#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <graphics.h>
#include<string.h>
#include<string>
#include<Windows.h>
#include<MMSystem.h>
void game();
extern char count[100];
int exitt()

{
    readimagefile("end.jpg",0,0,800,600);
    settextstyle(5, HORIZ_DIR, 5);
    outtextxy(500,225,count);
    settextstyle(0, HORIZ_DIR, 2);
    char ch;
    ch=getch();
    if(ch=='y')
    game();
    else if(ch=='n')
    exit(0);
    else exitt();


}
