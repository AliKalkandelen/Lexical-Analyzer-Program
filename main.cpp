#include <iostream>
#include <iomanip>

#include <fstream>
#include "tokens.h"
using namespace std;

int main( int argc, char *argv[])
{
    istream *br;
    ifstream infile;

    if(argc == 1)
        br = &cin;
    else if( argc != 2 )
    {
        cout<<"Error Message";
        return 1;
    } else
    {
        infile.open(argv[1]);
        if( infile.is_open() )
            br = &infile;
        else
        {
            cout<< argv[1] <<" can't be opened" <<endl;
            return 1;
        }
    }
}
