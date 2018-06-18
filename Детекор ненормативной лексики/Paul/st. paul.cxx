//St. Paul made by Captain Midnight
#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <clocale>
#include <fstream>
#include <time.h>
#include <graphics.h>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Russian");
	int c,i;	
	while(c = 1 ){
	
		cout<<"1 - Пошумим?" << endl;
		cout<<"2 - О программе " << endl;
		cout<<"3 - Выход " << endl;
			cin>>c;
				if(c == 1){
					setlocale(LC_ALL, "Russian");
					string buff[326];
					ifstream F;
					string c;
					F.open("database.txt", ios::in);
					cout<<"Enter words"<< endl;
					F>>buff[326];
					cin>>c;
					c = buff[326];
					system("cls");
					cout<<c<< endl;
				
					
				}
				if(c == 2){
					cout<<"Привет,это программа для оссуществления поиска по тексту для обнаружения текста" << endl;
					cout<<"Она еще не доработана. Надеюсь она вам понравистя. :3 " << endl;	
				}
				if(c == 3){
				}
		
		}
	return 0;
}


