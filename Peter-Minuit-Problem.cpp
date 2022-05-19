/*(Peter Minuit Problem) Legend has it that, in 1626, Peter Minuit purchased Manhattan 
Island for $24.00 in barter. Did he make a good investment? To answer this question, 
modify the compound-interest program of Fig. 5.6 to begin with a principal of $24.00 and 
to calculate the amount of interest on deposit if that money had been kept on deposit 
until this year (e.g., 390 years through 2016). Place the for loop that performs the
compound-interest calculation in an outer for loop that varies the interest rate from 
5% to 10% to observe the wonders of compound interest. (c++ how to program) */

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main()
{

    double amount(0), principal(24);

    cout << "year" << setw(24) << "Amount on deposit" << endl;

    for (double rate(0.05); rate <= 0.1; rate += 0.01)
    {

        int date(1626);

        for (int year(1); year <= 390; year++)
        {

            date++;
            amount = principal * pow(1 + rate, year);
            cout << setw(4) << date << setw(8) << year << setw(8) << rate << setw(20) << amount << endl;
        }
    }
}
