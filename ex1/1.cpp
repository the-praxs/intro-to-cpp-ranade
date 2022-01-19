#include<simplecpp>

main_program{
    int sides;
    int side_length;

    cout << "Enter number of sides for Polygon: ";
    cin >> sides;
    cout << "Enter side length: ";
    cin >> side_length;

    turtleSim();

    repeat(sides){
        forward(side_length);
        left(360.0/sides);
    }

    wait(5);
}
