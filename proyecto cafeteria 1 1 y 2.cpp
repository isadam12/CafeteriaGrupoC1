#include<iostream>
using namespace std;
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
	if (opcion == 1) {
		cout<<"Ha seleccionado Plato del Dia. Estara listo en un momento. "<<endl;

	}
	else if (opcion == 2) {
	cout<<"Ha seleccionado Recomendacion del chef. Estara listo en un momento. "<<endl;

    }
    else if (opcion == 3) {
    	cout<<"Ha seleccionado Pizza napolitana. Estara listo en un momento. "<<endl;

	}
	else {
		cout<<"----------------------------------------------------------------"<<endl;
		cout<<"Ha ocurrido un error o el numero no es valido. Intente de nuevo."<<endl;
		cout<<"----------------------------------------------------------------"<<endl;
	}
    return 0;
}
