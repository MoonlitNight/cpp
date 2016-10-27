#include <iostream>
using namespace std;

int main(){
    char ch;
    cin.get(ch);
    while(cin.eof()==false){
        cout << ch;
        cin.get(ch);
    }
    return 0;
}
