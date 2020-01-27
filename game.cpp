#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <graphics.h>
#include<string.h>
#include<string>
#include<Windows.h>
#include<MMSystem.h>
int exitt();
extern char count[100];
using namespace std;
void squish(int x,int y);
void pong(int x,int y);
void game()
{
    //char count2[100];
    char *chime="chime.wav";
    int xi,z=400,w=520,i=0,k,y,b,l,score=0,level=1,flag=1,a;
    char f;
    char *rock="rock.wav";
    char count1[100];
    memset(count,0,sizeof(count));
    memset(count1,0,sizeof(count1));

    while(1)
    {
        pong(z,w);
        delay(100);
        stringstream tmpstr;
        tmpstr<<score;
        string tmp;
        tmpstr>>tmp;
        int i;
        for(i=0; i<tmp.size(); i++)
        {
            count[i]=tmp[i];
        }
        count[i]='\0';
        stringstream tmpstr1;
        tmpstr1<<level;
        string tmp1;
        tmpstr1>>tmp1;
        for(i=0; i<tmp1.size(); i++)
        {
            count1[i]=tmp1[i];
        }
        count1[i]='\0';
        k=rand()%5;   //k is used to determine the falling object
//setbkcolor(GREEN);
//        while(1)
//        {

        b=(rand()%16)+1;
        a=rand()%420;
        for(i=0; i<=580; i+=20)
        {
            xi=z+60;
            if(flag==2)
            {
                i+=10;
            }
            else if(flag==3)
            {
                i+=15;
            }



            y=20+i;
            setfillstyle(SOLID_FILL,b);
            bar(0,0+i,a,y);
            bar(a+100,0+i,700,y);
            if(y>=w)
            {
                if(((0<=z)&&(z<=a))||(((a+100)<=xi)&&(xi<=700)))
                {
                    squish(z,w);
                }
            }


            delay(200);
            while(kbhit())
            {
                f=getch();
                if(f=='a')
                {
                    sndPlaySound("choco.wav",SND_ASYNC);
                    z=z-10;
                    if(z<0)
                        z=0;
                }
                if(f=='d')
                {
                    sndPlaySound("choco.wav",SND_ASYNC);
                    z=z+10;
                    if(z>640)
                        z=640;
                }
            }
            setfillstyle(SOLID_FILL,0);
            bar(0,0+i,a,y);
            bar(a+100,0+i,700,y);
            cleardevice();
            pong(z,w);
            outtextxy(720,200,"LEVEL: ");
            outtextxy(720,220,count1);
            outtextxy(720,300,"SCORE: ");
            outtextxy(720,320,count);
            line(700,0,700,600);
        }

        sndPlaySound(rock,SND_ASYNC);

        score+=10;
        if(score==50)
        {
            level+=1;
            sndPlaySound(chime,SND_ASYNC);
            delay(1000);
            flag=2;
        }
        else if(score==100)
        {
            level+=1;
            sndPlaySound(rock,SND_ASYNC);
            delay(1000);
            flag=3;
        }

    }
//    }

}
void pong(int x,int y)
{
    int x1=x+60,y1=y+90;
    readimagefile("pong.jpg",x,y,x1,y1);
    return;
}

