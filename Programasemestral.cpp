#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;
int op,s=0;



void areadeuncirculo()
{
	int r; float area;
		/* code */
	cout<<"Programa para calcular el area de un círculo"<< endl;
	cout<<"Escriba el radio:"<< endl;
	cin>> r;
	area= (3.1416)*(r*r);
	cout<<"El area del circulo es:" <<area<< endl;
}
void anos()
{
	int ano_a; int ano_n;int edad;
	/* code */
	cout<<"Programa para calcular años aproximados de una persona"<< endl;
	cout<<"Escriba la fecha de nacimiento:"<< endl;
	cin>> ano_n;
	cout<<"Escriba la fecha actual:"<< endl;
	cin>> ano_a;
	edad= ano_a-ano_n;
	cout<<"La edad aproximada es:" <<edad<< endl;

}
void estaciones()
{
	int n_mes;
		cout<<"Programa para identificar la estacion actual según el mes"<< endl;
		cout<<"Introduce el numero de mes:"<< endl;
		cin>> n_mes;
		if(n_mes==12 or n_mes==1 or n_mes==2)
		{
			cout<<"Es invierno"<< endl;
		}
		else
		{
			if (n_mes>=3 and n_mes<=5)
			{
				cout<<"Es primavera"<< endl;
			}
			else
			{
				if(n_mes>=6 and n_mes<=8)
				{
					cout<<"Es verano"<< endl;
				}	
				else
				{
					if(n_mes>=9 and n_mes<=11)
					{
						cout<<"Es otoño"<< endl;
					}
					else
					{
						cout<<"Error"<< endl;
					}
				}
			
			}
	
		}
}
void mayorde3()
{
int n1,n2,n3,salir=0;
		cout<<"Programa para identificar el mayor de 3 numeros"<< endl;
		cout<<"Introduce los 3 numeros:"<< endl;
		cout<<"Numero 1:"<< endl;		
		cin>> n1;
		cout<<"Numero 2:"<< endl;
		cin>> n2;
		cout<<"Numero 3:"<< endl;
		cin>> n3;
		if(n1>n2 and n1>n3)
		{
			cout<<"El numero mayor es:"<<n1<< endl;
		}
		else
		{
			if (n2>n1 and n2>n3)
			{
				cout<<"El numero mayor es:"<<n2<< endl;
			}
			else
			{
				cout<<"El numero mayor es:"<<n3<< endl;
			
			}
	
		}
}
void tabla8()
{
int n,tabla,salir=0; 
		cout<<"Programa que calcule la tabla de cualquier numero "<< endl;
		cout<<"Introduce el numero deseado:"<< endl;
		cin>> tabla;
		for(n=1;n<=10;n=n+1)
		{
			cout<<"8x"<<n<<"="<<tabla*n<<endl;
		}
}
void dolarespeso()
{
float val_dolar; int opcion;float dolar;float peso;float dolar_peso;float peso_dolar;int salir=0; 
	cout<<"Programa que de dos opciones y convierta el valor del dolar a peso y viceversa"<< endl;
	cout<<"Escriba el valor del dolar:"<< endl;
	cin>> val_dolar;
	cout<<"Escribe 1 si quieres convertir dolares a peso o escribe 2 si quieres convertir pesos a dolares:"<< endl;
	cin>> opcion;
	if(opcion==1)
	{
		cout<<"Introduzca la cantidad de dolares:"<< endl;
		cin>> dolar;
		dolar_peso=dolar*val_dolar;
		cout<<"Tu cantidad de dolares en peso:"<<dolar_peso<< endl;
	}
	else
	{
		if(opcion==2)
		{
			cout<<"Introduzca la cantidad de pesos:"<< endl;
			cin>> peso;
			peso_dolar=peso/val_dolar;
			cout<<"Tu cantidad de dolares en peso:"<<peso_dolar<< endl;
		}
		else
		{
		cout<<"Error"<< endl;
		}
	}
}
void numerospareseimpares()
{

}
void positivonegativoneutralwhile()
{

}
void edadwhile()
{

}
void mayorde3while()
{

}
void cualquiertabla()
{

}
void ganancia()
{

}
void estacioneswhile()
{

}
void parimparwhile()
{

}
void perimetro3fig()
{

}
void califbool()
{

}
void llenar5pos()
{

}
void tablaamericachivas()
{

}
void sumrestmultdiv()
{

}
void capturadedatos()
{

}
void calculadora()
{

}
void salir()
{
	s=1;
}

void pagina1()
{
	cout<<"//Bienvenido a la pagina 1//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Area de un circulo.\n2.-AÃ±os de una persona.\n3.-Estaciones del aÃ±o\n4.-Mayor de 3 numeros\n5.-Tabla del 8\n6.-Conversion dolares a peso\n7.-Volver al menu principa o salir "<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{areadeuncirculo();break;}
		case 2:{anos();break;}
		case 3:{estaciones();break;}
		case 4:{mayorde3();break;}
		case 5:{tabla8();break;}
		case 6:{dolarespeso();break;}
		case 7:{salir();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}
void pagina2()
{
	cout<<"//Bienvenido a la pagina 2//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Numero pares(2-100) e impares(1-99).\n2.-Numero positivo,negativo y neutro con while.\n3.-Edad de una persona con while.\n4.-Mayor de 3 numeros con while.\n5.-Cualquier tabla de multiplicar.\n6.-Ganancia 6%\n7.-Volver al menu principal o salir."<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{numerospareseimpares();break;}
		case 2:{positivonegativoneutralwhile();break;}
		case 3:{edadwhile();break;}
		case 4:{mayorde3while();break;}
		case 5:{cualquiertabla();break;}
		case 6:{ganancia();break;}
		case 7:{salir();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}
void pagina3()
{
	cout<<"//Bienvenido a la pagina 3//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Estaciones del aÃ±o con while.\n2.-Par(2-100) e impar(1-99) con while.\n3.-Perimetro de 3 figuras.\n4.-Calificacion con banderas.\n5.-Llenar 5 posiciones.\n6.-Tabla de posiciones America-Chivas.\n7.-Volver al menu principal o salir."<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{estacioneswhile();break;}
		case 2:{parimparwhile();break;}
		case 3:{perimetro3fig();break;}
		case 4:{califbool();break;}
		case 5:{llenar5pos();break;}
		case 6:{tablaamericachivas();break;}
		case 7:{salir();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}
void pagina4()
{
	cout<<"//Bienvenido a la pagina 4//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Suma,multiplicacion y division.\n2.-Captura de datos.\n3.-Calculadora simple..\n4.-Volver al menu principal o salir."<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{sumrestmultdiv();break;}
		case 2:{capturadedatos();break;}
		case 3:{calculadora();break;}
		case 4:{salir();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}

void menuprincipal()
{
	cout<<"//Bienvenido al menu principal//\nEscoge la pagina a la que quieres ir:"<<endl;
	cout<<"1.-Pagina 1\n2.-Pagina 2\n3.-Pagina 3\n4.-Pagina 4\n5.- Salir del programa"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{pagina1();break;}
		case 2:{pagina2();break;}
		case 3:{pagina3();break;}
		case 4:{pagina4();break;}
		case 5:{salir();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}

main()
{
	while(s==0)
		{menuprincipal();
		cout<<"---Deseas salir del programa? 1 para salir 0 para continuar utilizandolo---"<<endl;
		cin>>s;
		system("cls");
		}
cout<<"---El programa se cerrara---"<<endl;
}
	
