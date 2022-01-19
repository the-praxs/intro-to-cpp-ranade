#include <simplecpp>

main_program{
    turtleSim();
    penUp();

    repeat(6){
        forward(40+40);
        penDown();

        repeat(32){
            forward(9.5);
            left(360.0/32);
        }

        penUp();
        forward(-(40+40));
        left(60);
    }

    forward(48);
    left(90);
    forward(-6);
    penDown();

    repeat(32){
        forward(9.5);
        left(360.0/32);
    }

    wait(5);
}
