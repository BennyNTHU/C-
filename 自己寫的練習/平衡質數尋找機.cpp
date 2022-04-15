/* EE231002 Lab03. Balanced Prime Numbers
   106061218, Cheng En Lee
   Date: 2017/10/11
*/

# include <iostream>
using namespace std;

int square_root ( int );

int main()
{	
	/* The following variables are related to finding balanced prime numbers. */

	int nNumber_seed;	// To produce nNumber. All balanced prime numbers are even.
	int nNumber;	
	int ntest;		// nNumber will be divided by this variable to test whether it's a prime number.
	int nCount = 0;	// Counting the amounts of balanced prime numbers found.
	int nhas_factor;	//This variable  = 1 if nNumber has factor(s); Otherwise, the varible = 0.
	int nbuffer1 = 3, nbuffer2 = 5, nbuffer3;	// To save three successive prime numbers.
	int amounts;
	/* The following variables are related to approximating the sqaure root of nNumber. */

	int sqroot;	// The approximation of square root of nNumber.
	int i;	// Used in a loop.
	
	cout<<"How many balanced prime numbers do you want? ";
	cin>>amounts;
	
	for( nNumber_seed = 3 ; nCount < amounts ; nNumber_seed++ )	//To find Balanced prime numbers.
	{	
		nhas_factor = 0;	// Initialization.
		nNumber = 2 * nNumber_seed + 1; // To produced nNumber.
		sqroot = square_root(nNumber);

		/*  For integers between 2 to the square root of nNumber,
			if all of them aren't the factors of nNumber,
			then nNumber is prime. */

		for( ntest = 2 ; ntest < sqroot ; ntest = ntest + 1 )	 
		{
			if  ( nNumber % ntest == 0 )
				nhas_factor = 1;	// Those has a factor aren't primes.
			else if ( sqroot == ntest + 1 && nhas_factor == 0 )	// Which means nNumber is a prime.
			{
				/* Determine whether a prime number is a balanced prime number. 
				   That is, for three successive prime numbers,
				   if the middle one is the average of the others,
				   then it's a balanced prime numbers */

				nbuffer3 = nNumber;
					if ( 2 * nbuffer2 == nbuffer1 + nbuffer3 ) 
					{
						nCount++;	// Counting the amoumts of balanced prime numbers found.
						cout<<"Balanced Prime Number"<<'\t'<<"#"<<nCount<<'\t'<<nbuffer2<<endl;
					}
					
				/* Transfer the prime numbers storing in the buffers
				   with an eye to find the next prime number
				   and store in buffer3 */

				nbuffer1 = nbuffer2;
				nbuffer2 = nbuffer3;
			}

		}
		
	}
	
	system("PAUSE");
	return 0;
}		

int square_root( int Var )
{
	/* To approximate the sqare root of nNumber by Newton Method. 
	Take x0 such that 1 < x0 < S, ( take x0 = nNumber_seed here. )
	then sqaure root of S = lim(n->inf) 0.5*( xn + (S/xn) ). */
	
	int result;
	int Var_seed = ( Var-1 ) / 2;
	
	result = 0.5 * ( Var + ( Var / Var_seed) );
	for ( int i = 1 ; i <= 9 ; i++ )	// It's Accurate enough when i = 9.
		result = 0.5 * ( Var + ( Var / Var_seed) );
	result++;	// More appropriate for prime number test.
	
	return result;
}


