/*
 * Прложение для решения квадраного уравнения через дискрминант.cxx
 * 
 * Copyright 2018 Perry King PC <Perry King PC@PERRYKINGPC>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,f,g,h;
	cout<< "Enter number 1" << endl;
	cin>>a;
	cout<<"Enter number 2" << endl;
	cin>>b;
	cout<<"Enter number 3" << endl;
	cin>>c;
	d:=b*2;
	e:=d-4;
	f:=e*a;
	g:=f-c;
	h:=d+e+f+g;
	if(h>=0)
		{
			if(h>0)
				{
					cout<<"Two different roots"<< endl;
				{
					else
						{
							cout<<"Two identical roots"<< endl;
						{	
						
						
				
		{
				else
					{
						cout<<"DDK" << endl;
					
					{
	return 0;
}

