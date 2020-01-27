#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <graphics.h>
#include<string.h>
#include<string>
int exitt();
void game();
void intro();
char count[100];
int main()
{

    initwindow(800,600,"curse of the pongpong");
    intro();
    game();
    exitt();
    return 0;
}
