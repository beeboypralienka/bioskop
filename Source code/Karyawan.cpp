#include <iostream>
#include "Karyawan.h"
using namespace std;
 
            void Karyawan::addKaryawan()
            {                
                cout <<"Input Nama Karyawan       : ";				
                getline(cin, namaKaryawan);                                
            }
            void Karyawan::showKaryawan()
            {    				          					
				cout<<"Kasir               : "<<namaKaryawan;
            }
