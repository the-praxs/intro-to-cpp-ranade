#include <simplecpp>

main_program{
    int number = 11;
    int n = 99 - 11 + 1;

    repeat(n){
        cout << number << ": ";
        cout << pow(number, 2) << endl;
        number++;
    }
}

