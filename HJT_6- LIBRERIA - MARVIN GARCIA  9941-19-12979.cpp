#include <iostream>
#include <conio.h>
#include <fstream>



using namespace std;


main(){
	cout<<"\n\n\n\t\t\t ----- LIBRERIA -----\n";
	cout<<"\n\t Modelos: \n";
	cout<<"\n\n\t\t Modelo #1 : Q.10.00";
	cout<<"\n\t\t Modelo #2 : Q.15.00";
	cout<<"\n\t\t Modelo #3 : Q.18.50";
	cout<<"\n\t\t Modelo #4 : Q.25.00\n\n";
	
		ifstream stock;
		
		stock.open("stock.txt");
		
		stock<<"\n En Existencia\n";
		stock<<"\n\t Modelo #1: 20";
		stock<<"\n\t Modelo #2: 20";
		stock<<"\n\t Modelo #3: 20";
		stock<<"\n\t Modelo #4: 20";
		
		stock.close("stock.txt");
		
		
	
	
getch();	
}
