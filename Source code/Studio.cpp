# include <iostream>
# include "Studio.h"

using namespace std;
 
            void Studio::addStudio()
            {
                cout<<"Input Kode Studio [1/2]   : ";                
                getline(cin, namaStudio);                               
            }
            
            string Studio::getStudio(){
            	return namaStudio;
			}
			
            void Studio::showStudio()
            {            	            					
				if(namaStudio == "1"){            		
            		cout<<"Studio yang dipilih : Studio Alexa" <<endl;            	
				}else{
					cout<<"Studio yang dipilih : Studio Delux" <<endl;            	
				}
            	         
            }
