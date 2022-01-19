#include <simplecpp>

main_program{
    int n;

    cout << "Enter no. of repititions: ";
    cin >> n;

    turtleSim();

    penUp();
    left(90);
    forward(150);
    right(90);
    forward(120);
    penDown();

    repeat(n){
        forward(25);

        forward(10);
        repeat(26){
            forward(1.5);
            left(360.0/36);
        }
        forward(10);

        forward(25);

        forward(10);
        repeat(26){
            forward(1.5);
            right(360.0/36);
        }
        forward(10);

        right(10);
    }

    penUp();
    forward(50);

    wait(5);
}
