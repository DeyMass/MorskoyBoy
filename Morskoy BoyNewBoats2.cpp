#include <graphics.h>
#include <iostream.h>
#include <ctime>
#include <stdlib.h>

//������� ���!
using namespace std;
int turn=1;
void printarrow2(int col){
             setcolor(col);
             moveto(225,500);
             lineto(225,450);
             lineto(235,470);
             lineto(215,470);
             lineto(225,450);
             setfillstyle(1,col);
             floodfill(230,469,col);
             floodfill(220,469,col);   
     }
     void printarrow1(int col){
          setcolor(col);
          moveto(1000-225,500);
          lineto(1000-225,450);
          lineto(1000-235,470);
          lineto(1000-215,470);
          lineto(1000-225,450);
          setfillstyle(1,col);
          floodfill(1000-230,469,col);
          floodfill(1000-220,469,col);   
          
}
void turnprint(){
    if (turn==1){
    turn=2;
}
    else 
    turn=1;
    
    }
int pprint(){
    settextstyle(2,0,16);
int t=565;
   moveto(t,40);
    outtext("0");
    moveto(t,80);
    outtext("1");
    moveto(t,120);
    outtext("2");
    moveto(t,160);
    outtext("3");
    moveto(t,200);
    outtext("4");
    moveto(t,240);
    outtext("5");
    moveto(t,280);
    outtext("6");
    moveto(t,320);
    outtext("7");
    moveto(t,360);
    outtext("8");
    moveto(t,400);
    outtext("9");
    for (int i=40;i<=440;i+=40){
    moveto(0,i);
    lineto(440,i);
	}             
    for (int i=40;i<=440;i+=40){
    moveto(560,i);
    lineto(1000,i);
	}             

    for (int i=560;i<=1000;i+=40){
        moveto(i,0);
        lineto(i,440);
    }
    for (int i=0;i<=440;i+=40){
        moveto(i,0);
        lineto(i,440);
    }
    t=5;
    settextstyle(2,0,16);
    moveto(t,40);
    outtext("0");
    moveto(t,80);
    outtext("1");
    moveto(t,120);
    outtext("2");
    moveto(t,160);
    outtext("3");
    moveto(t,200);
    outtext("4");
    moveto(t,240);
    outtext("5");
    moveto(t,280);
    outtext("6");
    moveto(t,320);
    outtext("7");
    moveto(t,360);
    outtext("8");
    moveto(t,400);
    outtext("9");
    t=0;
settextstyle(2,0,16);
moveto(41,t);
outtext("A");
moveto(81,t);
outtext("B");
moveto(121,t);
outtext("C");
moveto(161,t);
outtext("D");
moveto(201,t);
outtext("E");
moveto(241,t);
outtext("F");
moveto(281,t);
outtext("G");
moveto(321,t);
outtext("H");
moveto(361,t);
outtext("I");
moveto(401,t);
outtext("J");
settextstyle(2,0,16);
moveto(601,t);
outtext("A");
moveto(641,t);
outtext("B");
moveto(681,t);
outtext("C");
moveto(721,t);
outtext("D");
moveto(761,t);
outtext("E");
moveto(801,t);
outtext("F");
moveto(841,t);
outtext("G");
moveto(881,t);
outtext("H");
moveto(921,t);
outtext("I");
moveto(961,t);
outtext("J");
    }



using namespace std;

int main(){
int numhit1=0,numhit2=0;
int n=1;  
int first=1,second=0,third=-100,tempx,tempy,ex,ey,dir=0; //dir=1 - gorizontal; dir=2 - vertikal
int tx=0,ty=0,c=0,checksum=0,flag=0,ready=0,temp2x,temp2y;
    int p1[12][12],p2[12][12],put=1;
    for (int i=0;i<12;i++)
    for (int j=0;j<12;j++){
p1[i][j]=0;
p2[i][j]=0;
}
initwindow(400,400);
int bot,menu=0;//100 100 310 155

setcolor(COLOR(231,200,231));
settextstyle(4,0,7);
outtextxy(100,100,"Start");
outtextxy(100,250,"Exit");

while(1){  
if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>100&&mousex()<310&&mousey()>100&&mousey()<175){
closegraph();
    initwindow(400,400);
setcolor(COLOR(200,169,231));
settextstyle(4,0,4);
outtextxy(50,100,"Player vs Player");
outtextxy(50,200,"Player vs Bot");
outtextxy(50,300,"Main menu");
menu=1;
clearmouseclick(WM_LBUTTONDOWN);

}
while(menu==1){
if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>50&&mousex()<390&&mousey()>100&&mousey()<135){
    bot=0;
    closegraph();
    initwindow(400,400);
    settextstyle(1,0,5);
    outtextxy(50,150,"LOADING");
    setcolor(COLOR(0,255,0));
        for (int z=10;z<260;z+=10){
        outtextxy(50+z,200,".");   
        delay(100);
        }
    menu=-1;
    break;
    }

if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>50&&mousex()<335&&mousey()>200&&mousey()<235){
    bot=1;
    closegraph();
    initwindow(400,400);
    settextstyle(1,0,5);
    outtextxy(50,150,"LOADING");
    setcolor(COLOR(255,0,0));
        for (int z=10;z<240;z+=30){
        outtextxy(50+z,200,".");
        delay(100);
        }
    menu=-1;
    break;
    }
    
if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>50&&mousex()<290&&mousey()>300&&mousey()<330){
    closegraph();
    initwindow(400,400);
setcolor(COLOR(231,200,231));
settextstyle(4,0,7);
outtextxy(100,100,"Start");
outtextxy(100,250,"Exit");
    menu=0;
    }
    
    
clearmouseclick(WM_LBUTTONDOWN);    
    delay(10);
}

if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>45&&mousex()<331&&mousey()>250&&mousey()<323){
    cleardevice();
    settextstyle(1,0,4);
    outtextxy(50,150,"See you later ;)");
    for (int z=10;z<40;z+=10){
    outtextxy(50+z,200,".");   
    delay(500);
    }
    clearmouseclick(WM_LBUTTONDOWN);
goto end;
    }
clearmouseclick(WM_LBUTTONDOWN);
if (menu==-1){ break; closegraph();}
}










 closegraph();   

  initwindow(440,800,"Place your boats, player 1");
doagain:
    setcolor(COLOR(255,255,255));
    cleardevice();
  pprint();

  settextstyle(8,0,4);
  setcolor(COLOR(0,255,0));
  bgiout<<"������� 4-� ��������";
  outstreamxy(0,700);
  setfillstyle(1,COLOR(255,0,0));
bar(300,500,440,640);  
  setcolor(COLOR(0,255,0));
  setfillstyle(1,COLOR(0,255,0));
//������ ����� ����������� ���� �������
  //*********************************************************����Ш���������*************************************************************
while (1){
         if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>300&&mousex()<440&&mousey()>540&&mousey()<640){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p1[z][l]=0;
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain;
            
            }


    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
         if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousex()<440&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
       if (first){
            if (p1[tempx][tempy]<1&&mousex()%40!=0&&mousey()%40!=0){
            p1[tempx][tempy]=41;
          floodfill(mousex(),mousey(),COLOR(255,255,255));    
          second=1;
          first=0;    
          ex=(int)((float)mousex()/40);
          ey=(int)((float)mousey()/40);
            }
         }
    
      if (first==0)
         if (second==1&&p1[tempx][tempy]<1){
 if ((p1[tempx+1][tempy]==41||p1[tempx][tempy+1]==41||p1[tempx-1][tempy]==41||p1[tempx][tempy-1]==41)&&p1[tempx][tempy]!=41){
  floodfill(mousex(),mousey(),COLOR(255,255,255));
  p1[tempx][tempy]=41;
  second=0;
  third=2;  

  if (ex-((int)((float)mousex()/40))==0) dir=2;
  else dir=1;
 }
 }
            if (third>=0){
              if (dir==2&&(p1[tempx][tempy+1]==41||p1[tempx][tempy-1]==41)&&p1[tempx][tempy]!=41){
                    third--;
  floodfill(mousex(),mousey(),COLOR(255,255,255));
  p1[tempx][tempy]=41;
     if (third==0) break;
}
                      
             if (dir==1){
        if (p1[tempx][tempy]!=41&&(p1[tempx+1][tempy]>1||p1[tempx-1][tempy]>1)){
    third--;
  floodfill(mousex(),mousey(),COLOR(255,255,255));
  p1[(int)((float)mousex()/40)][(int)((float)mousey()/40)]=41;
        if (third==0) break;     
                    }    
                }     
            }
}//*******************************************
      clearmouseclick(WM_LBUTTONDOWN);
      delay(10);
}

//*************************************************************������ �Ш���������*********************************************************
bgiout<<"��������� ��� 3-� ���������";
outstreamxy(0,700);


first=1;
setfillstyle(1,COLOR(0,255,0));
dir=0;
while (1){

                  if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>300&&mousex()<440&&mousey()>540&&mousey()<640){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p1[z][l]=0;
                    
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain;
            }
            
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
        if (first==1&&p1[tempx][tempy]<1&&p1[tempx][tempy+1]<1&&p1[tempx+1][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy]<1&&p1[tempx][tempy-1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx+1][tempy-1]<1){
            p1[tempx][tempy]=31;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            first=0;
            second=1;
            clearmouseclick(WM_LBUTTONDOWN);
            }
        if (second==1&&((p1[tempx-1][tempy]==31&&p1[tempx+1][tempy]<1)||(p1[tempx+1][tempy]==31&&p1[tempx-1][tempy]<1)||(p1[tempx][tempy+1]==31&&p1[tempx][tempy-1]<1)||(p1[tempx][tempy-1]==31&&p1[tempx][tempy+1]<1))&&p1[tempx][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx+1][tempy-1]<1){
            if (p1[tempx][tempy+1]==31||p1[tempx][tempy-1]==31) dir=2;
            else dir=1;
            p1[tempx][tempy]=31;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            second=0;
            third=1;
            }
        if (third==1&&dir==2&&p1[tempx][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx+1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx-1][tempy-1]<1&&((p1[tempx][tempy-1]==31&&p1[tempx][tempy+1]==0)||(p1[tempx][tempy-1]==0&&p1[tempx][tempy+1]==31))){
            p1[tempx][tempy]=31;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        if (third==1&&dir==1&&p1[tempx][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx+1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx-1][tempy-1]<1&&((p1[tempx-1][tempy]==0&&p1[tempx+1][tempy]==31)||(p1[tempx-1][tempy]==31&&p1[tempx+1][tempy]==0))){
            p1[tempx][tempy]=31;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        }
    if (n==0) break;
    clearmouseclick(WM_LBUTTONDOWN);
    delay(1);
    }
 n=1;
printf("%i ",n);
first=1;
setfillstyle(1,COLOR(0,255,0));
dir=0;
bgiout<<"��������� 3-� ��������";
//*******************************************************������ ������������*************************************************************************
outstreamxy(0,700);
while (1){
         if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>300&&mousex()<440&&mousey()>540&&mousey()<640){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p1[z][l]=0;
                    
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain;
            }
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
        if (first==1&&p1[tempx][tempy]<1&&p1[tempx][tempy+1]<1&&p1[tempx+1][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy]<1&&p1[tempx][tempy-1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx+1][tempy-1]<1){
            p1[tempx][tempy]=32;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            first=0;
            second=1;
            clearmouseclick(WM_LBUTTONDOWN);    
            }
        if (second==1&&((p1[tempx-1][tempy]==32&&p1[tempx+1][tempy]<1)||(p1[tempx+1][tempy]==32&&p1[tempx-1][tempy]<1)||(p1[tempx][tempy+1]==32&&p1[tempx][tempy-1]<1)||(p1[tempx][tempy-1]==32&&p1[tempx][tempy+1]<1))&&p1[tempx][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx+1][tempy-1]<1){
            if (p1[tempx][tempy+1]==32||p1[tempx][tempy-1]==32) dir=2;
            else dir=1;
            p1[tempx][tempy]=32;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            second=0;
            third=1;
            }
        if (third==1&&dir==2&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx+1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx][tempy]<1&&((p1[tempx][tempy-1]==32&&p1[tempx][tempy+1]==0)||(p1[tempx][tempy-1]==0&&p1[tempx][tempy+1]==32))){
            p1[tempx][tempy]=32;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        if (third==1&&dir==1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx+1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx][tempy]<1&&((p1[tempx-1][tempy]==0&&p1[tempx+1][tempy]==32)||(p1[tempx-1][tempy]==32&&p1[tempx+1][tempy]==0))){
            p1[tempx][tempy]=32;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        }
    if (n==0) break;
    
clearmouseclick(WM_LBUTTONDOWN);
    delay(1);
    }

bgiout<<"��������� 3 2-� ���������";
outstreamxy(0,700);
n=3;
first=1;
third=0;
second=0;
//---------------------------------------------------�������������! ����� ������---------------------------------------------------------------------
while(n>0){
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    
             if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>300&&mousex()<440&&mousey()>540&&mousey()<640){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p1[z][l]=0;
                n=1;
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain;
            }
    
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
        if (first==1&&p1[tempx][tempy]<1&&p1[tempx][tempy+1]<1&&p1[tempx+1][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy]<1&&p1[tempx][tempy-1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx+1][tempy-1]<1){
            p1[tempx][tempy]=20+n;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            first=0;
            second=1;
            }
        if (second==1&&p1[tempx][tempy]<1&&p1[tempx][tempy+1]<20+n+1&&p1[tempx][tempy-1]<20+n+1&&p1[tempx+1][tempy]<20+n+1&&p1[tempx-1][tempy]<20+n+1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx+1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&(p1[tempx-1][tempy]==20+n||p1[tempx+1][tempy]==20+n||p1[tempx][tempy+1]==20+n||p1[tempx][tempy-1]==20+n)){
            p1[tempx][tempy]=20+n;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            second=0;
            n--;
            first=1;
            }
    }
    
    clearmouseclick(WM_LBUTTONDOWN);    
    delay(5);
}
n=4;
first=1;
second=0;
third=0; 
//******************************************************4 �������������**********************************************************
bgiout<<"��������� 4 �������������";
outstreamxy(0,700);
while (n>0){
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    
             if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>300&&mousex()<440&&mousey()>540&&mousey()<640){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p1[z][l]=0;
                n=1;
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain;
            }
    
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
        if (p1[tempx][tempy]<1&&p1[tempx][tempy+1]<1&&p1[tempx+1][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy]<1&&p1[tempx][tempy-1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx+1][tempy-1]<1){
            p1[tempx][tempy]=10+n;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
        }
    }
    clearmouseclick(WM_LBUTTONDOWN);
    delay(5);
}







if(bot==0){
cleardevice();
settextstyle(1,0,7);
outtextxy(100,50,"Player2");
outtextxy(100,250,"Your");
outtextxy(100,450,"Turn");


delay(2000);
closegraph();

dir=0;
first=1;
second=0;
third=0;
  initwindow(440,800,"Place your boats, player 2");
  doagain2:
        setcolor(COLOR(255,255,255));
  cleardevice();
  pprint();
        setfillstyle(1,COLOR(255,0,0));
bar(300,500,440,640);  
  settextstyle(8,0,4);
  setcolor(COLOR(0,255,0));
  bgiout<<"������� 4-� ��������";
  outstreamxy(0,700);
  
  setfillstyle(1,COLOR(0,255,0));
//������ ����� ����������� ���� �������
  //*********************************************************����Ш���������*************************************************************
while (1){
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
             if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>300&&mousex()<440&&mousey()>540&&mousey()<640){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p2[z][l]=0;
                    
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain2;
            }
         if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousex()<440&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
       if (first){
            if (p2[tempx][tempy]<1&&mousex()%40!=0&&mousey()%40!=0){
            p2[tempx][tempy]=41;
          floodfill(mousex(),mousey(),COLOR(255,255,255));    
          second=1;
          first=0;    
          ex=(int)((float)mousex()/40);
          ey=(int)((float)mousey()/40);
            }
         }
    
      if (first==0)
         if (second==1&&p2[tempx][tempy]<1){
 if ((p2[tempx+1][tempy]==41||p2[tempx][tempy+1]==41||p2[tempx-1][tempy]==41||p2[tempx][tempy-1]==41)&&p2[tempx][tempy]!=41){
  floodfill(mousex(),mousey(),COLOR(255,255,255));
  p2[tempx][tempy]=41;
  second=0;
  third=2;  

  if (ex-((int)((float)mousex()/40))==0) dir=2;
  else dir=1;
 }
 }
            if (third>=0){
              if (dir==2&&(p2[tempx][tempy+1]==41||p2[tempx][tempy-1]==41)&&p2[tempx][tempy]!=41){
                    third--;
  floodfill(mousex(),mousey(),COLOR(255,255,255));
  p2[tempx][tempy]=41;
     if (third==0) break;
}
                      
             if (dir==1){
        if (p2[tempx][tempy]!=41&&(p2[tempx+1][tempy]>1||p2[tempx-1][tempy]>1)){
    third--;
  floodfill(mousex(),mousey(),COLOR(255,255,255));
  p2[(int)((float)mousex()/40)][(int)((float)mousey()/40)]=41;
        if (third==0) break;     
                    }    
                }     
            }
}//*******************************************
      clearmouseclick(WM_LBUTTONDOWN);
      delay(10);
}
bgiout<<"��������� ��� 3-� ���������";
outstreamxy(0,700);
n=1;

first=1;
setfillstyle(1,COLOR(0,255,0));
dir=0;
while (1){
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>300&&mousex()<440&&mousey()>540&&mousey()<640){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p2[z][l]=0;
                    
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain2;
            }
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
        if (first==1&&p2[tempx][tempy]<1&&p2[tempx][tempy+1]<1&&p2[tempx+1][tempy]<1&&p2[tempx+1][tempy+1]<1&&p2[tempx-1][tempy]<1&&p2[tempx][tempy-1]<1&&p2[tempx-1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&p2[tempx+1][tempy-1]<1){
            p2[tempx][tempy]=31;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            first=0;
            second=1;
            clearmouseclick(WM_LBUTTONDOWN);
            }
        if (second==1&&((p2[tempx-1][tempy]==31&&p2[tempx+1][tempy]<1)||(p2[tempx+1][tempy]==31&&p2[tempx-1][tempy]<1)||(p2[tempx][tempy+1]==31&&p2[tempx][tempy-1]<1)||(p2[tempx][tempy-1]==31&&p2[tempx][tempy+1]<1))&&p2[tempx][tempy]<1&&p2[tempx+1][tempy+1]<1&&p2[tempx-1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&p2[tempx+1][tempy-1]<1){
            if (p2[tempx][tempy+1]==31||p2[tempx][tempy-1]==31) dir=2;
            else dir=1;
            p2[tempx][tempy]=31;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            second=0;
            third=1;
            }
        if (third==1&&dir==2&&p2[tempx][tempy]<1&&p2[tempx+1][tempy+1]<1&&p2[tempx+1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&p2[tempx-1][tempy-1]<1&&((p2[tempx][tempy-1]==31&&p2[tempx][tempy+1]==0)||(p2[tempx][tempy-1]==0&&p2[tempx][tempy+1]==31))){
            p2[tempx][tempy]=31;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        if (third==1&&dir==1&&p2[tempx][tempy]<1&&p2[tempx+1][tempy+1]<1&&p2[tempx+1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&p2[tempx-1][tempy-1]<1&&((p2[tempx-1][tempy]==0&&p2[tempx+1][tempy]==31)||(p2[tempx-1][tempy]==31&&p2[tempx+1][tempy]==0))){
            p2[tempx][tempy]=31;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        }
    if (n==0) break;
    clearmouseclick(WM_LBUTTONDOWN);
    delay(1);
    }
n=1;
first=1;
setfillstyle(1,COLOR(0,255,0));
dir=0;
bgiout<<"��������� 3-� ��������";
outstreamxy(0,700);
while (1){
if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>300&&mousex()<440&&mousey()>540&&mousey()<640){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p2[z][l]=0;
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain2;
            }
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()<440&&mousey()>40&&mousex()%40!=0&&mousey()%40!=0){
        if (first==1&&p2[tempx][tempy]<1&&p2[tempx][tempy+1]<1&&p2[tempx+1][tempy]<1&&p2[tempx+1][tempy+1]<1&&p2[tempx-1][tempy]<1&&p2[tempx][tempy-1]<1&&p2[tempx-1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&p2[tempx+1][tempy-1]<1){
            p2[tempx][tempy]=32;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            first=0;
            second=1;
            clearmouseclick(WM_LBUTTONDOWN);    
            }
        if (second==1&&((p2[tempx-1][tempy]==32&&p2[tempx+1][tempy]<1)||(p2[tempx+1][tempy]==32&&p2[tempx-1][tempy]<1)||(p2[tempx][tempy+1]==32&&p2[tempx][tempy-1]<1)||(p2[tempx][tempy-1]==32&&p2[tempx][tempy+1]<1))&&p2[tempx][tempy]<1&&p2[tempx+1][tempy+1]<1&&p2[tempx-1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&p2[tempx+1][tempy-1]<1){
            if (p2[tempx][tempy+1]==32||p2[tempx][tempy-1]==32) dir=2;
            else dir=1;
            p2[tempx][tempy]=32;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            second=0;
            third=1;
            }
        if (third==1&&dir==2&&p2[tempx+1][tempy+1]<1&&p2[tempx-1][tempy-1]<1&&p2[tempx+1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&p2[tempx][tempy]<1&&((p2[tempx][tempy-1]==32&&p2[tempx][tempy+1]==0)||(p2[tempx][tempy-1]==0&&p2[tempx][tempy+1]==32))){
            p2[tempx][tempy]=32;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        if (third==1&&dir==1&&p2[tempx+1][tempy+1]<1&&p2[tempx-1][tempy-1]<1&&p2[tempx+1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&p2[tempx][tempy]<1&&((p2[tempx-1][tempy]==0&&p2[tempx+1][tempy]==32)||(p2[tempx-1][tempy]==32&&p2[tempx+1][tempy]==0))){
            p2[tempx][tempy]=32;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        }
    if (n==0) break;
    
clearmouseclick(WM_LBUTTONDOWN);
    delay(1);
    }

bgiout<<"��������� 3 2-� ���������";
outstreamxy(0,700);
n=3;
first=1;
third=0;
second=0;
//---------------------------------------------------�������������! ����� ������---------------------------------------------------------------------
while(n>0){
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>300&&mousex()<440&&mousey()>540&&mousey()<640){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p2[z][l]=0;
                n=1;
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain2;
            }
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()<440&&mousey()>40&&mousex()%40!=0&&mousey()%40!=0){
        if (first==1&&p2[tempx][tempy]<1&&p2[tempx][tempy+1]<1&&p2[tempx+1][tempy]<1&&p2[tempx+1][tempy+1]<1&&p2[tempx-1][tempy]<1&&p2[tempx][tempy-1]<1&&p2[tempx-1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&p2[tempx+1][tempy-1]<1){
            p2[tempx][tempy]=20+n;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            first=0;
            second=1;
            }
        if (second==1&&p2[tempx][tempy]<1&&p2[tempx][tempy+1]<20+n+1&&p2[tempx][tempy-1]<20+n+1&&p2[tempx+1][tempy]<20+n+1&&p2[tempx-1][tempy]<20+n+1&&p2[tempx+1][tempy+1]<1&&p2[tempx-1][tempy-1]<1&&p2[tempx+1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&(p2[tempx-1][tempy]==20+n||p2[tempx+1][tempy]==20+n||p2[tempx][tempy+1]==20+n||p2[tempx][tempy-1]==20+n)){
            p2[tempx][tempy]=20+n;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            second=0;
            n--;
            first=1;
            }
    }
    
    clearmouseclick(WM_LBUTTONDOWN);    
    delay(5);
}
n=4;
first=1;
second=0;
third=0;
bgiout<<"��������� 4 �������������";
outstreamxy(0,700);
while (n>0){
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>300&&mousex()<440&&mousey()>540&&mousey()<640){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p2[z][l]=0;
                n=1;
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain2;
            }
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()<440&&mousey()>40&&mousex()%40!=0&&mousey()%40!=0){
        if (p2[tempx][tempy]<1&&p2[tempx][tempy+1]<1&&p2[tempx+1][tempy]<1&&p2[tempx+1][tempy+1]<1&&p2[tempx-1][tempy]<1&&p2[tempx][tempy-1]<1&&p2[tempx-1][tempy-1]<1&&p2[tempx-1][tempy+1]<1&&p2[tempx+1][tempy-1]<1){
            p2[tempx][tempy]=10+n;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
        }
    }
    clearmouseclick(WM_LBUTTONDOWN);
    delay(5);
}
}




















//*******************************************��� ����������� ���� �������: ********************************************************


int f,k,key1,key2;//dir=1 - gorizontal; dir=2 - vertikal

if (bot==1){
//4-� ��������:
      srand(time(NULL));      
      
        for (k=0;k<12;k++)
      for (f=0;f<12;f++)
    p2[k][f]=0;

//***********************************����Ш��������� ��� ����***********************************************************
      dir=(rand()%2)+1; 
      if (dir==1){
      key1=(rand()%6)+1;
      key2=(rand()%10)+1; 
        for (k=0;k<4;k++)
        p2[key1+k][key2]=41;
}
     
      if (dir==2){
      key1=(rand()%7)+1;
      key2=(rand()%10)+1;
         for (k=0;k<4;k++)
         p2[key2][key1+k]=41;
}
setfillstyle(1,COLOR(0,255,0));
//***********************************������ �Ш��������� ��� ����******************************************************************      

   dir=(rand()%2)+1;
   
    if (dir==1){
        again1:
      key1=(rand()%10)+1;
      key2=(rand()%8)+3;
    if (p2[key1][key2]<30&&p2[key1+1][key2+1]<30&&p2[key1+1][key2-1]<30&&p2[key1-1][key2]<1&&p2[key1-1][key2+1]<30&&p2[key1-1][key2-1]<30&&p2[key1][key2+1]<30&&p2[key1+1][key2]<30&&p2[key1-1][key2]<30&&p2[key1-1][key2]<30){
        if(p2[key1][key2]<1&&p2[key1][key2-1]<1&&p2[key1][key2-2]<1&&p2[key1][key2-3]<1&&p2[key1+1][key2-2]<1&&p2[key1+1][key2-3]<1&&p2[key1-1][key2-2]<1&&p2[key1-1][key2-3]<1){ p2[key1][key2]=32; p2[key1][key2-1]=32;p2[key1][key2-2]=32;}
        else goto again1;     
        }
    else goto again1; //again1 - ����� �� ������ ���������� ������������, � ������ ���������� ��� � ����� ������ ��������� �����
    }//dir==2 - vertikal; dir==1 - gorizontal
    if (dir==2){
        again2:
      key1=(rand()%8)+3;
      key2=(rand()%10)+1;
    if (p2[key1][key2]<30&&p2[key1+1][key2+1]<30&&p2[key1+1][key2-1]<30&&p2[key1-1][key2+1]<30&&p2[key1-1][key2-1]<30&&p2[key1][key2+1]<30&&p2[key1+1][key2]<30&&p2[key1-1][key2]<30&&p2[key1-1][key2]<30){
            if (p2[key1-3][key2+1]<1&&p2[key1-3][key2-1]<1&&p2[key1-3][key2]<1&&p2[key1-2][key2]<1&&p2[key1-1][key2]<1&&p2[key1-2][key2+1]<1&&p2[key1-1][key2+1]<1&&p2[key1-1][key2-1]<1&&p2[key1-2][key2-1]<1&&p2[key1][key2-1]<1&&p2[key1][key2+1]<1){ p2[key1-1][key2]=32; p2[key1-2][key2]=32; p2[key1][key2]=32;}
            else goto again2;//again2 - ����� �� ������ ���������� ������������, � ������ ���������� ��� � ����� ������ ��������� �����
        }   
        else goto again2;
        }
     
      
//*****************************************************������ �Ш��������� ��� ����******************************************************************      

    dir=(rand()%2)+1;
   
    if (dir==1){
        again11:
      key1=(rand()%10)+1;
      key2=(rand()%8)+2;
    if (p2[key1][key2]<30&&p2[key1+1][key2+1]<30&&p2[key1+1][key2-1]<30&&p2[key1-1][key2+1]<30&&p2[key1-1][key2-1]<30&&p2[key1][key2+1]<30&&p2[key1+1][key2]<30){
        if(p2[key1][key2]<1&&p2[key1][key2-1]<1&&p2[key1][key2-2]<1&&p2[key1][key2-3]<1&&p2[key1-1][key2]<1&&p2[key1+1][key2-2]<1&&p2[key1+1][key2-3]<1&&p2[key1-1][key2-2]<1&&p2[key1-1][key2-3]<1){ p2[key1][key2]=31; p2[key1][key2-1]=31;p2[key1][key2-2]=31;}
        else goto again11;     
        }
    else goto again11; //again1 - ����� �� ������ ���������� ������������, � ������ ���������� ��� � ����� ������ ��������� �����
    }//dir==2 - vertikal; dir==1 - gorizontal
    if (dir==2){
        again21:
      key1=(rand()%8)+3;
      key2=(rand()%10)+1;
    if (p2[key1][key2]<30&&p2[key1+1][key2+1]<30&&p2[key1+1][key2-1]<30&&p2[key1-1][key2+1]<30&&p2[key1-1][key2-1]<30&&p2[key1][key2+1]<30&&p2[key1+1][key2]<30){ 
//����� ������ ������� �����!
            if (p2[key1-3][key2+1]<1&&p2[key1-3][key2-1]<1&&p2[key1-3][key2]<1&&p2[key1-2][key2]<1&&p2[key1-1][key2]<1&&p2[key1-2][key2+1]<1&&p2[key1-1][key2+1]<1&&p2[key1-1][key2-1]<1&&p2[key1-2][key2-1]<1&&p2[key1][key2-1]<1&&p2[key1][key2+1]<1){ p2[key1-1][key2]=31; p2[key1-2][key2]=31; p2[key1][key2]=31;}
            else goto again21;//again2 - ����� �� ������ ���������� ������������, � ������ ���������� ��� � ����� ������ ��������� �����
        }   
        else goto again21;
        }
    
//***********************************������������� ��� ����******************************************************************      

    for (n=3;n>0;n--){
   dir=(rand()%2)+1;
    if (dir==1){
        again12:
      key1=(rand()%10)+1;
      key2=(rand()%9)+2;
    if (p2[key1][key2]<1&&p2[key1+1][key2+1]<1&&p2[key1+1][key2-1]<1&&p2[key1-1][key2+1]<1&&p2[key1-1][key2-1]<1&&p2[key1][key2+1]<1&&p2[key1+1][key2]<1){
        if(p2[key1][key2]<1&&p2[key1][key2]<1&&p2[key1-1][key2]<1&&p2[key1+1][key2]<1&&p2[key1][key2-1]<1&&p2[key1][key2-2]<1&&p2[key1+1][key2-2]<1&&p2[key1-1][key2-2]<1){ p2[key1][key2]=20+n; p2[key1][key2-1]=20+n;}
        else goto again12;     
        }
    else goto again12; //again1 - ����� �� ������ ���������� ������������, � ������ ���������� ��� � ����� ������ ��������� �����
    }//dir==2 - vertikal; dir==1 - gorizontal
    if (dir==2){
        again22:
      key1=(rand()%9)+2;
      key2=(rand()%10)+1;
    if (p2[key1][key2]<1&&p2[key1+1][key2+1]<1&&p2[key1+1][key2-1]<1&&p2[key1-1][key2+1]<1&&p2[key1-1][key2-1]<1&&p2[key1][key2+1]<1&&p2[key1+1][key2]<1){ 
            if (p2[key1][key2]<1&&p2[key1-2][key2]<1&&p2[key1-1][key2]<1&&p2[key1-2][key2+1]<1&&p2[key1-1][key2+1]<1&&p2[key1-1][key2-1]<1&&p2[key1-2][key2-1]<1&&p2[key1][key2-1]<1&&p2[key1][key2+1]<1){ p2[key1-1][key2]=20+n; p2[key1][key2]=20+n;}
            else goto again22;//again2 - ����� �� ������ ���������� ������������, � ������ ���������� ��� � ����� ������ ��������� �����
        }   
        else goto again22;
        }
}

//*******************************************************������������� ��� ����******************************************************************      

    for (n=4;n>0;n--){   
        again3:
      key1=(rand()%10)+1;
      key2=(rand()%10)+1;
    if (p2[key1-1][key2]<1&&p2[key1][key2-1]<1&&p2[key1][key2]<1&&p2[key1+1][key2+1]<1&&p2[key1+1][key2-1]<1&&p2[key1-1][key2+1]<1&&p2[key1-1][key2-1]<1&&p2[key1][key2+1]<1&&p2[key1+1][key2]<1){
        if(p2[key1][key2]<1&&p2[key1][key2-1]<1){ p2[key1][key2]=10+n;}
        else goto again3;     
        }
    else goto again3; 
}

}


















//***************************************************START IGRI*****************************************************************
settextstyle(8,0,16);



    initwindow(1000,500,"Naval Battle!");
    turnprint();
    pprint();
    
    
    for (int z=1;z<11;z++)
        for (int l=1;l<11;l++)
       if(p2[z][l]>1) floodfill((z*40)+1,(l*40)+1,COLOR(255,255,255));
    getch();
    
    
    int temp,shootx,shooty;
    while(1){
        
if (turn==1){ 
              printarrow2(COLOR(0,0,0)); 
              printarrow1(COLOR(0,255,0));
}
   else{ 
   printarrow1(COLOR(0,0,0));
   printarrow2(COLOR(0,255,0));
}
             
             
        /*
   if (turn==1)    //��� ������� ������
       if((ismouseclick(WM_LBUTTONDOWN)&&mousex()%40!=0&&mousey()%40!=0&&mousex()>600&&mousex()<1000&&mousey()>40&&mousey()<440)){
          if (p2[temp2x][tempy]>1){
          numhit2++;
    setfillstyle(1,COLOR(200,0,0));
          floodfill(mousex(),mousey(),COLOR(255,255,255)); 
          clearmouseclick(WM_LBUTTONDOWN);
          p2[temp2x][tempy]=-p2[temp2x][tempy]; //����, ��� ������ ��������
          continue;
          }
          else{                   
             if (p2[temp2x][tempy]<0){ //���� ������ ��� ��������
             clearmouseclick(WM_LBUTTONDOWN); 
             continue; 
             }


          setfillstyle(1,COLOR(200,200,200));
          floodfill(mousex(),mousey(),COLOR(255,255,255));
          p2[temp2x][tempy]=-1; //����, ��� ������ ��� ��������
          turnprint();
          }
        }
        srand(time(NULL));
        if (bot==1&&turn==2){ //��� �������
            shootx=rand()%10+1;
            shooty=rand()%10+1;
            if (p1[shootx][shooty]!=-1&&p1[shootx][shooty]>1) {
            p1[shootx][shooty]=-p1[shootx][shooty];
            setfillstyle(1,COLOR(200,0,0));
            floodfill(shootx*40+5,shooty*40+5,COLOR(255,255,255));    
        }
        if (p1[shootx][shooty]<0){
            continue;
            }
        
            if (p1[shootx][shooty]==0){
            turnprint();
            setfillstyle(1,COLOR(200,200,200));
            p1[shootx][shooty]=-1;
            floodfill(shootx*40+5,shooty*40+5,COLOR(255,255,255));
        }
            }
        
    if (bot=0&&turn==2) //��� ������� ������
       if((ismouseclick(WM_LBUTTONDOWN)&&mousex()%40!=0&&mousey()%40!=0&&mousex()>600&&mousex()<1000&&mousey()>40&&mousey()<440)){
          if (p2[temp2x][tempy]>1){
          numhit2++;
    setfillstyle(1,COLOR(200,0,0));
          floodfill(mousex(),mousey(),COLOR(255,255,255)); 
          clearmouseclick(WM_LBUTTONDOWN);
          p2[temp2x][tempy]=-p2[temp2x][tempy]; //����, ��� ������ ��������
          continue;
          }
          else{                   
             if (p2[temp2x][tempy]<0){ //���� ������ ��� ��������
             clearmouseclick(WM_LBUTTONDOWN); 
             continue; 
             }


          setfillstyle(1,COLOR(200,200,200));
          floodfill(mousex(),mousey(),COLOR(255,255,255));
          p2[temp2x][tempy]=-1; //����, ��� ������ ��� ��������
          turnprint();
          }
       }              
       
    clearmouseclick(WM_LBUTTONDOWN);                                                                 
    
    if (numhit1==20||numhit2==20) break;
    if(kbhit()) if(getch()==27) break;
    delay(1);
}*/

        tempx=(int)((float)mousex()/40);
        tempy=(int)((float)mousey()/40);
        temp2x=(int)(((float)mousex()-560)/40);
printf("%i %i = %i\n",temp2x,tempy,p2[temp2x][tempy]);
bot=1;//********
    //***************************************************����� ������ �����************************************************************
    if (turn==1){
        if (ismouseclick(WM_LBUTTONDOWN)&&mousex()%40!=0&&mousey()%40!=0&&mousex()>600&&mousex()<1000&&mousey()>40&&mousey()<440){
            if (p2[temp2x][tempy]>1) {
                        
                if((p2[temp2x][tempy])/10==1) { //******************��������� ������ ��� 1 ���������
                    setfillstyle(1,COLOR(200,200,200));
                    for (int z=temp2x-1;z<temp2x+2;z++)
                        for (int l=tempy-1;l<tempy+2;l++){
                        if (z>0&&l>0&&l<11&&p2[z][l]<1) {
                        p2[z][l]=-1;
                        delay(10);
                       if (p2[z][l]==-1) floodfill(z*40+1+560,l*40+1,COLOR(255,255,255));
                }
                    }
                    }
                if((p2[temp2x][tempy])/10==2) { //****************��������� ������ ��� 2 ���������
                    setfillstyle(1,COLOR(200,200,200));
                    if (p2[temp2x-1][tempy]==-p2[temp2x][tempy]) 
                    for (int z=temp2x-2;z<temp2x+2;z++) 
                        for (int l=tempy-1;l<tempy+2;l++){ 
                        if (p2[z][l]==0)p2[z][l]=-1; 
                        delay(10); 
                        if (z>0&&l>0&&l<11&&p2[z][l]==-1)floodfill(z*40+1+560,l*40+1,COLOR(255,255,255));
                    }
                    if(p2[temp2x+1][tempy]==-p2[temp2x][tempy]){ 
                        for (int z=temp2x-1;z<temp2x+3;z++)
                            for (int l=tempy-1;l<tempy+2;l++){
                                if (p2[z][l]==0)p2[z][l]=-1;
                                delay(10);
                                if (z>0&&l>0&&l<11&&p2[z][l]==-1) floodfill(z*40+1+560,l*40+1,COLOR(255,255,255));
                                }
                    }
                    if(p2[temp2x][tempy-1]==-p2[temp2x][tempy])
                        for(int z=temp2x-1;z<temp2x+2;z++)
                            for(int l=tempy-2;l<tempy+2;l++){
                                if (p2[z][l]==0)p2[z][l]=-1;
                                delay(10);
                                if (z>0&&l>0&&l<11&&p2[z][l]==-1) floodfill(z*40+1+560,l*40+1,COLOR(255,255,255));
                                }
                    if(p2[temp2x][tempy+1]==-p2[temp2x][tempy])
                        for (int z=temp2x-1;z<temp2x+2;z++)
                            for (int l=tempy-1;l<tempy+3;l++){
                         if (p2[z][l]==0)p2[z][l]=-1;
                                delay(10);
                                if (z>0&&l>0&&l<11&&p2[z][l]==-1) floodfill(z*40+1+560,l*40+1,COLOR(255,255,255));
                        }
                   
            }
            if(p2[temp2x][tempy]/10==3){ //************************��������� ������ ��� 3 ���������    
            setfillstyle(1,COLOR(200,200,200));
            
                if (p2[temp2x-1][tempy]==-p2[temp2x][tempy]&&p2[temp2x+1][tempy]==-p2[temp2x][tempy]){
                for (int z=temp2x-2;z<temp2x+3;z++)
                    for (int l=tempy-1;l<tempy+2;l++){
                        if (p2[z][l]==0)p2[z][l]=-1;
                        delay(10);
                        if (z>0&&l>0&&l<11&&p2[z][l]==-1) floodfill(z*40+1+560,l*40+1,COLOR(255,255,255));
                    
                    }
        }
                        if (p2[temp2x+1][tempy]==-p2[temp2x][tempy]&&p2[temp2x+2][tempy]==-p2[temp2x][tempy]){
                for (int z=temp2x-1;z<temp2x+4;z++)
                    for (int l=tempy-1;l<tempy+2;l++){
                        if (p2[z][l]==0)p2[z][l]=-1;
                        delay(10);
                        if (z>0&&l>0&&l<11&&p2[z][l]==-1) floodfill(z*40+1+560,l*40+1,COLOR(255,255,255));
                    
                    }
        }
                        if (p2[temp2x-1][tempy]==-p2[temp2x][tempy]&&p2[temp2x-2][tempy]==-p2[temp2x][tempy]){
                 
                    for (int z=temp2x-3;z<temp2x+2;z++)
                    for (int l=tempy-1;l<tempy+2;l++){
                   
                        if (p2[z][l]==0)p2[z][l]=-1;
                        delay(10);
                        if (z>0&&l>0&&l<11&&p2[z][l]==-1) floodfill(z*40+1+560,l*40+1,COLOR(255,255,255));
                    
                    }
        }
            
            
            
        }
                
                
            setfillstyle(1,COLOR(200,0,0));
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            p2[temp2x][tempy]=-p2[temp2x][tempy];
            
            continue;
            }
            if (p2[temp2x][tempy]==0){ 
            setfillstyle(1,COLOR(200,200,200));
            floodfill(mousex(),mousey(),COLOR(255,255,255)); 
            p2[temp2x][tempy]=-1; 
            turnprint();
            clearmouseclick(WM_LBUTTONDOWN);
            }
            
            if (p2[temp2x][tempy]<-1){ clearmouseclick(WM_LBUTTONDOWN); continue; }
        }
    }
    
    //**************************************************����� ���***********************************************************
            if (bot==1&&turn==2){ //
            shootx=rand()%10+1;
            shooty=rand()%10+1;
            if (p1[shootx][shooty]!=-1&&p1[shootx][shooty]>1) {
            p1[shootx][shooty]=-p1[shootx][shooty];
            setfillstyle(1,COLOR(200,0,0));
            floodfill(shootx*40+5,shooty*40+5,COLOR(255,255,255));    
        }
        if (p1[shootx][shooty]<0){
            continue;
            }
        
            if (p1[shootx][shooty]==0){
            turnprint();
            setfillstyle(1,COLOR(200,200,200));
            p1[shootx][shooty]=-1;
            floodfill(shootx*40+5,shooty*40+5,COLOR(255,255,255));
        }
            }
        clearmouseclick(WM_LBUTTONDOWN);
        delay(10);
}
if (numhit1==20) printf("WINNER: PLAYER1");
else printf("WINNER: PLAYER2");

closegraph();
getch();
end:
tx=0;
    }
