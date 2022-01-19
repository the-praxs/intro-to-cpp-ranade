#include <simplecpp>

main_program{
    float a, b, c;
    float A, B, C;

    cout << "Enter sides of a triangle: " << endl;
    cin >> a >> b >> c;

    A = arccosine((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
    B = arccosine((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
    C = arccosine((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));

    turtleSim();

    forward(a);
    left(180-C);
    forward(b);
    left(180-A);
    forward(c);
    left(180-B);

    wait(5);
}
