#include <iostream> 
#include <bitset>

#define shift_left(a,b)		a = a << b	// shift a left by b bits
#define shift_right(a,b)	a = a >> b	// shift a right by b bits
#define __mask16(a)			(a & 0x0001) //mask out first 15 bits, parenteses for setting precedence

using namespace std;  

int main(void)
{
	__int16 input = 0;
	int count = 0;

	cout << "Please, input a 16-bit integer: ";
	cin >> input;
	cout << endl << "Here's the integer in binary:   " << bitset<16>(input) << endl;

	for(int n = 0; n < 16; n++){
		if( __mask16(input)) count++;
		shift_right(input,1);
	}

	cout << "Total of " << count << " bits are set." << endl << endl;
	
  return 0;
}