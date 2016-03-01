#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>

//Морской бой!
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
    int t=5;
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
t=565;
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
    }



using namespace std;

int main(){
    int p1[11][11],p2[11][11],put=1;
    for (int i=0;i<11;i++)
    for (int j=0;j<11;j++){
p1[i][j]=0;
p2[i][j]=0;
}
int krayx,krayy;
  initwindow(440,800,"Place your boats, player 1");
  pprint();
  settextstyle(8,0,4);
  setcolor(COLOR(0,255,0));
  bgiout<<"Поставь 4-х палубник";
  outstreamxy(0,700);
  
  int first=1,second=0,third=-100000,ex,ey,dir=0; //dir=1 - gorizontal; dir=2 - vertikal
  setfillstyle(1,COLOR(0,255,0));
  //*********************************************************ЧЕТЫРЁХПАЛУБНИК*************************************************************
while (1){
      //printf("%i %i\n",p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)+1],p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)-1]);
         if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousex()<440&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
       if (first){
            if (p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]!=1&&mousex()%40!=0&&mousey()%40!=0){
            p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]=1;
          floodfill(mousex(),mousey(),COLOR(255,255,255));    
          second=1;
          first=0;    
          ex=(int)(((float)mousex()-40)/40);
          ey=(int)(((float)mousey()-40)/40);
            }
         }
      
      
      if (first==0)
         if (second){
 if ((p1[(int)(((float)mousex()-40)/40)+1][(int)(((float)mousey()-40)/40)]==1||p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)+1]==1
 ||p1[(int)(((float)mousex()-40)/40)-1][(int)(((float)mousey()-40)/40)]==1
 ||p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)-1]==1)&&p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]!=1){
  floodfill(mousex(),mousey(),COLOR(255,255,255));
  p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]=1;
  second=0;
  third=2;  

  if (ex-((int)(((float)mousex()-40)/40))==0) dir=2;
  else dir=1;
  printf("dir=%i",dir);
 }}
            if (third>=0){
             if(dir==2){
              if ((p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)+1]==1||p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)-1]==1)&&p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]!=1){
                    third--;
  floodfill(mousex(),mousey(),COLOR(255,255,255));
  p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]=1;
     if (third==0) break;
}
             }         
             if (dir==1){
        if (p1[(int)(((float)mousex()-40)/40)+1][(int)(((float)mousey()-40)/40)]>1||p1[(int)(((float)mousex()-40)/40)-1][(int)(((float)mousey()-40)/40)]>1){
                            third--;
  floodfill(mousex(),mousey(),COLOR(255,255,255));
  p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]=4;
                    }    
                }         
            }
        if (third==0) break;
}//*******************************************
      clearmouseclick(WM_LBUTTONDOWN);
      delay(1);
}
bgiout<<"Поставьте два 3-х палубника";
outstreamxy(0,700);

int n=2,tempx,tempy;
first=1;
setfillstyle(1,COLOR(0,255,0));
while (1){
if (n==1){bgiout<<"Поставьте 3-х палубник";
outstreamxy(0,700);
}
clearmouseclick(WM_LBUTTONDOWN);
    tempx=((int)(float)mousex()-40)/40;
    tempy=((int)(float)mousey()-40)/40;
    if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousex()%40!=0&&mousey()%40!=0){
        if (first&&p1[tempx][tempy]<1&&p1[tempx][tempy+1]<1&&p1[tempx+1][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy]<1&&p1[tempx][tempy-1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx+1][tempy-1]<1){
            p1[tempx][tempy]=3;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            first=0;
            second=1;
            clearmouseclick(WM_LBUTTONDOWN);
            }
        if (second&&p1[tempx][tempy]<1&&p1[tempx+1][tempy+1]!=1&&p1[tempx-1][tempy-1]!=1&&p1[tempx-1][tempy+1]!=1&&p1[tempx+1][tempy-1]!=1){
            if (p1[tempx][tempy+1]==3||p1[tempx][tempy-1]==3) dir=2;
            else dir=1;
            p1[tempx][tempy]=3;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            second=0;
            third=1;
            }
        if (third&&dir==2&&p1[tempx][tempy]<1&&((p1[tempx][tempy-1]==3&&p1[tempx][tempy+1]==0)||(p1[tempx][tempy-1]==0&&p1[tempx][tempy+1]==3))){
            p1[tempx][tempy]=3;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        if (third&&dir==1&&p1[tempx][tempy]<1&&((p1[tempx-1][tempy]==0&&p1[tempx+1][tempy]==3)||(p1[tempx-1][tempy]==3&&p1[tempx+1][tempy]==0))){
            p1[tempx][tempy]=3;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
            first=1;
            third=0;
            dir=0;
            }
        }
    if (n==0) break;
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
   if (!(turn-1))    //Ход первого игрока
       if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousex()<440&&mousey()>40&&mousey()<440){
          if (p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]>=1){
          numhit1++;
          floodfill(mousex(),mousey(),COLOR(255,255,255));    
    p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]=-1; //флаг на то, что клетка уже известна
          continue;
          }

          else{
                  if (p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]==-1){
                  clearmouseclick(WM_LBUTTONDOWN); 
                  continue;
                  } //Если клетка уже известна
                  else { //ОЧЕНЬ ВАЖНЫЙ И ОЧЕНЬ БЕСПОЛЕЗНЫЙ ELSE БЕЗ КОТОРОГО НИЧЕГО НЕ РАБОТАЕТ... вот...
          setfillstyle(1,COLOR(200,200,200));
              floodfill(mousex(),mousey(),COLOR(255,255,255)); 
              p1[(int)(((float)mousex()-40)/40)][(int)(((float)mousey()-40)/40)]=-1; //Клетка уже известна
              }
          }
         if (mousex()%40!=0||mousey()%40==0) turnprint(); //Чтобы клик на расчерчивающую линию не считался за ход
       }
        
    if ((turn-1)) //Ход второго игрока
       if((ismouseclick(WM_LBUTTONDOWN)&&mousex()>600&&mousex()<1000&&mousey()>40&&mousey()<440)){
          if (p2[(int)(((float)mousex()-600)/40)][(int)(((float)mousey()-40)/40)]==1){
          numhit2++;
          floodfill(mousex(),mousey(),COLOR(255,255,255)); 
          clearmouseclick(WM_LBUTTONDOWN);
          p2[(int)(((float)mousex()-600)/40)][(int)(((float)mousey()-40)/40)]==-1; //Флаг, что клетка известна
          continue;
          }
          else{                   
             if (p2[(int)(((float)mousex()-600)/40)][(int)(((float)mousey()-40)/40)]==-1){ //Если клетка уже известна
             clearmouseclick(WM_LBUTTONDOWN); 
             continue; 
             }


          setfillstyle(1,COLOR(200,200,200));
          floodfill(mousex(),mousey(),COLOR(255,255,255));
          p2[(int)(((float)mousex()-600)/40)][(int)(((float)mousey()-40)/40)]=-1; //Флаг, что клетка уже известна
          }
      if (mousex()%40!=0||mousey()%40==0) turnprint(); //Чтобы клик на расчерчивающую линию не считался за ход
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
