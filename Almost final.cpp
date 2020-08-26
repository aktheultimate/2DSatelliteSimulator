#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<winuser.h>
float i =0;
int clockwise();
int clockwisee();
int final();
int orbit();
int main()
{
    int d,e;
    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");
    initwindow(1920,1080);
    for(e=0;e<1501;e+=100)
    {
    line(e,600,e+100,600);
    settextstyle(2,0,16);
    outtextxy(650,500,"WELCOME\n");
    delay(100);
    }
    for(e=0;e<1501;e+=100)
    {
    setcolor(BLACK);
    line(e,600,e+100,600);
    outtextxy(650,500,"WELCOME\n");

    }
    final();
}
int final()
{
    char e[70],q[70];
    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");
    initwindow(1920,1080);
    setcolor(WHITE);
    circle(300,300,200);
    setcolor(LIGHTBLUE);
    readimagefile("C:\\Users\\akash\\Desktop\\download (1).jpg",225,225,375,375);
    outtextxy(650,100,"PRESS RETURN TO PAUSE THE MOTION AND GET DETAILS");
    outtextxy(650,150,"PRESS END TO EXIT");
    outtextxy(650,200,"PRESS LEFT TO FORM MIRROR REPLICA AND ROTATE CLOCKWISE");
    outtextxy(650,250,"PRESS CTRL TO CHANGE THE RADIUS OF THE ORBIT");
    for(;i>=0;i+=0.0111)
    {
        setcolor(WHITE);
        readimagefile("C:\\Users\\akash\\Desktop\\images\\ghghf.jpg",270 + 200*sin(i),270 + 200*cos(i),330 + 200*sin(i),330 + 200*cos(i));
        delay(200);
        //cleardevice();
        setcolor(BLACK);
        circle(270 + 200*sin(i),270 + 200*cos(i),10);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        circle(300,300,80);
        floodfill(300 + 200*sin(i),300 + 200*cos(i),BLACK);
        setcolor(WHITE);
        circle(300,300,200);
        float x =200*sin(i);
        float y =200*cos(i);
        char t[45],u[45];
        sprintf(t,"%f",x);
        sprintf(u,"%f",-1*y);
        outtextxy(600,700,t);
        outtextxy(800,700,u);
        if(x>0&&y>0)
        {
            outtextxy(900,300,"You are looking at INDIA   ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\IN 2.jpg",225,225,375,375);
        }
        else if(x>0&&y<0)
        {
            outtextxy(900,300,"You are looking at CHINA     ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\CHINA.jpg",225,225,375,375);
        }
        else if(x<0&&y>0)
        {
            outtextxy(900,300,"You are looking at EGYPT    ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\9.jpg",225,225,375,375);
        }
        else if(x<0&&y<0)
        {
            outtextxy(900,300,"You are looking at USA    ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\US.jpg",225,225,375,375);
        }

       if(GetAsyncKeyState(VK_RETURN))
        {
           setcolor(WHITE);
           circle(300,300,200);
           readimagefile("C:\\Users\\akash\\Desktop\\images\\ghghf.jpg",270 + 200*sin(i),270 + 200*cos(i),330 + 200*sin(i),330 + 200*cos(i));
           line(300,300,300 + 200*sin(i),300 + 200*cos(i));
           float g;
           if(x<y){
            g=sqrt((y*y)+(x*x));
           }
           else{
            g=sqrt((x*x)+(y*y));
           }
           sprintf(e,"%f",g);
           outtextxy(600,600,e);
           outtextxy(500,500,"The distance between satellite and earth =");
           outtextxy(800,500,"The flat area of portion seen by satellite is =");
           float p,n,m;
           p=asin(80/g);
           n=(3.14/2)-p;
           m=(80*sin(n));
           sprintf(q,"%f",m);
           outtextxy(800,600,q);
           delay(5000);
           setcolor(BLACK);
           line(300,300,300 + 200*sin(i),300 + 200*cos(i));
           outtextxy(600,600,e);
           outtextxy(800,600,q);
           outtextxy(500,500,"The distance between satellite and earth =");
           outtextxy(800,500,"The flat area of portion seen by satellite is =");
           circle(300 + 200*sin(i),300 + 200*cos(i),10);
        }
           if(GetAsyncKeyState(VK_END))
          {
              closegraph();
          }
          if(GetAsyncKeyState(VK_LEFT))
        {
            clockwise();
        }
        if(GetAsyncKeyState(VK_CONTROL))
        {
            orbit();
        }
    }

    return 0;

}
 int clockwise(){
     char e[70],q[70];
     for(;i>=0;i+=0.0111)
    {
        setcolor(WHITE);
        //circle(300 + 200*sin(i),300 + 200*cos(i),10);
        readimagefile("C:\\Users\\akash\\Desktop\\images\\ghghf.jpg",270 + 200*sin(-1*i),270 + 200*cos(i),330 + 200*sin(-1*i),330 + 200*cos(i));
        delay(200);
        //cleardevice();
        setcolor(BLACK);
        circle(270 + 200*sin(-1*i),270 + 200*cos(i),10);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        circle(300,300,80);
        floodfill(300 + 200*sin(-1*i),300 + 200*cos(i),BLACK);
        setcolor(WHITE);
        circle(300,300,200);
        float x =200*sin(i);
        float y =200*cos(i);
        char t[45],u[45];
        sprintf(t,"%f",-1*x);
        sprintf(u,"%f",-1*y);
        outtextxy(600,700,t);
        outtextxy(800,700,u);
        //readimagefile("C:\\Users\\akash\\Desktop\\sat.jpg",225,225,375,375);
        if(x<0&&y<0)
        {
            outtextxy(900,300,"You are looking at INDIA   ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\IN 2.jpg",225,225,375,375);
        }
        else if(x<0&&y>0)
        {
            outtextxy(900,300,"You are looking at CHINA     ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\CHINA.jpg",225,225,375,375);
        }
        else if(x>0&&y<0)
        {
            outtextxy(900,300,"You are looking at EGYPT   ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\9.jpg",225,225,375,375);
        }
        else if(x>0&&y>0)
        {
            outtextxy(900,300,"You are looking at USA    ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\US.jpg",225,225,375,375);
        }
       if(GetAsyncKeyState(VK_RETURN))
        {
           setcolor(WHITE);
           circle(300,300,200);
           readimagefile("C:\\Users\\akash\\Desktop\\images\\ghghf.jpg",270 + 200*sin(-1*i),270 + 200*cos(i),330 + 200*sin(-1*i),330 + 200*cos(i));
           line(300,300,300 + 200*sin(-1*i),300 + 200*cos(i));
           float g;
           if(x<y){
            g=sqrt((y*y)+(x*x));
           }
           else{
            g=sqrt((x*x)+(y*y));
           }
           sprintf(e,"%f",g);
//           q="The distance between satellite and the earth is = ";
           //strcat(q,e);
           outtextxy(600,600,e);
           outtextxy(500,500,"The distance between satellite and earth =");
           outtextxy(800,500,"The flat area of portion seen by satellite is =");
           float p,n,m;
           p=asin(80/g);
           n=(3.14/2)-p;
           m=3.14*((80*sin(n)));
           sprintf(q,"%f",m);
           outtextxy(800,600,q);
           delay(4000);
           setcolor(BLACK);
           line(300,300,300 + 200*sin(-1*i),300 + 200*cos(i));
           outtextxy(600,600,e);
           outtextxy(800,600,q);
           outtextxy(500,500,"The distance between satellite and earth =");
           outtextxy(800,500,"The flat area of portion seen by satellite is =");
           circle(300 + 200*sin(-1*i),300 + 200*cos(i),10);

        }
           if(GetAsyncKeyState(VK_END))
          {
              closegraph();
          }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            final();
        }
        if(GetAsyncKeyState(VK_CONTROL))
        {
            clockwisee();
        }
        }
        return 0;
 }
int orbit()
{
    char e[70],q[70];
    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");
    initwindow(1920,1080);
    setcolor(WHITE);
    circle(300,300,300);
    setcolor(LIGHTBLUE);
    readimagefile("C:\\Users\\akash\\Desktop\\download (1).jpg",225,225,375,375);
    outtextxy(650,100,"PRESS RETURN TO PAUSE THE MOTION AND GET DETAILS");
    outtextxy(650,150,"PRESS END TO EXIT");
    outtextxy(650,200,"PRESS LEFT TO FORM MIRROR REPLICA AND ROTATE CLOCKWISE");
    outtextxy(650,250,"PRESS CTRL TO CHANGE THE RADIUS OF THE ORBIT");
    for(;i>=0;i+=0.0111)
    {
        setcolor(WHITE);
        readimagefile("C:\\Users\\akash\\Desktop\\images\\ghghf.jpg",270 + 300*sin(i),270 + 300*cos(i),330 + 300*sin(i),330 + 300*cos(i));
        delay(200);
        //cleardevice();
        setcolor(BLACK);
        circle(270 + 300*sin(i),270 + 300*cos(i),10);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        circle(300,300,80);
        floodfill(300 + 300*sin(i),300 + 300*cos(i),BLACK);
        setcolor(WHITE);
        circle(300,300,300);
        float x =300*sin(i);
        float y =300*cos(i);
        char t[45],u[45];
        sprintf(t,"%f",x);
        sprintf(u,"%f",-1*y);
        outtextxy(600,700,t);
        outtextxy(800,700,u);
        if(x>0&&y>0)
        {
            outtextxy(900,300,"You are looking at INDIA   ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\IN 2.jpg",225,225,375,375);
        }
        else if(x>0&&y<0)
        {
            outtextxy(900,300,"You are looking at CHINA     ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\CHINA.jpg",225,225,375,375);
        }
        else if(x<0&&y>0)
        {
            outtextxy(900,300,"You are looking at EGYPT    ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\9.jpg",225,225,375,375);
        }
        else if(x<0&&y<0)
        {
            outtextxy(900,300,"You are looking at USA    ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\US.jpg",225,225,375,375);
        }

       if(GetAsyncKeyState(VK_RETURN))
        {
           setcolor(WHITE);
           circle(300,300,300);
           readimagefile("C:\\Users\\akash\\Desktop\\images\\ghghf.jpg",270 + 300*sin(i),270 + 300*cos(i),330 + 300*sin(i),330 + 300*cos(i));
           line(300,300,300 + 300*sin(i),300 + 300*cos(i));
           float g;
           if(x<y){
            g=sqrt((y*y)+(x*x));
           }
           else{
            g=sqrt((x*x)+(y*y));
           }
           sprintf(e,"%f",g);
           outtextxy(600,600,e);
           outtextxy(500,500,"The distance between satellite and earth =");
           outtextxy(800,500,"The flat area of portion seen by satellite is =");
           float p,n,m;
           p=asin(80/g);
           n=(3.14/2)-p;
           m=(80*sin(n));
           sprintf(q,"%f",m);
           outtextxy(800,600,q);
           delay(5000);
           setcolor(BLACK);
           line(300,300,300 + 300*sin(i),300 + 300*cos(i));
           outtextxy(600,600,e);


           outtextxy(800,600,q);
           outtextxy(500,500,"The distance between satellite and earth =");
           outtextxy(800,500,"The flat area of portion seen by satellite is =");
           circle(300 + 300*sin(i),300 + 300*cos(i),10);
        }
           if(GetAsyncKeyState(VK_END))
          {
              closegraph();
          }
          if(GetAsyncKeyState(VK_LEFT))
        {
            clockwisee();
        }
        if(GetAsyncKeyState(VK_CONTROL))
        {
            final();
        }
        }



    return 0;

}
int clockwisee(){
     char e[70],q[70];
     for(;i>=0;i+=0.0111)
    {
        setcolor(WHITE);
        //circle(300 + 200*sin(i),300 + 200*cos(i),10);
        readimagefile("C:\\Users\\akash\\Desktop\\images\\ghghf.jpg",270 + 300*sin(-1*i),270 + 300*cos(i),330 + 300*sin(-1*i),330 + 300*cos(i));
        delay(200);
        //cleardevice();
        setcolor(BLACK);
        circle(270 + 300*sin(-1*i),270 + 300*cos(i),10);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        circle(300,300,80);
        circle(300,300,200);
        floodfill(300 + 300*sin(-1*i),300 + 300*cos(i),BLACK);
        setcolor(WHITE);
        circle(300,300,300);
        float x =300*sin(i);
        float y =300*cos(i);
        char t[45],u[45];
        sprintf(t,"%f",-1*x);
        sprintf(u,"%f",-1*y);
        outtextxy(600,700,t);
        outtextxy(800,700,u);
        //readimagefile("C:\\Users\\akash\\Desktop\\sat.jpg",225,225,375,375);
        if(x<0&&y<0)
        {
            outtextxy(900,300,"You are looking at INDIA   ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\IN 2.jpg",225,225,375,375);
        }
        else if(x<0&&y>0)
        {
            outtextxy(900,300,"You are looking at CHINA     ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\CHINA.jpg",225,225,375,375);
        }
        else if(x>0&&y<0)
        {
            outtextxy(900,300,"You are looking at EGYPT    ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\9.jpg",225,225,375,375);
        }
        else if(x>0&&y>0)
        {
            outtextxy(900,300,"You are looking at USA    ");
            readimagefile("C:\\Users\\akash\\Desktop\\images\\US.jpg",225,225,375,375);
        }
       if(GetAsyncKeyState(VK_RETURN))
        {
           setcolor(WHITE);
           circle(300,300,300);
           readimagefile("C:\\Users\\akash\\Desktop\\images\\ghghf.jpg",270 + 300*sin(-1*i),270 + 300*cos(i),330 + 300*sin(-1*i),330 + 300*cos(i));
           line(300,300,300 + 300*sin(-1*i),300 + 300*cos(i));
           float g;
           if(x<y){
            g=sqrt((y*y)+(x*x));
           }
           else{
            g=sqrt((x*x)+(y*y));
           }
           sprintf(e,"%f",g);
//           q="The distance between satellite and the earth is = ";
           //strcat(q,e);
           outtextxy(600,600,e);
           outtextxy(500,500,"The distance between satellite and earth =");
           outtextxy(800,500,"The flat area of portion seen by satellite is =");
           float p,n,m;
           p=asin(80/g);
           n=(3.14/2)-p;
           m=(80*sin(n));
           sprintf(q,"%f",m);
           outtextxy(800,600,q);
           delay(4000);
           setcolor(BLACK);
           line(300,300,300 + 300*sin(-1*i),300 + 300*cos(i));
           outtextxy(600,600,e);
           outtextxy(800,600,q);
           outtextxy(500,500,"The distance between satellite and earth =");
           outtextxy(800,500,"The flat area of portion seen by satellite is =");
           circle(300 + 300*sin(-1*i),300 + 300*cos(i),10);

        }
           if(GetAsyncKeyState(VK_END))
          {
              closegraph();
          }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            orbit();
        }
        if(GetAsyncKeyState(VK_CONTROL))
        {
            setcolor(BLACK);
            circle(300,300,300);
            clockwise();
        }
        }
        return 0;
 }
