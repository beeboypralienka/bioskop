#include <iostream>
#include "Transaksi.cpp"

int main() {
		
    Transaksi transaksi;
	     
    cout<<endl<<"Input Data"<<endl;
    cout<<"-------------------"<<endl;
	transaksi.addTransaksi();  
	  
 	/*system("cls");*/
    cout<<endl<<"Transaksi Bioskop"<<endl;
    cout<<"---------------------"<<endl;    
    transaksi.showTransaksi();	    
     		         
	return 0;
}
