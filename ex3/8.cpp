#include <simplecpp>

main_program{
    int a, r, n;
    int i = 0;

    cout << "Enter values of a, r, n: ";
    cin >> a >> r >> n;

    repeat(n){
        int prod = a * pow(r,i);
        i = i + 1;
        cout << prod << endl;
    }
}
