#include <simplecpp>

main_program{
    int n = 9, i = 8;

    turtleSim();

    repeat(60){
        repeat(n/2){
            forward(i);
            left(360.0/n);
        }

        n = n + 3;
        //i = i + 1;
    }

    wait(5);
}
