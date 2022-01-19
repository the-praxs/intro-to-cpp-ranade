#include <simplecpp>

main_program{
    turtleSim();

    left(90 - 90.0/7);

    repeat(7){
        forward(250);
        right(180 - 180.0/7);
    }

    wait(5);
}
