#include <iostream>
#include "Transaksi.h"

using namespace std;
  	
            void Transaksi::generateKode()
            {            	
                cout<<"Kode Transaksi      : 865235482"<<endl;                
            }
            void Transaksi::addTransaksi(){    
            
            	do{
					Jadwal::addJadwal();
				}while((Jadwal::getKodeJadwal()!="1A")&&(Jadwal::getKodeJadwal()!="1B")); 
							
            	cout<<"Input Jumlah Pesan Kursi : ";                
                cin>>jmlPesanKursi;                
			}
            void Transaksi::showTransaksi()
            {       																   	
            	Jadwal::showJadwal();            	
            	cout<<"Jumlah pesan kursi  : "<<jmlPesanKursi<<endl;
            	totalHarga = jmlPesanKursi*Jadwal::getHarga();
				cout<<"Total harga         : "<<totalHarga<<endl;    				       	            	            	            	            	          
            }

