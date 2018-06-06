#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    for(int i=num; i<=200; i++)
    {
        int res = i * num;
        if(res % 10 == 0) {
            cout << res;
            cout << endl;
        } else {
            cout << res;
            cout << " ";
        }
    }
    return 0;
}