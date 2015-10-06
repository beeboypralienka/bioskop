#include <iostream>
#include "Jadwal.h"

using namespace std;

    void Jadwal::addJadwal(){
    	cout<<"Input Kode Jadwal [1A/1B] : ";
        cin>>kodeJadwal;
	}
	
	string Jadwal::getKodeJadwal(){
            	return kodeJadwal;
	}
			
    void Jadwal::showJadwal()
    {            
				if(kodeJadwal=="1A"){
					tglPutar = "12 Oktober 2015";
					jamTayang = "13.00 - 15.00 WIB";
					hargaTiket = 25000;
				}else{
					tglPutar = "13 Oktober 2015";
					jamTayang = "20.00 - 22.00 WIB";
					hargaTiket = 30000;
				} 	
								 
            	cout<<"Tanggal Putar       : " << tglPutar <<endl;            
            	cout<<"Jam Tayang          : " << jamTayang <<endl;
            	cout<<"Harga Tiket         : " << hargaTiket <<endl;
    }
            
            double Jadwal::getHarga()
			{
            	return hargaTiket;	
			}
        	
