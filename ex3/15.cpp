#include <simplecpp>

main_program{
    double x;
    int n;
    cin >> x >> n;
    repeat(n){
        x = x * x;
    }
    cout << x;
}
