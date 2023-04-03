#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <cstring>
using namespace std;
    int main(int argc, char* argv[]){

        int opfile = 0;
        for( size_t arg = 0; arg < argc; arg++){
            if(!strcmp(argv[arg], "--output") || !strcmp(argv[arg], "-o")){
                opfile = arg+1; 
        }  
            if(!strcmp(argv[arg], "--help") || !strcmp(argv[arg], "-h")){
                printf("Nyan - A UwU version of cat\n============================================\nUsage: nyan [input] [arg]\n============================================\nArguments\n-o, --output = Outputs to a ASCII Text File\n-h, --help = Displays this page\n============================================\nWritten by ItsT3K, 2023\n");
                return 0;
            }
        }
        if(argc != 2 && argc != 4){
            printf("Oopsies! Yuo put in the wrong awgument :c\n");
            return 1;
        }

        int index;
        ifstream filein(argv[1]);
        ofstream fileout(argv[opfile]);
        string my_str;
        // Replacement Strings
            string str_ll = "ww";
            string str_orr = "oww";
            string str_or = "ow";
            string str_er = "ew";
            string str_na = "nya";
            string str_nan = "nyan";
            string str_ma = "mya";
            string str_mam = "myam";
            string str_el = "ew";
            string str_ra = "wa";
            string str_la = "wa";
        // Now for the Code
        while (getline (filein,my_str))
        {
            while((index = my_str.find("ll")) != string::npos){
                my_str.replace(index, str_ll.length(), str_ll);
                }
            while((index = my_str.find("orr")) != string::npos){
                my_str.replace(index, str_orr.length(), str_orr);
                }
            while((index = my_str.find("or")) != string::npos){
                my_str.replace(index, str_or.length(), str_or);
                }
            while((index = my_str.find("er")) != string::npos){
                my_str.replace(index, str_er.length(), str_er);
                }
            while((index = my_str.find("na")) != string::npos){
                my_str.replace(index, 2, str_na);
                }
            while((index = my_str.find("nan")) != string::npos){
                my_str.replace(index, str_nan.length(), str_nan);
                }
            while((index = my_str.find("ma")) != string::npos){
                my_str.replace(index, 2, str_ma);
                }
            while((index = my_str.find("mam")) != string::npos){
                my_str.replace(index, str_mam.length(), str_mam);
                }
            while((index = my_str.find("el")) != string::npos){
                my_str.replace(index, str_el.length(), str_el);
                }
            while((index = my_str.find("ra")) != string::npos){
                my_str.replace(index, str_ra.length(), str_ra);
                }
            while((index = my_str.find("la")) != string::npos){
                my_str.replace(index, str_la.length(), str_la);
                }
            
        if(opfile != 0){
            fileout << my_str << "\n";
        }
        else{ 
            cout << my_str << "\n";
        }   
        }
        
        filein.close();
    }
