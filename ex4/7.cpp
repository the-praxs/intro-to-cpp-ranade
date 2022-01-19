#include <simplecpp>

main_program{
    int n, d, digit;
    int result = 0, carry = 0;

    cout << "Enter values of d and n: ";
    cin >> d >> n;

    cout << "Enter digits of M: ";

    repeat(n){
        cin >> digit;

        result = digit * d;
        result += carry;

        cout << result%10;
        carry = result/10;
    }
}
