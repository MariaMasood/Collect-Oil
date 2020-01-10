#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>

void main (void)
{
clrscr();
int dr,md;
int y=100, x=70, z=100;
int i=0;
int integral=0,collect=0,life=3;
detectgraph(&dr,&md);
initgraph(&dr,&md,"c:\\turboc3\\bgi");
cleardevice();
settextstyle(4,0,10);
setcolor(14);
outtextxy(20,180,"WELCOME");
delay(2000);
cleardevice();
settextstyle(4,0,4);
setcolor(10);
outtextxy(175,150,"BAQAI INSTITUTE");
outtextxy(265,200,"OF");
outtextxy(105,250,"INFORMATION TECHNOLOGY");
delay(2000);

cleardevice();
setbkcolor(9);
setcolor(14);
settextstyle(4,0,6);
outtextxy(100,60,"Project:");
setcolor(12);
outtextxy(100,140,"Collect Oil");
setcolor(14);
settextstyle(4,0,6);
outtextxy(100,220,"Developed On:");
setcolor(12);
outtextxy(100,300,"C");
delay(2000);
cleardevice();
setcolor(10);
settextstyle(4,0,6);
outtextxy(30,120,"Group Members:");
setcolor(4);
outtextxy(150,200,"Maria Masood\n");
outtextxy(150,250,"&\n");
outtextxy(150,300,"Hira Aftab\n");
delay(2000);
cleardevice();
 int r=400;
 int m=230;
while (i<1||life==0)
{
for(y=100,x=100,z=100;z<=200||y<=200||x<=600;x=x+10, y=y+10, z=z+20)
{
//pipe
setbkcolor(0);
setcolor(7);
setfillstyle(1,7);
bar(0,64,640,90);
//pipe valve
setcolor(4);
setfillstyle(1,4);
sector(380,77,0,360,10,10);
//pipe holes
setcolor(8);
setfillstyle(1,8);
pieslice(556,92,120,60,30);
pieslice(256,92,120,60,30);
//bridge
setcolor(4);
rectangle(200,210,640,280);
setcolor(4);
setfillstyle(1,4);
line(220,210,220,280);
line(240,210,240,280);
line(260,210,260,280);
line(280,210,280,280);
line(300,210,300,280);
line(320,210,320,280);
line(340,210,340,280);
line(360,210,360,280);
line(380,210,380,280);
line(400,210,400,280);
line(420,210,420,280);
line(440,210,440,280);
line(460,210,460,280);
line(480,210,480,280);
line(500,210,500,280);
line(520,210,520,280);
line(540,210,540,280);
line(560,210,560,280);
line(580,210,580,280);
line(600,210,600,280);
line(620,210,620,280);
line(640,210,640,280);
line(660,210,660,280);
line(680,210,680,280);
setcolor(4);
bar(180,280,640,300);
setcolor(4);
rectangle(179,m,640,300);
line(190,m,190,300);
line(210,m,210,300);
line(230,m,230,300);
line(250,m,250,300);
line(270,m,270,300);
line(290,m,290,300);
line(310,m,310,300);
line(330,m,330,300);
line(350,m,350,300);
line(370,m,370,300);
line(390,m,390,300);
line(410,m,410,300);
line(430,m,430,300);
line(450,m,450,300);
line(470,m,470,300);
line(490,m,490,300);
line(510,m,510,300);
line(530,m,530,300);
line(550,m,550,300);
line(570,m,570,300);
line(590,m,590,300);
line(610,m,610,300);
line(630,m,630,300);
//oil drops
setcolor(14);
setfillstyle(1,14);
pieslice(256,z,250,300,10);
sector(256,z+10,0,360,4,4);
pieslice(556,y,250,300,10);
sector(556,y+10,0,360,4,4);
delay(50);
setcolor(6);
setfillstyle(1,6);
sector(x,370,0,360,18,18);
line(x,390,x,440);
line(x,390,x+10,410);
line(x,390,x-10,410);
line(x,440,x-20,470);
line(x,440,x+20,470);
delay(100);
cleardevice();
//bridge
setbkcolor(0);
setcolor(4);
setfillstyle(1,4);
bar(0,64,640,90);
setcolor(4);
setfillstyle(1,4);
sector(380,77,0,360,10,10);
setcolor(4);
rectangle(200,210,640,280);
setcolor(4);
setfillstyle(1,4);
line(220,210,220,280);
line(240,210,240,280);
line(260,210,260,280);
line(280,210,280,280);
line(300,210,300,280);
line(320,210,320,280);
line(340,210,340,280);
line(360,210,360,280);
line(380,210,380,280);
line(400,210,400,280);
line(420,210,420,280);
line(440,210,440,280);
line(460,210,460,280);
line(480,210,480,280);
line(500,210,500,280);
line(520,210,520,280);
line(540,210,540,280);
line(560,210,560,280);
line(580,210,580,280);
line(600,210,600,280);
line(620,210,620,280);
line(640,210,640,280);
line(660,210,660,280);
line(680,210,680,280);
setcolor(4);
bar(180,280,640,300);
{
setcolor(5);
setfillstyle(1,5);//man
if(getch()=='a')
r=r-40;
else if(getch()=='d')
r=r+40;
sector(r,200,0,360,20,20);
line(r,220,r,270);
line(r,220,r-40,240);
line(r,270,r+20,290);
line(r,270,r-20,290);
setcolor(14);
setfillstyle(1,14);     //bucket
line(r-10,230,r-20,260);
line(r-40,230,r-30,260);
line(r-20,260,r-30,260);
line(r-40,230,r-10,230);
getch();
}
setcolor(4);
rectangle(179,230,640,300);
line(190,m,190,300);
line(210,m,210,300);
line(230,m,230,300);
line(250,m,250,300);
line(270,m,270,300);
line(290,m,290,300);
line(310,m,310,300);
line(330,m,330,300);
line(350,m,350,300);
line(370,m,370,300);
line(390,m,390,300);
line(410,m,410,300);
line(430,m,430,300);
line(450,m,450,300);
line(470,m,470,300);
line(490,m,490,300);
line(510,m,510,300);
line(530,m,530,300);
line(550,m,550,300);
line(570,m,570,300);
line(590,m,590,300);
line(610,m,610,300);
line(630,m,630,300);

//oil drops
setcolor(14);
setfillstyle(1,14);
pieslice(256,z,250,300,10);
sector(256,z+10,0,360,4,4);
delay(100);
pieslice(556,y,250,300,10);
sector(556,y+10,0,360,4,4);
delay(100);
}
{
printf("life=%d",(y==r)?(collect=collect+1):(life=life-1));
printf("collect=%d",collect);
integral=integral+10;
printf("integral=%d",integral);
if(collect==8)
delay(5000);
setcolor(14);
settextstyle(4,0,6);
outtextxy(100,100,"Game Over");
setcolor(12);
delay(2000);
cleardevice();
i++;
}
}
getch();
closegraph();
getch();
}
