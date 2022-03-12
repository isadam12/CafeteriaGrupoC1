#include<iostream>
#include <thread>
#include <chrono>
#include <conio.h>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
int main()
{
	cout << "Bienvenido a la cafeteria C" << endl;
	
	cout << "Para entrar a la cafeteria oprima el boton intro" << endl;
	cin.get()
    ;int puesto=1, opcion;
    cout<<"Tu numero de mesa es "<<puesto;
    cout<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Por favor, elija su orden preferida"<<endl;
    cout<<"1-. Plato del dia - 3 minutos"<<endl;
    cout<<"2-. Recomendacion del Chef - 5 minutos"<<endl;
    cout<<"3-. Pizza Napolitana - 2 minutos"<<endl; 
    cin>>opcion; 
    int main ();
int segundo=5;
int minuto=0;
int hora=0;	
int fin=0;
	if (opcion == 1) {
		cout<<"Ha seleccionado Plato del Dia. Estara listo en un momento. "<<endl;
    while (fin==0){
	system("cls");
	cout << "Plato del dia" << endl;
	cout << hora << ":" << minuto << ":" << segundo << endl;
	sleep_for(seconds(1));
	segundo--;
	
	if (minuto==0 && segundo==3){
	fin=1;
}
	
	if (segundo==0) {
		minuto--;
		segundo=0;
	}
	
	if (segundo==0){
		minuto--;
		segundo=60;
	}
}

	system("cls");
	cout << "0:0:0"<< endl; 
	cout << "Orden Lista. Pulse cualquier tecla para aceptar la entrega." << endl;

getch();

	}
	else if (opcion == 2) {
	cout<<"Ha seleccionado Recomendacion del chef. Estara listo en un momento. "<<endl;
 while (fin==0){
	system("cls");
	cout << "Recomendacion del Chef" << endl;
	cout << hora << ":" << minuto << ":" << segundo << endl;
	sleep_for(seconds(1));
	segundo--;
	
	if (minuto==0 && segundo==5){
	fin=1;
}
	
	if (segundo==0) {
		minuto--;
		segundo=0;
	}
	
	if (segundo==0){
		minuto--;
		segundo=60;
	}
}

	system("cls");
	cout << "0:0:0"<< endl; 
	cout << "Orden Lista. Pulse cualquier tecla para aceptar la entrega." << endl;

getch();

    }
    else if (opcion == 3) {
    	cout<<"Ha seleccionado Pizza napolitana. Estara listo en un momento. "<<endl;

while (fin==0){
	system("cls");
	cout << "Pizza Napolitana" << endl;
	cout << hora << ":" << minuto << ":" << segundo << endl;
	sleep_for(seconds(1));
	segundo--;
	
	if (minuto==0 && segundo==2){
	fin=1;
}
	
	if (segundo==0) {
		minuto--;
		segundo=0;
	}
	
	if (segundo==0){
		minuto--;
		segundo=60;
	}
}
	system("cls");
	cout << "0:0:0"<< endl; 
	cout << "Orden Lista. Pulse cualquier tecla para aceptar la entrega." << endl;

getch();
	
	}
	else {
		cout<<"----------------------------------------------------------------"<<endl;
		cout<<"Ha ocurrido un error o el numero no es valido. Intente de nuevo."<<endl;
		cout<<"----------------------------------------------------------------"<<endl;
	}
	    cout<<"--------------------------------------------------------------"<<endl;
		cout<<"Su orden ha sido entregada con exito. Gracias por preferirnos!"<<endl;
		cout<<"--------------------------------------------------------------"<<endl;
    return 0;
}
