#include <iostream>
#include "Karyawan.cpp"
#include "Film.cpp"
#include "Studio.cpp"
#include "Jadwal.cpp"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Karyawan karyawan;        
    Film film;
    Studio studio;
    Jadwal jadwal;
	     
    cout<<endl<<"Input Data"<<endl;
    cout<<"-------------------"<<endl;
    karyawan.addKaryawan();  
	film.addFilm();  
	studio.addStudio();
	jadwal.addJadwal();   
	  
 	system("cls");
    cout<<endl<<"Transaksi Bioskop"<<endl;
    cout<<"---------------------"<<endl;
    karyawan.showKaryawan(); 		
	film.showFilm();	 
	studio.showStudio();
	jadwal.showJadwal();  
        
	return 0;
}
