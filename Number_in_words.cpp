/* C++ program to print a given number in words. The program handles till 9 digits numbers and can be easily extended to 20 digit number */

#include<iostream>

using namespace std;


/* strings at index 0 is not used, it is to make array indexing simple */
string ones[]={ "", "one ", "two ", "three ", "four ","five ", "six ", "seven ", "eight ",
				"nine ", "ten ", "eleven ", "twelve ","thirteen ", "fourteen ", "fifteen ",
				"sixteen ", "seventeen ", "eighteen ","nineteen " };

string tens[] = { "", "", "twenty ", "thirty ", "forty ","fifty ", "sixty ", "seventy ", "eighty ","ninety " };

// n is 1- or 2-digit number
string numToWords(int n, string s)
{
	string str = "";

	// if n is more than 19, divide it
	if (n > 19)
		str += tens[n / 10] + ones[n % 10];
	else
		str += ones[n];

    // if n is non-zero
	if (n)
		str += s;

	return str;
}

// Function to print a given number in words
string convertToWords(long n)
{

	string outp;


	outp += numToWords((n / 10000000), "crore ");


	outp += numToWords(((n / 100000) % 100), "lakh ");

	outp += numToWords(((n / 1000) % 100), "thousand ");


	outp += numToWords(((n / 100) % 10), "hundred ");

	if (n > 100 && n % 100)
		outp += "and ";


	outp += numToWords((n % 100), "");

	return outp;
}

int main()
{
    long num;
    cout<<"\nEnter a number: ";
    cin>>num;
    if(num==0)
        cout<<"\nZero";

    else
        cout<<"\n"<<convertToWords(num)<<"\n";
}
