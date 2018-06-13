/*
 * Searching square root trough Discriminant.cpp
 *Made by schoolboy for myself;
 */


#include <iostream>
using namespace std;

int main()
{
	//D = (b*b)-(4ac)
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
	return 0;
}

