#include <simplecpp>

main_program{
    int side, nsquares, q;

    cout << "Enter No. of Squares, Side Length and q: ";
    cin >> nsquares >> side >> q;

    turtleSim();
    repeat(nsquares){
        penDown();
        repeat(4){
            right(90);
            forward(side);
        }

        penUp();
        left(45);
        forward(q/sqrt(2));
        right(45);

        side = side + q;
    }
    wait(5);
}
