#include <iostream>
#include "Jadwal.cpp"
#include "Film.cpp"
#include "Studio.cpp"
#include "Karyawan.cpp"
using namespace std;
 
class Transaksi : public Jadwal
{		
        private:
            string kdTransaksi;
            double jmlPesanKursi, totalHarga;
            
        public:
        	Karyawan kasir;        
			Film film;
			Studio studio;
	
            void generateKode()
            {
                cout<<"Kode Transaksi : 865235482"<<endl;                
            }
            void addTransaksi(){
            	kasir.addKaryawan(); 
				film.addFilm();	 
				studio.addStudio();
				
            	Jadwal::addJadwal();
            	cout<<"Input Jumlah Pesan Kursi : ";                
                cin>>jmlPesanKursi;
			}
            void showTransaksi()
            {       	
				cout<<"Kode Transaksi : 865235482"<<endl;			
				film.showFilm();  
				studio.showStudio();				   	
            	Jadwal::showJadwal();
            	cout<<"Jumlah pesan kursi : "<<jmlPesanKursi<<endl;
            	totalHarga = jmlPesanKursi*Jadwal::getHarga();
				cout<<"Total harga : "<<totalHarga<<endl;    
				kasir.showKaryawan();        	            	            	            	            	          
            }
};
