#include <iostream>
#include "Karyawan.cpp"
#include "Film.cpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Karyawan karyawan;        
    Film film;
	     
    cout<<endl<<"Input Data"<<endl;
    cout<<"-------------------"<<endl;
    karyawan.addKaryawan();  
	film.addFilm();       
 
    cout<<endl<<"Transaksi Bioskop"<<endl;
    cout<<"---------------------"<<endl;
    karyawan.showKaryawan(); 		
	film.showFilm();	   
        
	return 0;
}
