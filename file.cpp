#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="sakshi kadlag";
    string st2;

    //opening file using constructor and writing it
    ofstream out("sample.txt");//Write operation
    out<<st;

    //opening file using constructor and reading it
    ifstream in("sample2.txt");//Read Operation
    //in>>st2;
    getline(in,st2);
    cout<<st2;
    
    return 0;
}