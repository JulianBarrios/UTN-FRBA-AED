/*
*Tipos de variables y operaciones entre ellos
*Julian Barrios
*15-04-2015
*/

#include <iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
using namespace std;


int Menu(){
	int  opcion;
	cout << "\nSobre que tipo de dato desea trabajar?\nElija\n1)Enteros\n2)Reales(numeros con coma)\n3)caracteres\n4)cadenas\n5booleanos\n6)Salir\n";
	cin>>opcion;
	cout<<"\n";
	switch(opcion)
	{
		case 1:
			{
				int x1,x2,x3,x4,x5,x6;
				x1=rand()%100+1;
				x2=rand()%100+1;
				x3=rand()%100+1;
				x4=rand()%100+1;
				x5=rand()%100+1;
				x6=rand()%100+1;
				int var=(x5*x1-7/x2+pow(x6,9))/sqrt(x3)+x4%5;
				cout<<"el valor entero del conjunto de operaciones ("<<x5<<"*"<<x1<<"-7/"<<x2<<"+pow("<<x6<<",9))/sqrt("<<x3<<")+78%5 es: "<<var;
				return Menu();
				break;	
			}
		case 2:
			{
				double x1,x2,x3,x4,x5,x6;
				x1=rand()%100+1;
				x2=rand()%100+1;
				x3=rand()%100+1;
				x4=rand()%100+1;
				x5=rand()%100+1;
				x6=rand()%100+1;
				double var=(x5*x1-7/x2+pow(x6,9))/sqrt(x3)+x4/5;
				cout<<"el valor entero del conjunto de operaciones ("<<x5<<"*"<<x1<<"-7/"<<x2<<"+pow("<<x6<<",9))/sqrt("<<x3<<")+78%5 es: "<<var;
				return Menu();
				break;
			}
		case 3:
			{
				char car1=rand()%256;
				char car2=rand()%256;
				cout<<car1<<" y "<<car2;
				if(car1==car2)
				{
					cout<<"iguales";
				}
				else
				{
					cout<<"distintos";
				}
				return Menu();
				break;
			}
		case 4:
			{
				string a,b;
				cout<<"ingrese palabra";
				cin>>a;
				cout<<"ingrese otra palabra";
				cin>>b;
				
				cout<<a<<" y "<<b<<" son ";
				if(a==b)
				{
					cout<<"iguales";
				}
				else
				{
					cout<<"distintos";
				}
				cout<<"\ny concatenados quedaria "<<a+b;
				cout<<"\n";
				return Menu();
				break;
			}
		case 5:
			{
				bool b=!(!(false&&!true)||true)||true;
				cout<<"el valor de verdad de \"!(!(false&&!true)||true)||true\" es ";
				if(b)
				{
					cout<<"verdadero\n";
				}
				else
				{
					cout<<"falso\n";
				}
				return Menu();
				break;
			}
		case 6:
			{
				cout<<"Gracias por usar este programa";
				return 0;
				break;
			}
		default:
			{
				cout<<"Error\n";
				return Menu();
				break;
			}
	}
}

int main() {
	
	return Menu();
}
