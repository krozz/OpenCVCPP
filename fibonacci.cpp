//fibonnaci even number sum-er from 1 to 4 million digit-spaces
//kr0zz
#include <iostream>
using namespace std;

int main()
{
    int n1 = 1, n2 = 1, currentNumber, sum = 0;
    cout << 1 << " ";


    bool condition = true;

    while(condition){

        currentNumber = n2 + n1;
        if(currentNumber % 2 == 0)
        sum += currentNumber;
        n2 = n1;
        n1 = currentNumber;



        if(currentNumber > 4000000){
            condition = false;
        }
        cout << currentNumber << " ";

    }


    cout << "SUM: " << sum;


    return 0;
}
./f //what is this
