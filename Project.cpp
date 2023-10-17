#include<stdio.h>
#include<conio.h>
#include <graphics.h>
void ConcentricCircle()
{
   int x =300, y = 220, radius;
   int j=1 ; 
   for ( radius = 125; radius >= 25 ; radius = radius - 20)
    { 
      	setfillstyle(4,RED);
      	circle(300,220, radius);
      	floodfill(300,220,10);
		delay(400);
    }
   delay(1000);
   cleardevice();
}
void loading()
{
	setbkcolor(BLUE);
	int i;
	int j=4;
	int	radius=7;
	int x,y;
	x=250;
	y=300;
		
		//floodfill(1,1,10);
		for(i=1;i<=15;i++)
		{
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,80);
	 	outtextxy(170,185,"Loading");
		setfillstyle(4,j);
      	circle(300,200, radius);
      	floodfill(300,200,15);
      	delay(100);
      	setfillstyle(4,j);
      	circle(320,200, radius);
      	floodfill(320,200,15);
      	delay(100);
      	setfillstyle(4,j);
      	circle(340,200, radius);
      	floodfill(340,200,15);
		delay(100);
		cleardevice();
		}
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,70);
	 outtextxy(100,200,"Your Project is Ready");
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,19);
	 	 outtextxy(200,400,"Press any key to continue...");

getch();
	cleardevice();
}
int main()
{
   
    int i, j = 0, gd = DETECT, gm;

   initgraph(&gd,&gm,"");
    loading();
     
   /*---------------Project Starting-----------------*/
   
   	setcolor(10);
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,50);
	 outtextxy(200,60,"Project");
	 delay(200);
	 outtextxy(240,150,"Of");
	 delay(200);
	 outtextxy(30,240,"Computer Graphics");
	 delay(400);
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,19);
	 outtextxy(200,400,"Press any key to continue...");
	 getch();
	 cleardevice();
	 
	 /*--------------------------------------*/
	
	 ConcentricCircle();
	/* --------------Members------------------- */
	
	
	 setcolor(11);
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,50);
	 outtextxy(80,250,"Group Members");
	 delay(1500);
	 cleardevice();
	 outtextxy(80,200,"Muzamil Arain");
	outtextxy(150,300,"F18CS 07");
	 delay(1500);
	 cleardevice();
	 outtextxy(100,200,"Wajahat Ali");
	 outtextxy(150,300,"F18CS 06");
	 delay(1500);
	 cleardevice();
	 outtextxy(90,200,"Ashish Kumar");
	 outtextxy(150,300,"F18CS 34");
	 delay(1500);
	 cleardevice();
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,60);
	 outtextxy(50,200,"Tahseen Abbas Hyder");
	 outtextxy(160,300,"F18CS 52");
	 delay(1000);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,19);
	 outtextxy(200,400,"Press any key to continue...");
	 getch();
   	cleardevice();
   	
   	
	/*-----------------------------------------*/
	
	//ConcentricCircle();
	
	/*-----------CODING SESSSION-------------*/
	
   /*-------------------MOVING TRUCK-------------------*/
   
   
   	settextstyle(1,HORIZ_DIR,2);

   outtextxy(25,240,"Press any key to view the story.");
   getch();
   //setviewport(0,0,639,440,1);
	setbkcolor(BLACK);
   for (i = 0; i <= 700; i = i + 10)
   {
   
   	
		line(0,420,699,420);	//Road
      rectangle(-100+i,340,0+i,400);
      rectangle(0+i,370,30+i,400);
      rectangle(10+i,380,20+i,390);
      circle(-75+i,410,10);
      circle(25+i,410,10);
      
      delay(100);

      if (i == 700)
         break;	
      cleardevice();
   }
   cleardevice();
    for (i = 0; i <= 120; i = i + 10)
   {
   
	line(0,420,699,420); //Road
	line(0,422,699,422);
		/*----------Home---------------*/
		//home
	setcolor(15);
	rectangle(450,270,600,418);
	//door
	setcolor(14);
	rectangle(455,305,510,415);
	//windows
	setcolor(14);
	rectangle(540,320,580,360);
	line(540,340,580,340);
	line(560,320,560,360);
		//roof
	setcolor(11);
	line(430,270,620,270);
	line(515,170,620,270);
	line(515,170,428,270);
	//text
	setcolor(9);
	settextstyle(1,HORIZ_DIR,2);
	outtextxy(490,215,"CSE");
	outtextxy(465,245,"HOUSE");
	setcolor(WHITE);
	/*-------------------------*/
		
      rectangle(-120+i,340,-20+i,400);
      rectangle(-20+i,370,10+i,400);
      rectangle(-10+i,380,0+i,390);
      circle(-95+i,410,10);
      circle(5+i,410,10);
      
      delay(100);

      if (i == 120)
      {
	 // 	printf("Last points x=%d and y=400",10+i);//x=130,i==120
	  	
         break;	
      }
	  cleardevice();
   }

	/*------------Man Walking after leaving truck------------*/
for(i=1;i<=380;i+=2)
{
	cleardevice();
		line(0,422,699,422);
		line(0,420,699,420);	//Road
			/*----------Home---------------*/
	//home
	setcolor(15);
	rectangle(450,270,600,418);
	//door
	setcolor(14);
	rectangle(455,305,510,415);
	//windows
	setcolor(14);
	rectangle(540,320,580,360);
	line(540,340,580,340);
	line(560,320,560,360);
		//roof
	setcolor(11);
	line(430,270,620,270);
	line(515,170,620,270);
	line(515,170,428,270);
	//text
	setcolor(9);
	settextstyle(1,HORIZ_DIR,2);
	outtextxy(490,215,"CSE");
	outtextxy(465,245,"HOUSE");
	setcolor(WHITE);
	
	/*-----------------------*/
      rectangle(-120+120,340,-20+120,400); //Static last position of truck
      rectangle(-20+120,370,10+120,400);
      rectangle(-10+120,380,0+120,390); //driver seat door 
      circle(-95+120,410,10);
      circle(5+120,410,10);
      
if(i%3==0)
{
//head
circle(120+i,340,10);
//neck
line(120+i,350,120+i,360);
//arms
line(120+i,360,110+i,380);
line(120+i,360,130+i,380);
//body
line(120+i,360,120+i,400);
//legs
line(120+i,400,110+i,420);
line(120+i,400,130+i,420);
}
else
{
//head
circle(120+i,340,10);
//neck
line(120+i,350,120+i,360);
//arms
line(120+i,360,115+i,380);
line(120+i,360,125+i,380);
//body
line(120+i,360,120+i,400);
//legs
line(120+i,400,115+i,420);
line(120+i,400,125+i,420);
}
line(1,420,700,420);

delay(80);

}
// Last Screen 
cleardevice();
	line(0,420,699,420); //Road
	line(0,422,699,422);
		/*----------Home---------------*/
	//home
	setcolor(15);
	rectangle(450,270,600,418);
	//door
	setcolor(14);
	rectangle(455,305,510,415);
	//windows
	setcolor(14);
	rectangle(540,320,580,360);
	line(540,340,580,340);
	line(560,320,560,360);
		//roof
	setcolor(11);
	line(430,270,620,270);
	line(515,170,620,270);
	line(515,170,428,270);
	//text
	setcolor(9);
	settextstyle(1,HORIZ_DIR,2);
	outtextxy(490,215,"CSE");
	outtextxy(465,245,"HOUSE");
	setcolor(WHITE);
	/*-------------------------*/	
	
	//Static last position of truck
	
	rectangle(-120+120,340,-20+120,400); //Static last position of truck
      rectangle(-20+120,370,10+120,400);
      rectangle(-10+120,380,0+120,390); //driver seat door 
      circle(-95+120,410,10);
      circle(5+120,410,10);
/*---------------------------------------------------*/	
		setcolor(10);
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,50);
	 outtextxy(100,60,"He is Going");
	 delay(200);
	 outtextxy(140,150,"To Sleep..!");
	 delay(200);
	 outtextxy(100,240,"Bye Bye..");
	 delay(400);
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,19);
	 outtextxy(200,430,"Press any key to Exit...");
	 getch();
	 cleardevice();
   closegraph();
   return 0;
   /*-------------THE END-----------------*/
}
