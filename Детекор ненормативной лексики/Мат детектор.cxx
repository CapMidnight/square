#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int c;
		cout<<"1 -  Пошумим?" << endl;
		cout<<"2 - О программе " << endl;
		cout<<"3 - Выход " << endl;
			cin>>c;
				if(c == 1){
					string slova[25]{
					"Блять","Ебать","Ёб","Пизда","Хуй","Бля","Блядь",
					"Блядина","Блядинос","Хуесос","Пидорас","Мудила",
					"Мудозвон","Мудак","Хер","Уебан","Ебаться","Ёбанный","Блядовник",
					"Блядослав","Обрыган","Сука","Сучка","Ублюдок","Срань"
	};
					string a;
					cout<<"Введи фразу или слово. А можно даже целыый текст. Чертов богохульник"<< endl;
					cin>>a;
						   if(a == slova[25])
						   {
						   	cout<<slova[25] << endl;
						   }
				}
				if(c == 2){
					cout<<"Привет,это программа для оссуществления поиска по тексту для обнаружения текста" << endl;
					cout<<"Она еще не доработана. Надеюсь она вам понравистя. :3 " << endl;	
				}
				if(c == 3){
				}
	return 0;
}
