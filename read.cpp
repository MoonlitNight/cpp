#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(){
    ifstream in;
    cout << "please enter file path:" << endl;
    char path[100];
    cin >> path;
    in.open(path);
    if(!in.is_open()){
        cout << "Cloud not open the file: " << path << endl;
        cout << "Program terminating." << endl;
        exit(EXIT_FAILURE);
    }
    char data[1025];
    while(in.good()){
        in.getline(data,1024);
        cout << data << endl;
    }
    in.close();
    return 0;
}
