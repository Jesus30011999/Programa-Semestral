#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;
int op,s=0;
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
void pagina1()
{
	cout<<"//Bienvenido a la pagina 1//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Area de un circulo.\n2.-Años de una persona.\n3.-Estaciones del año\n4.-Mayor de 3 numeros\n5.-Tabla del 8\n6.-Conversion dolares a peso\n7.-Volver al menu principal "<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{areadeuncirculo();break;}
		case 2:{anos();break;}
		case 3:{estaciones();break;}
		case 4:{mayorde3();break;}
		case 5:{tabla8();break;}
		case 6:{dolarespeso();break;}
		case 7:{menuprincipal();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}
void pagina2()
{
	cout<<"//Bienvenido a la pagina 2//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Numero pares(2-100) e impares(1-99).\n2.-Numero positivo,negativo y neutro con while.\n3.-Edad de una persona con while.\n4.-Mayor de 3 numeros con while.\n5.-Cualquier tabla de multiplicar.\n6.-Ganancia 6%\n7.-Volver al menu principal."<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{numerospareseimpares();break;}
		case 2:{mayormenorwhile();break;}
		case 3:{edadwhile();break;}
		case 4:{mayorde3while();break;}
		case 5:{cualquiertabla();break;}
		case 6:{ganancia();break;}
		case 7:{menuprincipal();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}
void pagina3()
{
	cout<<"//Bienvenido a la pagina 3//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Estaciones del año con while.\n2.-Par(2-100) e impar(1-99) con while.\n3.-Perimetro de 3 figuras.\n4.-Calificacion con banderas.\n5.-Llenar 5 posiciones.\n6.-Tabla de posiciones America-Chivas.\n7.-Volver al menu principal."<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{estacioneswhile();break;}
		case 2:{parimparwhile();break;}
		case 3:{perimetro3fig();break;}
		case 4:{califbool();break;}
		case 5:{llenar5pos();break;}
		case 6:{tablaamericachivas();break;}
		case 7:{menuprincipal();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}
void pagina4()
{
	cout<<"//Bienvenido a la pagina 4//\nEscoge el programa al que quieres ir:"<<endl;
	cout<<"1.-Suma,multiplicacion y division.\n2.-Captura de datos.\n3.-Calculadora simple..\n4.-Volver al menu principal."<<endl;
	cin>>op;
	switch(op)
	{
		case 1:{sumrestmultdiv();break;}
		case 2:{capturadedatos();break;}
		case 3:{calculadora();break;}
		case 4:{menuprincipal();break;}
		default:{cout<<"Error,presione enter para continuar."<<endl;getch();}
	}
}
void salir()
{
	s=1;
}

void areadeuncirculo()
{
}
void anos()
{
}
void estaciones()
{

}
void mayorde3()
{

}
void tabla8()
{

}
void dolarespeso()
{

}
void numerospareseimpares
{

}
void mayormenorwhile()
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
main()
{
	while(s==0)
		{menuprincipal();cout<<"---Deseas salir del programa? 1 para salir 0 para continuar utilizandolo---"<<endl;cin>>salir;system("cls");}
cout<<"---El programa se cerrara---"<<endl;
}
	

