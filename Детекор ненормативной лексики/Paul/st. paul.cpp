//St. Paul made by Captain Midnight
#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <clocale>
#include <fstream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int c;
		cout<<"1 - Ïîøóìèì?" << endl;
		cout<<"2 - Î ïðîãðàììå " << endl;
		cout<<"3 - Âûõîä " << endl;
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
					cout<<c<< endl;
					
				}
				if(c == 2){
					cout<<"Ïðèâåò,ýòî ïðîãðàììà äëÿ îññóùåñòâëåíèÿ ïîèñêà ïî òåêñòó äëÿ îáíàðóæåíèÿ òåêñòà" << endl;
					cout<<"Îíà åùå íå äîðàáîòàíà. Íàäåþñü îíà âàì ïîíðàâèñòÿ. :3 " << endl;	
				}
				if(c == 3){
				}
	return 0;
}


