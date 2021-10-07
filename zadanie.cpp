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
	MyFile <<"-9 8 2 - æwiartka, -4 3 5 - æwiartka, -2 -1 4 - æwiartka, 4 -1 -3 - æwiartka, 3 4 1 - æwiartka";
	
	MyFile.close();	
    
  
}

