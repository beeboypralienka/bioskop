# include <iostream>
using namespace std;
 
class Jadwal
{
        private:
            string tglPutar, jamTayang, kodeJadwal;
			double hargaTiket;
            
        public:
            void addJadwal();            
            string getKodeJadwal();			
            void showJadwal();            
            double getHarga();
};
