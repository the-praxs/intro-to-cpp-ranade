#include<simplecpp>

main_program{
    int r, i = 1, rFactorial = 1, j;
    float D = 1.0, term = 1.0;

    cout << "Enter value of r: ";
    cin >> r;

    j = r;

    repeat(r){
        // Objective: Find D(r) = Sum(k)((-1)^k * r!/k!) =  r! * Sum(k)((-1)^k /k!)
        term = term/i;              // Calculates the term 1/k!
        D += (pow(-1, i))*term;     // Calculates Sum(k)((-1)^k /k!)
        i += 1;
        rFactorial *= j--;          // Calculates r!
    }

    D *= rFactorial;        // Calculates r! * Sum(k)((-1)^k /k!)
    cout << "D(" << r << ") = " << D;
}
