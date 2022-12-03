#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    //open the file write to the file
    ofstream out;
    out.open("sample.txt");
    out<<"sangamner college sangamner";
    out<<"Sakshi Kadlag";
    out.close();

    //open the file and reading comntents of the file

    ifstream in;
    in.open("sample.txt");
    string content;
    in>>content;
    cout<<content;//one word read

    //all lines read 

    while(in.eof()==0)
    {
        getline(in,content);
        cout<<content<<endl;
        
    }

    return 0;
}