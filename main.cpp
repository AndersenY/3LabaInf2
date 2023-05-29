#include <iostream>
using namespace std;

int main()
{

    return 0;
}
int Multi(int a, int b) {
    int multiNumber = 0;
    for (int i = 0; i < b; i++) {
        multiNumber += a;
    }
    return multiNumber;
}