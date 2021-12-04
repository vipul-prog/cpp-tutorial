#include <iostream>
using namespace std;

int main() 
{
    int a = 5;
    int b(3);
    int c{2};
    auto result = a+b+c;
    cout<<result;

    return 0;
}