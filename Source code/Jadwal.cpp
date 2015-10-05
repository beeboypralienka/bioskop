# include <iostream>
using namespace std;
 
class Jadwal
{
        private:
            string tglMain, jamMain, kodeJadwal;
			double hargaTiket;
            
        public:
            void addJadwal()
            {            	
            	cout<<"Input Kode Jadwal [1A/1B] : ";
            	cin>>kodeJadwal;   								
            }
            
            string getKodeJadwal(){
            	return kodeJadwal;
			}
			
            void showJadwal()
            {            
				if(kodeJadwal=="1A"){
					tglMain = "12/10/2015";
					jamMain = "13.00 WIB";
					hargaTiket = 25000;
				}else{
					tglMain = "13/10/2015";
					jamMain = "20.00 WIB";
					hargaTiket = 30000;
				} 	
								 
            	cout<<"Tanggal Putar       : " << tglMain <<endl;            
            	cout<<"Jam Tayang          : " << jamMain <<endl;
            	cout<<"Harga Tiket         : " << hargaTiket <<endl;
            }
            
            double getHarga()
			{
            	return hargaTiket;	
			}
};
