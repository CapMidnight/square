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
		cout<<"1 -  �������?" << endl;
		cout<<"2 - � ��������� " << endl;
		cout<<"3 - ����� " << endl;
			cin>>c;
				if(c == 1){
					string slova[25]{
					"�����","�����","��","�����","���","���","�����",
					"�������","��������","������","�������","������",
					"��������","�����","���","�����","�������","�������","���������",
					"���������","�������","����","�����","�������","�����"
	};
					string a;
					cout<<"����� ����� ��� �����. � ����� ���� ������ �����. ������ �����������"<< endl;
					cin>>a;
						   if(a == slova[25])
						   {
						   	cout<<slova[25] << endl;
						   }
				}
	return 0;
}

