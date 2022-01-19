#include <simplecpp>

main_program{
    turtleSim();

    penUp();        // Align the turtle on the
    forward(-250);  // leftmost side of the
    penDown();      // canvas

    repeat(10){
        repeat(4){
            forward(50);
            left(90);
        }
        penUp();        // Move the turtle to the adjacent
        forward(50);    // side of the recent drawn
        penDown();      // square
    }

    wait(5);
}
