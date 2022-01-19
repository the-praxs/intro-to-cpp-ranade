#include <simplecpp>

main_program{
    turtleSim();

    penUp();        // Align the turtle on the
    forward(-200);  // leftmost side of the
    left(90);       // canvas
    forward(150);
    right(90);
    penDown();

    repeat(8){
        repeat(8){
            repeat(4){
                forward(50);
                left(90);
            }

            penUp();        // Move the turtle to the adjacent
            forward(50);    // side of the recent drawn
            penDown();      // square
        }

        penUp();
        forward(-400);
        right(90);
        forward(50);
        left(90);
        penDown();
    }

    wait(10);
}
