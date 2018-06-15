//Реализован только граф.  интерфейс
#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	int a;
	cout<<"1.Start Game	"<< endl;
	cout<<"2.Exit "<< endl;
	cin>>a;
	if (a == 1)
	   {
	   
	initwindow(375,375); //Разрешение окна при старте
	moveto(100,2);	  //Верикальные
	lineto(100,322);
	moveto(200,2);			
	lineto(200,322);
	moveto(300,2);
	lineto(300,322);
	
	moveto(0,35);
	lineto(350,35); //Горизонтальные
	moveto(1,125);
	lineto(350,125);	
	moveto(2,225);
	lineto(350,225);
	moveto(3,325);
	lineto(350,325);
	
	outtextxy(325,100,"1"); //Sboku
	outtextxy(325,200,"2");
	outtextxy(325,300,"3");
	
	outtextxy(45,10,"X"); //Sverhu
	outtextxy(145,10,"Y"); 
	outtextxy(245,10,"Z");
	

	getch();
	}
	if(a == 2)
	{
		cout<<"Exit"<< endl;
	}
	return 0;
}


