#include <graphics.h>
#include <ctime>
#include <stdlib.h>
//Морской бой!
using namespace std;
int turn=2;
void opisCircle(int p1[12][12],int tempx,int tempy,int flag=0){
     int magic=0;
     setfillstyle(1,COLOR(200,200,200));
     if (flag==1) magic=560;
                if((p1[tempx][tempy])/10==1) { //******************описывать кружок для 1 палубника
                    for (int z=tempx-1;z<tempx+2;z++)
                        for (int l=tempy-1;l<tempy+2;l++){
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]<1) {
                        p1[z][l]=-1;
                        delay(2);
                       if (p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                }
                    }
                    }
                if((p1[tempx][tempy])/10==2) { //****************описывать кружок для 2 палубника
                    if (p1[tempx-1][tempy]==-p1[tempx][tempy])
                    for (int z=tempx-2;z<tempx+2;z++)
                        for (int l=tempy-1;l<tempy+2;l++){
                        if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1)floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                    }
                    if(p1[tempx+1][tempy]==-p1[tempx][tempy]){
                        for (int z=tempx-1;z<tempx+3;z++)
                            for (int l=tempy-1;l<tempy+2;l++){
                                if (p1[z][l]==0)p1[z][l]=-1;
                                delay(2);
                                if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                                }
                    }
                    if(p1[tempx][tempy-1]==-p1[tempx][tempy])
                        for(int z=tempx-1;z<tempx+2;z++)
                            for(int l=tempy-2;l<tempy+2;l++){
                                if (p1[z][l]==0)p1[z][l]=-1;
                                delay(2);
                                if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                                }
                    if(p1[tempx][tempy+1]==-p1[tempx][tempy])
                        for (int z=tempx-1;z<tempx+2;z++)
                            for (int l=tempy-1;l<tempy+3;l++){
                         if (p1[z][l]==0)p1[z][l]=-1;
                                delay(2);
                                if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                        }
            }
            if(p1[tempx][tempy]/10==3){ //************************Описывать кружок для 3 палубника
                if (p1[tempx-1][tempy]==-p1[tempx][tempy]&&p1[tempx+1][tempy]==-p1[tempx][tempy]){
                for (int z=tempx-2;z<tempx+3;z++)
                    for (int l=tempy-1;l<tempy+2;l++){
                        if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&l>0&&l<11&&z<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                    }
        }
                        if (p1[tempx+1][tempy]==-p1[tempx][tempy]&&p1[tempx+2][tempy]==-p1[tempx][tempy]){
                for (int z=tempx-1;z<tempx+4;z++)
                    for (int l=tempy-1;l<tempy+2;l++){
                        if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                    }
        }
                        if (p1[tempx-1][tempy]==-p1[tempx][tempy]&&p1[tempx-2][tempy]==-p1[tempx][tempy]){
                    for (int z=tempx-3;z<tempx+2;z++)
                    for (int l=tempy-1;l<tempy+2;l++){
                        if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                    }
        }
                        if (p1[tempx][tempy+1]==-p1[tempx][tempy]&&p1[tempx][tempy-1]==-p1[tempx][tempy]){
                        for (int z=tempx-1;z<tempx+2;z++)
                            for (int l=tempy-2;l<tempy+3;l++){
                        if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                }
    }
                        if(p1[tempx][tempy+1]==-p1[tempx][tempy]&&p1[tempx][tempy+2]==-p1[tempx][tempy]){
                        for (int z=tempx-1;z<tempx+2;z++)
                            for (int l=tempy-1;l<tempy+4;l++){
                        if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                }
            }
                                    if(p1[tempx][tempy-1]==-p1[tempx][tempy]&&p1[tempx][tempy-2]==-p1[tempx][tempy]){
                        for (int z=tempx-1;z<tempx+2;z++)
                            for (int l=tempy-3;l<tempy+2;l++){
                        if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                }
            }
        }
        if (p1[tempx][tempy]/10==4){ //Обруч вокруг 4-хпалубника
            if (p1[tempx+1][tempy]==-p1[tempx][tempy]&&p1[tempx-1][tempy]==-p1[tempx][tempy]&&p1[tempx-2][tempy]==-p1[tempx][tempy])
             for (int z=tempx-3;z<tempx+3;z++)
                for (int l=tempy-1;l<tempy+2;l++){
                     if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                    }
           if (p1[tempx-3][tempy]==-p1[tempx][tempy]&&p1[tempx-1][tempy]==-p1[tempx][tempy]&&p1[tempx-2][tempy]==-p1[tempx][tempy])
                for (int z=tempx-4;z<tempx+2;z++)
                    for (int l=tempy-1;l<tempy+2;l++){
                     if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                        }
            if (p1[tempx+2][tempy]==-p1[tempx][tempy]&&p1[tempx+1][tempy]==-p1[tempx][tempy]&&p1[tempx-1][tempy]==-p1[tempx][tempy])
                 for (int z=tempx-2;z<tempx+4;z++)
                for (int l=tempy-1;l<tempy+2;l++){
                     if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                    }
           if (p1[tempx+3][tempy]==-p1[tempx][tempy]&&p1[tempx+1][tempy]==-p1[tempx][tempy]&&p1[tempx+2][tempy]==-p1[tempx][tempy])
                for (int z=tempx-1;z<tempx+5;z++)
                    for (int l=tempy-1;l<tempy+2;l++){
                     if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                        }
                        //ВЕРТИКАЛЬНЫЕ ЧЕТЫРЁХПАЛУБНИКИ
               if (p1[tempx][tempy-1]==-p1[tempx][tempy]&&p1[tempx][tempy-2]==-p1[tempx][tempy]&&p1[tempx][tempy-3]==-p1[tempx][tempy])
                for (int z=tempx-1;z<tempx+2;z++)
                    for (int l=tempy-4;l<tempy+2;l++){
                     if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                        }
               if (p1[tempx][tempy+1]==-p1[tempx][tempy]&&p1[tempx][tempy-1]==-p1[tempx][tempy]&&p1[tempx][tempy-2]==-p1[tempx][tempy])
                for (int z=tempx-1;z<tempx+2;z++)
                    for (int l=tempy-3;l<tempy+3;l++){
                     if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                        }
               if (p1[tempx][tempy+2]==-p1[tempx][tempy]&&p1[tempx][tempy+1]==-p1[tempx][tempy]&&p1[tempx][tempy-1]==-p1[tempx][tempy])
                for (int z=tempx-1;z<tempx+2;z++)
                    for (int l=tempy-2;l<tempy+4;l++){
                     if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                        }
              if (p1[tempx][tempy+2]==-p1[tempx][tempy]&&p1[tempx][tempy+1]==-p1[tempx][tempy]&&p1[tempx][tempy+3]==-p1[tempx][tempy])
                  for (int z=tempx-1;z<tempx+2;z++)
                    for (int l=tempy-1;l<tempy+5;l++){
                        if (p1[z][l]==0)p1[z][l]=-1;
                        delay(2);
                        if (z>0&&z<11&&l>0&&l<11&&p1[z][l]==-1) floodfill(z*40+1+magic,l*40+1,COLOR(255,255,255));
                        }
                        }
     }
void random(int p2[12][12]){
 int n,dir,f,k,key1,key2;//dir=1 - gorizontal; dir=2 - vertikal
//4-х палубник:
      srand(time(NULL));
        for (k=0;k<12;k++)
      for (f=0;f<12;f++)
    p2[k][f]=0;
//***********************************ЧЕТЫРЁХПАЛУБНИК ДЛЯ БОТА***********************************************************
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
//***********************************ПЕРВЫЙ ТРЁХПАЛУБНИК ДЛЯ БОТА******************************************************************
   dir=(rand()%2)+1;
    if (dir==1){
        again1:
      key1=(rand()%10)+1;
      key2=(rand()%8)+3;
    if (p2[key1][key2]<30&&p2[key1+1][key2+1]<30&&p2[key1+1][key2-1]<30&&p2[key1-1][key2]<1&&p2[key1-1][key2+1]<30&&p2[key1-1][key2-1]<30&&p2[key1][key2+1]<30&&p2[key1+1][key2]<30&&p2[key1-1][key2]<30&&p2[key1-1][key2]<30){
        if(p2[key1][key2]<1&&p2[key1][key2-1]<1&&p2[key1][key2-2]<1&&p2[key1][key2-3]<1&&p2[key1+1][key2-2]<1&&p2[key1+1][key2-3]<1&&p2[key1-1][key2-2]<1&&p2[key1-1][key2-3]<1){ p2[key1][key2]=32; p2[key1][key2-1]=32;p2[key1][key2-2]=32;}
        else goto again1;
        }
    else goto again1; //again1 - чтобы не меняло траекторию трёхпалубника, а просто переносило его в любое другое свободное место
    }//dir==2 - vertikal; dir==1 - gorizontal
    if (dir==2){
        again2:
      key1=(rand()%7)+3;
      key2=(rand()%10)+1;
    if (p2[key1][key2]<30&&p2[key1+1][key2+1]<30&&p2[key1+1][key2-1]<30&&p2[key1-1][key2+1]<30&&p2[key1-1][key2-1]<30&&p2[key1][key2+1]<30&&p2[key1+1][key2]<30&&p2[key1-1][key2]<30&&p2[key1-1][key2]<30){
            if (p2[key1-3][key2+1]<1&&p2[key1-3][key2-1]<1&&p2[key1-3][key2]<1&&p2[key1-2][key2]<1&&p2[key1-1][key2]<1&&p2[key1-2][key2+1]<1&&p2[key1-1][key2+1]<1&&p2[key1-1][key2-1]<1&&p2[key1-2][key2-1]<1&&p2[key1][key2-1]<1&&p2[key1][key2+1]<1){ p2[key1-1][key2]=32; p2[key1-2][key2]=32; p2[key1][key2]=32;}
            else goto again2;//again2 - чтобы не меняло траекторию трёхпалубника, а просто переносило его в любое другое свободное место
        }
        else goto again2;
        }
//*****************************************************ВТОРОЙ ТРЁХПАЛУБНИК ДЛЯ БОТА******************************************************************
    dir=(rand()%2)+1;
    if (dir==1){
        again11:
      key1=(rand()%10)+1;
      key2=(rand()%8)+3;
    if (p2[key1][key2]<30&&p2[key1+1][key2+1]<30&&p2[key1+1][key2-1]<30&&p2[key1-1][key2+1]<30&&p2[key1-1][key2-1]<30&&p2[key1][key2+1]<30&&p2[key1+1][key2]<30){
        if(p2[key1][key2]<1&&p2[key1][key2-1]<1&&p2[key1][key2-2]<1&&p2[key1][key2-3]<1&&p2[key1-1][key2]<1&&p2[key1+1][key2-2]<1&&p2[key1+1][key2-3]<1&&p2[key1-1][key2-2]<1&&p2[key1-1][key2-3]<1){ p2[key1][key2]=31; p2[key1][key2-1]=31;p2[key1][key2-2]=31;}
        else goto again11;
        }
    else goto again11; //again1 - чтобы не меняло траекторию трёхпалубника, а просто переносило его в любое другое свободное место
    }//dir==2 - vertikal; dir==1 - gorizontal
    if (dir==2){
        again21:
      key1=(rand()%8)+3;
      key2=(rand()%10)+1;
    if (p2[key1][key2]<30&&p2[key1+1][key2+1]<30&&p2[key1+1][key2-1]<30&&p2[key1-1][key2+1]<30&&p2[key1-1][key2-1]<30&&p2[key1][key2+1]<30&&p2[key1+1][key2]<30){
//Здесь таится древняя магия!
            if (p2[key1-3][key2+1]<1&&p2[key1-3][key2-1]<1&&p2[key1-3][key2]<1&&p2[key1-2][key2]<1&&p2[key1-1][key2]<1&&p2[key1-2][key2+1]<1&&p2[key1-1][key2+1]<1&&p2[key1-1][key2-1]<1&&p2[key1-2][key2-1]<1&&p2[key1][key2-1]<1&&p2[key1][key2+1]<1){ p2[key1-1][key2]=31; p2[key1-2][key2]=31; p2[key1][key2]=31;}
            else goto again21;//again2 - чтобы не меняло траекторию трёхпалубника, а просто переносило его в любое другое свободное место
        }
        else goto again21;
        }
//***********************************ДВУХПАЛУБНИКИ ДЛЯ БОТА******************************************************************
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
    else goto again12; //again1 - чтобы не меняло траекторию трёхпалубника, а просто переносило его в любое другое свободное место
    }//dir==2 - vertikal; dir==1 - gorizontal
    if (dir==2){
        again22:
      key1=(rand()%9)+2;
      key2=(rand()%10)+1;
    if (p2[key1][key2]<1&&p2[key1+1][key2+1]<1&&p2[key1+1][key2-1]<1&&p2[key1-1][key2+1]<1&&p2[key1-1][key2-1]<1&&p2[key1][key2+1]<1&&p2[key1+1][key2]<1){
            if (p2[key1][key2]<1&&p2[key1-2][key2]<1&&p2[key1-1][key2]<1&&p2[key1-2][key2+1]<1&&p2[key1-1][key2+1]<1&&p2[key1-1][key2-1]<1&&p2[key1-2][key2-1]<1&&p2[key1][key2-1]<1&&p2[key1][key2+1]<1){ p2[key1-1][key2]=20+n; p2[key1][key2]=20+n;}
            else goto again22;//again2 - чтобы не меняло траекторию трёхпалубника, а просто переносило его в любое другое свободное место
        }
        else goto again22;
        }
}
//*******************************************************ОДНОПАЛУБНИКИ ДЛЯ БОТА******************************************************************
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
void placeboats(int p1[12][12]){
		int first=1,second=0,third=0,ex,ey,tempx,tempy,dir=0,n;
		doagain:
    setcolor(COLOR(255,255,255));
    cleardevice();
  pprint();
  for (int z=0;z<12;z++){
      p1[z][0]=-1;
      p1[0][z]=-1;
}
setfillstyle(1,COLOR(0,0,0));
bar(460,0,700,550);
  settextstyle(8,0,4);
  setcolor(COLOR(0,255,0));
  bgiout<<"Поставьте 4-х палубник";
  outstreamxy(0,600);
  setfillstyle(1,COLOR(255,0,0));
bar(600,0,800,100);
  setcolor(COLOR(0,255,0));
  settextstyle(1,0,2);
  first=1;
  second=0;
  third=0;
  outtextxy(550,400,"PLACE");
  outtextxy(550,450,"RANDOM");
  setfillstyle(1,COLOR(0,255,0));
//Первый игрок расставляет свои корабли
  //*********************************************************ЧЕТЫРЁХПАЛУБНИК*************************************************************
while (1){
         if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>550&&mousex()<800&&mousey()>400&&mousey()<600){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p1[z][l]=0;
                random(p1);
                cleardevice();
                setcolor(COLOR(255,255,255));
                pprint();
                setfillstyle(1,COLOR(0,0,0));
bar(460,0,700,800);
                setfillstyle(1,COLOR(0,255,0));
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    if (p1[z][l]>1) floodfill(z*40+1,l*40+1,COLOR(255,255,255));
                    delay(2000);
                    goto startgame;
}
         if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>600&&mousex()<800&&mousey()>0&&mousey()<100){
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
            if (p1[tempx][tempy]==0&&p1[tempx][tempy]<1&&mousex()%40!=0&&mousey()%40!=0){
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
//*************************************************************ПЕРВЫЙ ТРЁХПАЛУБНИК*********************************************************
  settextstyle(8,0,4);
bgiout<<"Поставьте два 3-х палубника";
outstreamxy(0,600);
setfillstyle(1,COLOR(0,0,0));
bar(441,100,800,550);
first=1;
setfillstyle(1,COLOR(0,255,0));
dir=0;
while (1){
          printf("%i %i\n",mousex(),mousey());
     if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>600&&mousex()<800&&mousey()>0&&mousey()<100){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p1[z][l]=0;
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain;
            }
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    if (p1[tempx][tempy]==0&&ismouseclick(WM_LBUTTONDOWN)&&mousex()<440&&mousex()>40&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
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
first=1;
setfillstyle(1,COLOR(0,255,0));
dir=0;
  settextstyle(8,0,4);
bgiout<<"поставьте 3-х палубник                ";
//*******************************************************ВТОРОЙ ТРЕХПАЛУБНИК*************************************************************************
outstreamxy(0,600);
while (1){
             if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>600&&mousex()<800&&mousey()>0&&mousey()<100){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p1[z][l]=0;
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain;
            }
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
    if (p1[tempx][tempy]==0&&mousex()<440&&ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
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
    delay(10);
    }
  settextstyle(8,0,4);
bgiout<<"поставьте 3 2-х палубника                         " ;
outstreamxy(0,600);
n=3;
first=1;
third=0;
second=0;
//---------------------------------------------------ДВУХПАЛУБНИКИ! ОДНИМ ЦИКЛОМ---------------------------------------------------------------------
while(n>0){
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
              if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>600&&mousex()<800&&mousey()>0&&mousey()<100){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p1[z][l]=0;
                n=1;
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain;
            }
    if (p1[tempx][tempy]==0&&ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousey()>40&&mousey()<440&&mousex()<440&&mousex()%40!=0&&mousey()%40!=0){
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
//******************************************************4 ОДНОПАЛУБНИКА**********************************************************
bgiout<<"Поставьте 4 однопалубника           ";
outstreamxy(0,600);
while (n>0){
    tempx=(int)((float)mousex()/40);
    tempy=(int)((float)mousey()/40);
              if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>600&&mousex()<800&&mousey()>0&&mousey()<100){
                for (int z=0;z<12;z++)
                    for (int l=0;l<12;l++)
                    p1[z][l]=0;
                n=1;
            clearmouseclick(WM_LBUTTONDOWN);
            goto doagain;
            }
    if (p1[tempx][tempy]==0&&ismouseclick(WM_LBUTTONDOWN)&&mousex()>40&&mousex()<440&&mousey()>40&&mousey()<440&&mousex()%40!=0&&mousey()%40!=0){
        if (p1[tempx][tempy]<1&&p1[tempx][tempy+1]<1&&p1[tempx+1][tempy]<1&&p1[tempx+1][tempy+1]<1&&p1[tempx-1][tempy]<1&&p1[tempx][tempy-1]<1&&p1[tempx-1][tempy-1]<1&&p1[tempx-1][tempy+1]<1&&p1[tempx+1][tempy-1]<1){
            p1[tempx][tempy]=10+n;
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            n--;
        }
    }
    clearmouseclick(WM_LBUTTONDOWN);
    delay(5);
}
startgame:
printf("");
	}
int loading(){
		closegraph();
    initwindow(400,400);
    settextstyle(1,0,5);
    outtextxy(50,150,"LOADING");
    setcolor(COLOR(0,255,0));
        for (int z=10;z<260;z+=10){
        outtextxy(50+z,200,".");
        delay(50);
        }
    return -1;
	}
int main(){
int numhit1=0,numhit2=0;
int tempx,tempy,tx=0,ty=0,c=0,checksum=0,flag=0,ready=0,temp2x,temp2y;
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
    menu=loading();
	break;
    }
if (ismouseclick(WM_LBUTTONDOWN)&&mousex()>50&&mousex()<335&&mousey()>200&&mousey()<235){
    bot=1;
    menu=loading();
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
    delay(200);
    }
    clearmouseclick(WM_LBUTTONDOWN);
goto end;
    }
clearmouseclick(WM_LBUTTONDOWN);
if (menu==-1){ break; closegraph();}
}
 closegraph();
  initwindow(700,800,"Place your boats, player 1");
  placeboats(p1);
if(bot==0){
cleardevice();
settextstyle(1,0,7);
outtextxy(100,50,"Player2");
outtextxy(100,250,"Your");
outtextxy(100,450,"Turn");
delay(2000);
closegraph();
  initwindow(700,800,"Place your boats, player 2");
//Second player placing his boats
placeboats(p2);
	}
//*******************************************Bot placing his boats********************************************************
if (bot==1){
    random(p2);
}
//********************************************Bot placed the boats!******************************************************* :D
    cleardevice();
    settextstyle(8,0,4);
    outtextxy(100,100,"Preapare yourself...");
    delay(1500);
startgame2:
//***************************************************START IGRI****************************************************************
for (int z=0;z<12;z++)
    for (int l=0;l<12;l++){
        p1[z][0]=-1;
        p1[0][l]=-1;
        }
closegraph();
    initwindow(1000,700,"Naval Battle!");
    turnprint();
    pprint();
    setfillstyle(1,COLOR(0,255,0));
    if (bot==1){
    for (int z=0;z<12;z++)
        for (int l=0;l<12;l++)
        if (p1[z][l]>0) floodfill(z*40+1,l*40+1,COLOR(255,255,255));
    }
    int fixedx, fixedy;
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
        tempx=(int)((float)mousex()/40);
        tempy=(int)((float)mousey()/40);
        temp2x=(int)(((float)mousex()-560)/40);
    //***************************************************ХОДИТ ПЕРВЫЙ ИГРОК************************************************************
    if (turn==1){
    tempx=mousex()/40;
    tempy=mousey()/40;
        if (ismouseclick(WM_LBUTTONDOWN)&&mousex()%40!=0&&mousey()%40!=0&&mousex()>600&&mousex()<1000&&mousey()>40&&mousey()<440){
            if (p2[temp2x][tempy]>1) {
            opisCircle(p2,temp2x,tempy,1);
            setfillstyle(1,COLOR(200,0,0));
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            p2[temp2x][tempy]=-p2[temp2x][tempy];
            numhit1++;
            continue;
            }
            if (p2[temp2x][tempy]==0){
            setfillstyle(1,COLOR(200,200,200));
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            p2[temp2x][tempy]=-1;
            turnprint();
            clearmouseclick(WM_LBUTTONDOWN);
            }
            if (p2[temp2x][tempy]<0){ clearmouseclick(WM_LBUTTONDOWN); continue; }
        }
    }
    //*************************************************ХОДИТ ВТОРОЙ ИГРОК!****************************************************
    if (bot==0&&turn==2){
        if (ismouseclick(WM_LBUTTONDOWN)&&mousex()%40!=0&&mousey()%40!=0&&mousex()>40&&mousex()<440&&mousey()>40&&mousey()<440){
            if (p1[tempx][tempy]>1) {
             opisCircle(p1,tempx,tempy,0);
            setfillstyle(1,COLOR(200,0,0));
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            p1[tempx][tempy]=-p1[tempx][tempy];
            numhit2++;
            continue;
            }
            if (p1[tempx][tempy]==0){
            setfillstyle(1,COLOR(200,200,200));
            floodfill(mousex(),mousey(),COLOR(255,255,255));
            p1[tempx][tempy]=-1;
            turnprint();
            clearmouseclick(WM_LBUTTONDOWN);
            }
            if (p1[tempx][tempy]<0){ clearmouseclick(WM_LBUTTONDOWN); continue; }
        }
    }
//*****************************************************************ХОДИТ БОТ********************************************************************************
            if (bot==1&&turn==2){
          delay(200);
           notworking:
          shootx=rand()%10+1;
          shooty=rand()%10+1;
            if (p1[shootx][shooty]<0) goto notworking;
temp=rand()%100;
if (temp>70){
    for (int z=0;z<12;z++)
        for (int l=0;l<12;l++)
        if (p1[z][l]>1){ fixedx=z; fixedy=l;}
        flag=1;
    }
    if (p1[shootx][shooty]<0) goto notworking;
    skip:
            tempx=shootx;
            tempy=shooty;
            if (p1[shootx][shooty]!=-1&&p1[shootx][shooty]>1) {
                opisCircle(p1,tempx,tempy);
            floodfill(shootx*40+5,shooty*40+5,COLOR(255,255,255));
            if (p1[shootx][shooty]/10>1){ flag=p1[shootx][shooty]/10; }
            p1[shootx][shooty]=-p1[shootx][shooty];
        }
            if (p1[shootx][shooty]==0){
            turnprint();
            setfillstyle(1,COLOR(200,200,200));
            p1[shootx][shooty]=-1;
            floodfill(shootx*40+5,shooty*40+5,COLOR(255,255,255));
        }
    }
        clearmouseclick(WM_LBUTTONDOWN);
if (numhit1==20){
 settextstyle(7,0,10);
cleardevice();
    outtextxy(50,50,"PLAYER 1");
    outtextxy(300,250,"WIN");
    printf("WINNER: PLAYER1");
    break;
}
if (numhit2==20) {
    if(bot==0){
 settextstyle(7,0,10);
cleardevice();
    outtextxy(50,50,"PLAYER 2");
    outtextxy(300,250,"WIN");
        break;
        }
    else {
cleardevice();
 settextstyle(7,0,10);
    outtextxy(150,50,"**BOT**");
    outtextxy(300,250,"WIN");
        break;
        }
    }
}
delay(5000);
closegraph();
end:
tx=0;
    }
