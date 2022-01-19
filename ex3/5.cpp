#include <simplecpp>

main_program{
    int d, v, w, x, y, z;
    cout << "Enter distance in inches: ";
    cin >> d;

    v = d/(8*220*3*12);
    d = d - (v*8*220*3*12);
    w = d/(220*3*12);
    d = d - (w*220*3*12);
    x = d/(3*12);
    d = d - (x*3*12);
    y = d/12;
    z = d%12;

    cout << v << " miles, " << w << " furlongs, " << x << " yards, " << y << " feet, " << z << " inches.";
}
