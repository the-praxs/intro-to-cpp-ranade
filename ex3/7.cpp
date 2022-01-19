#include <simplecpp>

main_program{
    int a, d, n;
    int i = 0;

    cout << "Enter values of a, d, n: ";
    cin >> a >> d >> n;

    repeat(n){
        int sum = a + i*d;
        i = i + 1;
        cout << sum << endl;
    }
}
