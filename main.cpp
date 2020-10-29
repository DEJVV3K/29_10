#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv){
	int liczbaRekordow=0;
	ifstream file;
	ofstream fileOut;
	ofstream fileOut2;
	ofstream fileOut3;
	char* endptr;
	long liczba, max;
	string liczba1, liczba2;
	file.open("dane_systemy1.txt");
	file.open("dane_systemy2.txt");
	file.open("dane_systemy3.txt");
	fileOut.open("wyjscie.txt");
	bool pierwszy = true;
 
	if(file.good())
    	while(!file.eof()){
            file>>liczba1 >> liczba2;
			file2>>liczba3 >> liczba4;
			file3>>liczba5>> liczba6;
            liczba =  strtol(liczba2.c_str(), &endptr, 4);
            liczba2 =  strtol(liczba4.c_str(), &endptr, 4);
            liczba3 =  strtol(liczba6.c_str(), &endptr, 4);
            
            if(pierwszy){
                if (liczba > max)
				if (liczbaII >max2)
				if (liczba3 > max3)
                pierwszy = false;
            }
            else{
                if(liczba > max){
                max = liczba;
    		}
		}
	fileOut<< "58.1: " << max <<endl;
	file.close();
	file.close();
	file.close();
	fileOut.close();
	return 0;
}
