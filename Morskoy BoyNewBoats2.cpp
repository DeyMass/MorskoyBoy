#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>

//������� ���!
using namespace std;
int turn=2;
void printarrow1(int col){
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
     void printarrow2(int col){
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
    moveto(t,40);
    outtext("1");
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
    moveto(t,40);
    outtext("0");
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
    int p1[12][12],p2[12][12],put=1;
    for (int i=0;i<12;i++)
    for (int j=0;j<12;j++){
p1[i][j]=0;
p2[i][j]=0;
}
  initwindow(440,800,"Place your boats, player 1");
  pprint();
  settextstyle(8,0,4);
  setcolor(COLOR(0,255,0));
  bgiout<<"������� 4-� ��������";
  outstreamxy(0,700);
  
  int first=1,second=0,third=-100,tempx,tempy,ex,ey,dir=0; //dir=1 - gorizontal; dir=2 - vertikal
  setfillstyle(1,COLOR(0,255,0));
  //*********************************************************����Ш���������*************************************************************
while (1){
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
bgiout<<"��������� ��� 3-� ���������";
outstreamxy(0,700);

int n=1;
first=1;
setfillstyle(1,COLOR(0,255,0));
dir=0;
while (1){

    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousex()%40!=0&&mousey()%40!=0){
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
        if (third==1&&dir==2&&p1[tempx][tempy]<1&&((p1[tempx][tempy-1]==31&&p1[tempx][tempy+1]==0)||(p1[tempx][tempy-1]==0&&p1[tempx][tempy+1]==31))){
            p1[tempx][tempy]=31;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        if (third==1&&dir==1&&p1[tempx][tempy]<1&&((p1[tempx-1][tempy]==0&&p1[tempx+1][tempy]==31)||(p1[tempx-1][tempy]==31&&p1[tempx+1][tempy]==0))){
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
first=1;
setfillstyle(1,COLOR(0,255,0));
dir=0;
bgiout<<"��������� 3-� ��������";
outstreamxy(0,700);
while (1){

    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousex()%40!=0&&mousey()%40!=0){
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
    
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousex()%40!=0&&mousey()%40!=0){
        if (first==1&&p1[tempx][tempy]<1&&p1[tempx][tempy+1]<1&&p1[tempx+1][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy]<1&&p1[tempx][tempy-1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx+1][tempy-1]<1){
            p1[tempx][tempy]=20+n;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            first=0;
            second=1;
            }
        if (second==1&&p1[tempx][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx+1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&(p1[tempx-1][tempy]==20+n||p1[tempx+1][tempy]==20+n||p1[tempx][tempy+1]==20+n||p1[tempx][tempy-1]==20+n)){
            p1[tempx][tempy]=20+n;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            second=0;
            n--;
            first=1;
            }
    }
    printf("%i\n",p1[tempx][tempy]);
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
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousex()%40!=0&&mousey()%40!=0){
        if (p1[tempx][tempy]<1&&p1[tempx][tempy+1]<1&&p1[tempx+1][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy]<1&&p1[tempx][tempy-1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx+1][tempy-1]<1){
            p1[tempx][tempy]=10+n;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
        }
    }
    clearmouseclick(WM_LBUTTONDOWN);
    delay(5);
    
}



































//***************************************************START IGRI*****************************************************************
int tx=0,ty=0;
settextstyle(8,0,16);
int c=0,checksum=0,flag=0,ready=0;

int numhit1=0,numhit2=0;

    initwindow(1000,500,"Naval Battle!");
    turnprint();
    pprint();
    while(1){
if (turn==1){ 
              printarrow2(COLOR(0,0,0)); 
              printarrow1(COLOR(0,255,0));
}
   else{ 
   printarrow1(COLOR(0,0,0));
   printarrow2(COLOR(0,255,0));
}
             
    setfillstyle(1,COLOR(200,0,0));
   if (!(turn-1))    //��� ������� ������
       if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousex()<440&&mousey()>40&&mousey()<440){
          if (p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]>=1){
          numhit1++;
          floodfill(mousex(),mousey(),COLOR(255,255,255));    
    p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]=-1; //���� �� ��, ��� ������ ��� ��������
          continue;
          }

          else{
                  if (p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]==-1){
                  clearmouseclick(WM_LBUTTONDOWN); 
                  continue;
                  } //���� ������ ��� ��������
                  else { //����� ������ � ����� ����������� ELSE ��� �������� ������ �� ��������... ���...
          setfillstyle(1,COLOR(200,200,200));
              floodfill(mousex(),mousey(),COLOR(255,255,255)); 
              p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]=-1; //������ ��� ��������
              }
          }
         if (mousex()%40!=0||mousey()%40==0) turnprint(); //����� ���� �� �������������� ����� �� �������� �� ���
       }
        
    if ((turn-1)) //��� ������� ������
       if((ismouseclick(WM_LBUTTONDOWN)&&mousex()>600&&mousex()<1000&&mousey()>40&&mousey()<440)){
          if (p2[(int)(((float)mousex()-600)/40)][(int)(((float)mousey()-40)/40)]==1){
          numhit2++;
          floodfill(mousex(),mousey(),COLOR(255,255,255)); 
          clearmouseclick(WM_LBUTTONDOWN);
          p2[(int)(((float)mousex()-600)/40)][(int)(((float)mousey()-40)/40)]==-1; //����, ��� ������ ��������
          continue;
          }
          else{                   
             if (p2[(int)(((float)mousex()-600)/40)][(int)(((float)mousey()-40)/40)]==-1){ //���� ������ ��� ��������
             clearmouseclick(WM_LBUTTONDOWN); 
             continue; 
             }


          setfillstyle(1,COLOR(200,200,200));
          floodfill(mousex(),mousey(),COLOR(255,255,255));
          p2[(int)(((float)mousex()-600)/40)][(int)(((float)mousey()-40)/40)]=-1; //����, ��� ������ ��� ��������
          }
      if (mousex()%40!=0||mousey()%40==0) turnprint(); //����� ���� �� �������������� ����� �� �������� �� ���
       }              
       
    clearmouseclick(WM_LBUTTONDOWN);                                                                 
    
    if (numhit1==20||numhit2==20) break;
    if(kbhit()) if(getch()==27) break;
    delay(1 );
}
if (numhit1==20) printf("WINNER: PLAYER2");
else printf("WINNER: PLAYER1");

closegraph();
getch();
    }
