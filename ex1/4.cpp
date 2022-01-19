#include <simplecpp>

main_program{
    turtleSim();

    repeat(2){
        repeat(60){
            forward(5);
            left(360.0/60);
        }
        right(180);
    }

    penUp();
    forward(50);
    penDown();

    wait(5);
}
