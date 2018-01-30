/**<
Patrick Roche
Exercise 13
Prime numbers calculator */

/**< Preprocessor Directives */
#include <iostream>
/**< for file i/o's */
#include <fstream>
/**< for the error function */
#include <cstdlib>

using namespace std;

/**< Main Fucntion */
int main()
{
	/**< integer declerations, i and j = counting ints, n = entered by user, output checks if n is prime */
	int n = 0,i = 2, output = 0,j = 2;


    /**< creates a file output object called primeNumbers, which creates a text file (primeNumbers.txt)
    and outputs to it (ios::out)*/
    ofstream primenumbers( "primenumbers.txt", ios::out );

    /**< An Exhaustive Search to find all prime numbers between 2 and n */
	cout << "Exhaustive Search for Prime Numbers!" << endl;

	/**< instead of printing out to console (cout), this prints to primenumbers.txt */
    primenumbers<<"PrimeNumbers!!!!"<<endl;

    /**< determine whether the open operation succeeded */
	if (!primenumbers)
	{
		cerr << "File could not be opened!" << endl;
		exit( 1 );
	}

	/**< read in positive value for n */
	do
	{
		cout << "\nEnter positive value for n: ";
		cin >> n;
	}
	while (n <= 0);

	/**< for loop to check if any numbers between 2 and n are prime */
    for(j=2;j<=n;j++)
    {

        for (i=2;i<j;i++)
        {
                /**< if a number 'j' is divisible by any number between 2 and j, then the checker notes that 'j' isnt prime */
                if (j%i==0)
                {
                   break;
                }
        }

        if (i == j)
        {
            output = j;
            primenumbers<<output<<endl;
            cout << "\nPrime Number = " << output << endl;
        }
    }

        primenumbers.close();


	return 0;
}
