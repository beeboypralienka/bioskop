#include <iostream>
#include "Karyawan.cpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Karyawan karyawan;        
         
    cout<<endl<<"Input Data Karyawan"<<endl;
    cout<<"-------------------"<<endl;
    karyawan.addKaryawan();        
 
    cout<<endl<<"Data Karyawan"<<endl;
    cout<<"-------------"<<endl;
    karyawan.showKaryawan();        
        
	return 0;
}
