#include<simplecpp>

main_program{
    float term = sqrt(2), result = 1.0;
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    repeat(n){
        result *= term/2;
        term = sqrt(term + 2);
    }

    cout << "Answer = " << result;
}
