#include <iostream>
#include "Jadwal.h"

using namespace std;
 
class Transaksi : public Jadwal
{		
        private:
            string kdTransaksi;
            double jmlPesanKursi, totalHarga;
            
        public:        	
            void generateKode();
            void addTransaksi();
            void showTransaksi();
};
