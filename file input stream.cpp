#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;               //create input stream
    char ch;                      //variable for storing GET pointer character 

    fin.open("my.txt");           //Load file in RAM
    fin>>ch;                       //storing first GET pointer into ch variable
                     
    while(!fin.eof())               //iterate till the end of the file
    {
        cout<<ch;                     //print the value at first index( 1st ch)
        fin>>ch;                     //move GET pointer forward
    }

    fin.close();                     //close file

    return 0;
}