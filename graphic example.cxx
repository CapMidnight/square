/*
 * It's example borland c++ library <graphics.h>
 * Made on "Dev cpp"
 * Made by Captain Midight
 */ 

#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
	float k,m;
	cout<<"Enter variables "<< endl;
	cin>>k;
	cout<<"Enter variables "<< endl;
	cin>>m;
	system("cls");
	initwindow(500,500);
	moveto(225,500);  
	lineto(225,3);
	moveto(3,225);
	lineto(490,225);       
	moveto(1,0);        
	closegraph();
	
	return 0;
}

