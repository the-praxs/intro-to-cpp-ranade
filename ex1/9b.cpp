#include <simplecpp>

main_program{
    turtleSim();

    repeat(2){
        forward(150);
        left(90);
        forward(200);
        left(90);
    }
    right(180);
    right(70);
    forward(200);
    right(90);
    forward(150);
    right(90);
    forward(40);
    penUp();
    forward(50);

    wait(5);
}
