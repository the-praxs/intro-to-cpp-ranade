#include <simplecpp>

main_program{
    char p, q;
    int dig1, dig2, n;

    cin >> p >> q;
    dig1 = p - 48;
    dig2 = q - 48;
    n = dig1*10 + dig2;

    cout << dig1 << " " << dig2 << " " << n;
}
