#include <simplecpp>

main_program{
    int x1, y1, x2, y2;
    float distance;

    cout << "Enter coordinates of first point: ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point: ";
    cin >> x2 >> y2;

    distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    cout << "Distance beetween points = " << distance;
}
