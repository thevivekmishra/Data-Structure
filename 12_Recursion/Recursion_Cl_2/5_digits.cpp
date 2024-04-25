#include <iostream>
using namespace std;

// function
void printDigits(int n)
{
    if (n == 0){
        return ;
    }
    int num = n / 10;
    printDigits(num);

    int digit = n % 10;
    cout << digit << " ";
    // int num = n / 10;
    // printDigits(num);  -->revers print 

}

int main()
{
    int n = 6470;
    // int n = 06474; put 0 before any digit you will see diff output line 3388 for this  

    printDigits(n);

    return 0;
}
