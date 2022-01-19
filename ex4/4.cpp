#include <simplecpp>

main_program{
    int n, i = 0;
    float x = 0.0, a = 0.0;
    float result = 0.0;

    cout << "Enter values of n and x: ";
    cin >> n >> x;

    cout << endl << "Enter value(s) of ->" << endl;
    repeat(n+1){
        cout << "a_" << i << ": ";
        cin >> a;
        result += a * pow(x, i);
        i += 1;
    }

    cout << endl << "A(" << x << ") = " << result;
}
