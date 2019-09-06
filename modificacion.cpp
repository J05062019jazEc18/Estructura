#include<iostream>
#include<conio.h>
using namespace std;
struct personas  { 
	char nombre[50];
	int tiempo;
	char revista[30];
};
int main (int argc,char** argv){
	struct personas A1[10];
	struct personas *apuntador;
	apuntador=A1;
	int num;
	
	do{
		cout<<"Elige una opcion del menu siguiente \n";
		cout <<"1.-Hacer registro \n";
		cout<<"2.- Eliminar un registr;o \n";
		cin>>num;
		switch (num)
		{
			case 1:
				cout<<"Nombre del usuario:";
				cin.getline(A1[i].nombre,20,'\n');
				cout<<"Tiempo:";
				cin>>A1[i].tiempo;
				cout<<"Nombre de la Revista: ";
				cin>>A1[i].revista;
				cin.getline(A1[i].clas.tipo,20,'\n');  
				break;
			case 2:
				
		}
	}while (num!=10);
	
out<<endl<<"Clase guardada: "<<apuntador->clas.tipo;
                                                                                                                                                                                                                                         
                                                                                                                                                                                          

	getch();
	return 0;
}
