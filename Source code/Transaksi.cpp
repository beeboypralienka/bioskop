#include <iostream>
#include "Jadwal.cpp"

using namespace std;
 
class Transaksi : public Jadwal
{		
        private:
            string kdTransaksi;
            double jmlPesanKursi, totalHarga;
            
        public:        	
            void generateKode()
            {            	
                cout<<"Kode Transaksi      : 865235482"<<endl;                
            }
            void addTransaksi(){    
            
            	do{
					Jadwal::addJadwal();
				}while((Jadwal::getKodeJadwal()!="1A")&&(Jadwal::getKodeJadwal()!="1B")); 
							
            	cout<<"Input Jumlah Pesan Kursi : ";                
                cin>>jmlPesanKursi;                
			}
            void showTransaksi()
            {       																   	
            	Jadwal::showJadwal();            	
            	cout<<"Jumlah pesan kursi  : "<<jmlPesanKursi<<endl;
            	totalHarga = jmlPesanKursi*Jadwal::getHarga();
				cout<<"Total harga         : "<<totalHarga<<endl;    				       	            	            	            	            	          
            }
};
