/*
 * Searching square root trough Discriminant.cpp
 *Made by schoolboy for myself;
 */


#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
//D = (b*b)-(4ac)
/*
Теорема Виета
X*X+PX*Q=0
Где P и Q некоторые числа.
Решается по формуле
X1 + X2 = -P

X1 * X2 = Q


Пример
X2+5X+6=0

X1 + X2 = -5

X1 * X2 = 6

X1 = 2;
X2 = 3;

Надо узнать на что можнится Q так, чтобы в сумме получилось -P
*/
int w;
cout<<"1 - Discriminant programm"<< endl;
cout<<"2 - The Vieta theorem programm"<< endl;
cout<<"3 - About programm"<< endl;
cout<<"4 - Exit programm"<< endl;
cin>>w;

if(w==1)
{
	system("cls");
    float a,b,c,d,e,f,g,h,u,i,k;
    cout<<"Enter variables"<< endl;
    cin>>a;
    cout<<"Enter variables"<< endl;
    cin>>b;
    cout<<"Enter variables"<< endl;
    cin>>c;
    d = b * b - 4 * a * c;
    f = 2;
    e = d/f;
    g = -b;
    h = g + e/f*a;
    u = f * a;
    i = g - e/f*a;
    cout<<d<< endl;
    if(d>=0)
    {
        
        cout<<d<<" > or = 0 " << endl;
        cout<<"First root = "<<i<< endl;
        cout<<"Second root = "<<h<< endl; //Without reduction
    }
    if(d<0)
    {
        cout<<d<<" < 0 " << endl;
        cout<<"First root = "<<g<<" / "<<u<< endl; //Without reduction
    }
}
if(w==2)
{
	system("cls");
	float x1,x2,P,Q,t,o,l,io,m,n;
    cout<<"Enter variables "<< endl;
	cin>>x1;
	cout<<"Enter variables "<< endl;
	cin>>x2;
	t = -x1;
	o = x2;
	cout<<" X1 "<<t<< endl;
	cout<<" X2 "<<o<< endl;
	cout<<"Now find factor."<< endl;
	cout<<"It's factor must be equals X1."<< endl;
	cout<<"At addition."<< endl;
	cout<<"And enter this number." <<endl;
	cin>>l;
	cout<<"Enter variables"<< endl;
	cin>>io;
	system("cls");
	cout<<"Number  1 "<<l<< endl;
	cout<<"Number  2 "<<io<< endl;
	m = l + io;
        
}
if(w>4)
{
	system("cls");
    cout<<setw(12)<<"ERROR"<< endl;
}
	if(w==3)
	{
		system("cls");
		cout<<setw(30)<<"This programm about two math equation."	<< endl;
		cout<<setw(30)<<"This soft made for search answer for one view of the equation." 	<< endl;
		cout<<setw(30)<<"First view it's search answer through discriminant."	<< endl;
		cout<<setw(30)<<"Decision serching by equation: D = (b*b)-(4ac)"	<< endl;
		cout<<setw(30)<<"Second view  it's the Viet theorem."	<< endl;
		cout<<setw(30)<<"Answer searching by equation X*X+PX*Q=0"	<< endl;
		cout<<setw(30)<<"Sorry for my bad english."	<< endl;
		cout<<setw(30)<<"Enjoy :)"	<< endl;
		cout<<setw(30)<<"I write this because maybe this file find."	<< endl;
		cout<<setw(30)<<"I don't know why i write this proramm and share in github."	<< endl;
		cout<<setw(30)<<"I think i write this programm just for lulz"	<< endl;
	}
    return 0;
}

