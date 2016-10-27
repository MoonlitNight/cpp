#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "ÇëÊäÈëÑÓÊ±ÃëÊý" <<endl;
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    clock_t start = clock();
    while(clock()-start<=delay){
        cout << clock()- start << endl;
    }
    return 0;
}
