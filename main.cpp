#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
        ifstream in_file;
        ofstream out_file;
        out_file.open("hello.txt");
        if (in_file.fail())
        {
                return -1;
        }
        out_file << "Hello, World!" << endl;
        out_file.close();

        in_file.open("hello.txt");
        if (in_file.fail()){
                return -1;
        }

        string str;
        while (in_file >> str){
                cout << str;
        }

        return 0;
}
