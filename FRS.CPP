#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<process.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
/* 	(SQ) Singapore Airlines 403
	DEPARTED,ON-TIME
	Route DEL to SIN
	Altitude 35500 feet
	Speed 605 mph
	Heading 135 degrees
	Equipment Airbus A380-800
*/
class flight
{       float altitude,speed,heading;
	char name[25],status[25],route[25],equipment[25];
	public:
	void indata(char n[],char st[],char r[],float a,float s,float h,char e[])
	{ 	strcpy(name,n);
		strcpy(status,st);
		strcpy(route,r);
		altitude=a;
		speed=s;
		heading=h;
		strcpy(equipment,e);
	}
	void putdata()
	{	settextstyle(1,0,3);
		setcolor(BLUE);
		outtextxy(230,90,"FLIGHT INFO");
		setcolor(YELLOW);
		setlinestyle(2,0,2);
		line(225,120,370,120);
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t "<<name<<"\n\t\t\t "<<status<<"\n\t\t\t "<<route<<"\n\t\t\t ";
		cout<<"Altitude "<<altitude<<" feet\n\t\t\t "<<"Speed "<<speed<<" mph\n\t\t\t "<<"Heading "<<heading<<" degrees\n\t\t\t ";
		cout<<equipment<<endl;
		setlinestyle(1,0,3);
		setcolor(RED);
		rectangle(20,20,620,460);
	}
};
flight f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f14,f15,f16,f17,f18,f19,f20;
void screen1()
{       setlinestyle(1,0,3);
	rectangle(20,20,620,460);
	settextstyle(1,0,3);
	setcolor(CYAN);
	outtextxy(90,100,"WELCOME TO THE FLIGHT RADAR SYSTEM");
	setcolor(WHITE);
	setlinestyle(2,0,2);
	line(90,140,550,140);
	settextstyle(1,0,2);
	outtextxy(240,250,"PRESS ENTER");
	setlinestyle(0,0,3);
	rectangle(270,290,340,340);
	rectangle(275,295,335,335);
	line(310,305,310,320);
	line(295,320,310,320);
	line(295,315,295,325);
	line(295,315,290,320);
	line(295,325,290,320);
	settextstyle(1,0,2);
	setcolor(CYAN);
	outtextxy(170,410,"MADE BY: SHEFALI UPADHYAYA");
}
void screen2()
{       setcolor(LIGHTBLUE);
	setlinestyle(1,0,3);
	rectangle(20,20,620,460);
	setcolor(YELLOW);
	settextstyle(1,0,2);
	outtextxy(200,160,"Press a,b or c to proceed");
	outtextxy(230,240,"a.Radar View");
	outtextxy(230,270,"b.Flight Information");
	outtextxy(230,300,"c.Exit");
}
void screen3(int f)
{	int i,j,k,l,x1,y1;
	float a=3.14/180;
	for(i=0,l=0;i<10;i++,l+=5)
	{	cleardevice();
		setlinestyle(0,0,2);
		setcolor(DARKGRAY);
		for(j=0,k=0;j<=640 || k<=480;j+=10,k+=10)
		{       line(0+j,0,0+j,480);
			line(0,0+k,640,0+k);
		}
		setcolor(GREEN);
		setlinestyle(0,0,3);
		line(320,0,320,480);
		line(0,240,640,240);
		circle(320,240,238);
		circle(320,240,190);
		circle(320,240,185);
		circle(320,240,130);
		circle(320,240,125);
		circle(320,240,50);
		setfillstyle(SOLID_FILL,GREEN);
		circle(320,240,4);
		x1=320+(230-320)*cos(10*a+i)-(20-240)*sin(10*a+i);
		y1=240+(230-320)*sin(10*a+i)+(20-240)*cos(10*a+i);
		setcolor(LIGHTGREEN);
		line(320,240,x1,y1);
		settextstyle(2,0,0);
		setcolor(RED);
		setfillstyle(SOLID_FILL,RED);
		if(f==0)
		{	circle(200+l,200+l,3);
			floodfill(200+l,200+l,RED);
			outtextxy(198+l,207+l,"SQ406");
			circle(300-l,100+l,3);
			floodfill(300-l,100+l,RED);
			outtextxy(298-l,107+l,"DA210");
			circle(360+l,230-l,3);
			floodfill(360+l,230-l,RED);
			outtextxy(358+l,237-l,"VA007");
			circle(150-l,350-l,3);
			floodfill(150-l,350-l,RED);
			outtextxy(148-l,357-l,"DA221");
			circle(400+l,300+l,3);
			floodfill(400+l,300+l,RED);
			outtextxy(398+l,307+l,"SQ403");
		}
		else if(f==1)
		{	circle(210+l,210+l,3);
			floodfill(210+l,210+l,RED);
			outtextxy(208+l,217+l,"SQ342");
			circle(310-l,110+l,3);
			floodfill(310-l,110+l,RED);
			outtextxy(308-l,117+l,"DA182");
			circle(350+l,220-l,3);
			floodfill(350+l,220-l,RED);
			outtextxy(348+l,227-l,"JA370");
			circle(130-l,330-l,3);
			floodfill(130-l,330-l,RED);
			outtextxy(128-l,337-l,"DA200");
			circle(400+l,300+l,3);
			floodfill(400+l,300+l,RED);
			outtextxy(398+l,307+l,"SQ010");
		}
		else if(f==2)
		{	circle(260+l,260+l,3);
			floodfill(260+l,260+l,RED);
			outtextxy(258+l,267+l,"SQ176");
			circle(310-l,110+l,3);
			floodfill(310-l,110+l,RED);
			outtextxy(308-l,117+l,"DA432");
			circle(320+l,320-l,3);
			floodfill(320+l,320-l,RED);
			outtextxy(318+l,337-l,"JA770");
			circle(230-l,330-l,3);
			floodfill(230-l,330-l,RED);
			outtextxy(228-l,337-l,"DA540");
			circle(340+l,100+l,3);
			floodfill(340+l,100+l,RED);
			outtextxy(338+l,107+l,"SQ777");
		}
		else if(f==3)
		{	circle(200+l,210+l,3);
			floodfill(200+l,210+l,RED);
			outtextxy(198+l,217+l,"SQ413");
			circle(210-l,110+l,3);
			floodfill(210-l,110+l,RED);
			outtextxy(208-l,117+l,"DA220");
			circle(320+l,320-l,3);
			floodfill(320+l,320-l,RED);
			outtextxy(318+l,337-l,"JA101");
			circle(170-l,230-l,3);
			floodfill(170-l,230-l,RED);
			outtextxy(168-l,237-l,"DA255");
			circle(340+l,100+l,3);
			floodfill(340+l,100+l,RED);
			outtextxy(338+l,107+l,"SQ652");
		}
		delay(500);
	}
}
void screen4(int i)
{       setcolor(LIGHTRED);
	setlinestyle(1,0,3);
	rectangle(20,20,620,460);
	setcolor(LIGHTBLUE);
	settextstyle(1,0,2);
	outtextxy(45,90,"Select flight from the current list.");
	outtextxy(100,110,"a.SQ406");
	outtextxy(100,130,"b.DA210");
	outtextxy(100,150,"c.VA007");
	outtextxy(100,170,"d.DA221");
	outtextxy(100,190,"e.SQ403");
	outtextxy(100,210,"f.SQ342");
	outtextxy(100,230,"g.DA182");
	outtextxy(100,250,"h.JA370");
	outtextxy(100,270,"i.DA200");
	outtextxy(100,290,"j.SQ010");
	outtextxy(100,310,"k.SQ176");
	outtextxy(100,330,"l.DA432");
	outtextxy(100,350,"m.JA770");
	outtextxy(100,370,"n.DA547");
	outtextxy(100,390,"o.SQ777");
	outtextxy(100,410,"p.SQ413");
	outtextxy(100,430,"q.DA220");
	outtextxy(100,450,"r.JA101");
	outtextxy(100,470,"s.DA255");
	outtextxy(100,490,"t.SQ652");
}
int main()
{	int gd=DETECT,gm,i;
	char ch,c,c1;
	initgraph(&gd,&gm,"C:\\BGI");
	screen1();
	ch=getch();
	do
	{	if(ch==13)
		{       cleardevice();
			screen2();
			c=getch();
			randomize();
			i=random(4);
			if(c=='a')
			{	screen3(i);
				getch();
			}
			else if(c=='b')
			{       cleardevice();
				screen4(i);
				c1=getch();
				clrscr();
				cleardevice();
				if(i==0)
				{	switch(c1)
					{	case 'a': f1.indata("(SQ) Singapore Airlines 406","DEPARTED,ON-TIME","Route SIN to DEL",30000,605,135,"Equipment Boeing 777-300ER");
							  f1.putdata();
							  break;
						case 'b': f2.indata("(DA) Dream Airlines 210","DEPARTED,ON-TIME","Route DEL to NY",55000,700,120,"Equipment Airbus A330-200");
							  f2.putdata();
							  break;
						case 'c': f3.indata("(VA) Virgin Atlantic 007","DEPARTED,ON-TIME","Route DEL to LON",40000,650,140,"Equipment Boeing 747-400");
							  f3.putdata();
							  break;
						case 'd': f4.indata("(DA) Dream Airlines 221","DEPARTED,ON-TIME","Route NY to DEL",60000,600,125,"Equipment Airbus A380-800");
							  f4.putdata();
							  break;
						case 'e': f5.indata("(SQ) Singapore Airlines 403","DEPARTED,ON-TIME","Route DEL to SIN",35000,670,130,"Equipment Airbus A330-300");
							  f5.putdata();
							  break;
						default: cleardevice();
							 setcolor(LIGHTMAGENTA);
							 settextstyle(3,0,3);
							 outtextxy(200,200,"WRONG KEY PRESSED!");
							 break;
					}
				}
				else if(i==1)
				{	switch(c1)
					{	case 'a': f6.indata("(SQ) Singapore Airlines 342","DEPARTED,ON-TIME","Route DEL to SIN",35000,600,140,"Equipment Boeing 777-300ER");
							  f6.putdata();
							  break;
						case 'b': f7.indata("(DA) Dream Airlines 182","DEPARTED,ON-TIME","Route NY to DEL",50000,705,125,"Equipment Airbus A330-200");
							  f7.putdata();
							  break;
						case 'c': f8.indata("(JA) Jet Airways 370","DEPARTED,ON-TIME","Route LON to DEL",45000,645,135,"Equipment Boeing 747-400");
							  f8.putdata();
							  break;
						case 'd': f9.indata("(DA) Dream Airlines 200","DEPARTED,ON-TIME","Route DEL to NY",55000,595,130,"Equipment Airbus A380-800");
							  f9.putdata();
							  break;
						case 'e': f10.indata("(SQ) Singapore Airlines 010","DEPARTED,ON-TIME","Route SIN to DEL",30000,675,120,"Equipment Airbus A330-300");
							  f10.putdata();
							  break;
						default: cleardevice();
							 setcolor(LIGHTMAGENTA);
							 settextstyle(3,0,3);
							 outtextxy(200,200,"WRONG KEY PRESSED!");
							 break;
					}
				}
				else if(i==2)
				{	switch(c1)
					{	case 'a': f11.indata("(SQ) Singapore Airlines 176","DEPARTED,ON-TIME","Route DEL to SIN",40000,550,150,"Equipment Boeing 777-300ER");
							  f11.putdata();
							  break;
						case 'b': f12.indata("(DA) Dream Airlines 432","DEPARTED,ON-TIME","Route NY to DEL",56000,555,120,"Equipment Airbus A330-200");
							  f12.putdata();
							  break;
						case 'c': f13.indata("(VA) Virgin Atlantic 770","DEPARTED,ON-TIME","Route LON to DEL",35000,645,155,"Equipment Boeing 747-400");
							  f13.putdata();
							  break;
						case 'd': f14.indata("(DA) Dream Airlines 540","DEPARTED,ON-TIME","Route DEL to NY",45000,595,130,"Equipment Airbus A380-800");
							  f14.putdata();
							  break;
						case 'e': f15.indata("(SQ) Singapore Airlines 777","DEPARTED,ON-TIME","Route SIN to DEL",36000,625,120,"Equipment Airbus A330-300");
							  f15.putdata();
							  break;
						default: cleardevice();
							 setcolor(LIGHTMAGENTA);
							 settextstyle(3,0,3);
							 outtextxy(200,200,"WRONG KEY PRESSED!");
							 break;
					}
				}
				else if(i==3)
				{	switch(c1)
					{	case 'a': f16.indata("(SQ) Singapore Airlines 413","DEPARTED,ON-TIME","Route DEL to SIN",25000,400,200,"Equipment Boeing 777-300ER");
							  f16.putdata();
							  break;
						case 'b': f17.indata("(DA) Dream Airlines 220","DEPARTED,ON-TIME","Route NY to DEL",43000,555,130,"Equipment Airbus A330-200");
							  f17.putdata();
							  break;
						case 'c': f18.indata("(JA) Jet Airways 101","DEPARTED,ON-TIME","Route LON to DEL",33000,600,155,"Equipment Boeing 747-400");
							  f18.putdata();
							  break;
						case 'd': f19.indata("(DA) Dream Airlines 255","DEPARTED,ON-TIME","Route DEL to NY",40000,695,100,"Equipment Airbus A380-800");
							  f19.putdata();
							  break;
						case 'e': f20.indata("(SQ) Singapore Airlines 652","DEPARTED,ON-TIME","Route SIN to DEL",36000,635,120,"Equipment Airbus A330-300");
							  f20.putdata();
							  break;
						default: cleardevice();
							 setcolor(LIGHTMAGENTA);
							 settextstyle(3,0,3);
							 outtextxy(200,200,"WRONG KEY PRESSED!");
							 break;
					}
				}
				getch();
			}
			else if(c=='c')
			{   	cleardevice();
				closegraph();
				exit(0);
			}
		}
		else
		{	cleardevice();
			setcolor(LIGHTMAGENTA);
			settextstyle(3,0,3);
			outtextxy(200,200,"WRONG KEY PRESSED!");
			getch();
			closegraph();
			exit(0);
		}
	}
	while(ch==13);
	getch();
	closegraph();
	return 0;
}
