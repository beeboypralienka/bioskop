#include <iostream>
#include "Transaksi.h"
#include "Film.cpp"
#include "Studio.cpp"
#include "Karyawan.cpp"

void menu(){
	cout<< "____________________" <<endl;	
	cout<< "| Perhatian        |" <<endl;
	cout<< "|                  |" <<endl;
	cout<< "| Kode Studio:     |" <<endl;
	cout<< "| 1 = Studio Alexa |" <<endl;
	cout<< "| 2 = Studio Delux |" <<endl;
	cout<< "|                  |" <<endl;
	cout<< "| Kode Film:       |" <<endl;
	cout<< "| A = Batman       |" <<endl;
	cout<< "| B = Robin        |" <<endl;
	cout<< "|                  |" <<endl;	
	cout<< "| Kode Jadwal:     |" <<endl;
	cout<< "| 1A = 12/10/2015  |" <<endl;
	cout<< "|      13.00 WIB   |" <<endl;
	cout<< "|      Rp. 25.000  |" <<endl;
	cout<< "| 1B = 13/10/2015  |" <<endl;
	cout<< "|      20.00 WIB   |" <<endl;
	cout<< "|      Rp. 30.000  |" <<endl;	
	cout<< "|__________________|" <<endl;
}

int main() {
	
	Karyawan kasir;        
	Film film;
	Studio studio;	
    Transaksi transaksi;    
    
    menu();	     
    cout<<endl<<"Input Data"<<endl;
    cout<<"-------------------"<<endl;
    kasir.addKaryawan();     
    do{studio.addStudio();}
	while((studio.getStudio()!="1")&&(studio.getStudio()!="2"));			
	do{film.addFilm();}
	while((film.getFilm()!="A")&&(film.getFilm()!="B"));	
	transaksi.addTransaksi();
					  
 	system("cls");
 	menu();
    cout<<endl<<"----- Faktur Transaksi Anda -----"<<endl<<endl;    
	transaksi.generateKode();  
	film.showFilm();  
	studio.showStudio(); 
    transaksi.showTransaksi();	    
    kasir.showKaryawan();    
	cout<<endl<<endl<<"     ----- TERIMA KASIH -----"<<endl<<endl;    			         
	return 0;
}
