#include <simplecpp>
#include <limits>

main_program{
    float number, maximum = -numeric_limits<float>::max();
    int count;

    cout << "Enter count of numbers: ";
    cin >> count;

    repeat(count){
        cout << "Enter any number: ";
        cin >> number;
        maximum = max(maximum, number);
    }

    cout << "Maximum = " << maximum;
}
