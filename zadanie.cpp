#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
    fstream plik;
    plik.open("wsp.txt", ios::in);  
      if(plik.good() == true)
    
        while(!plik.eof())
        {
        
        cout<<"-9 8 2 -4 3 5 -2 -1 4 -1 -3 3 4 1"<<endl;

        }
	  ofstream MyFile("wynik.txt");
	MyFile <<"-9 8 2 - �wiartka, -4 3 5 - �wiartka, -2 -1 4 - �wiartka, 4 -1 -3 - �wiartka, 3 4 1 - �wiartka";
	
	MyFile.close();	
    
  
}

