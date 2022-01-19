#include <simplecpp>

main_program{
    double result = 1.0, term = 1.0;
    int i = 1, x;

    cout << "Enter value of x: ";
    cin >> x;

    repeat(15){
        result += pow(x, i)*term;
        i += 1;
        term = term/i;
    }

    cout << "e^" << x << " = " << result;
}
