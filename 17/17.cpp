#include <iostream>
#include <string>

using namespace std;

// NOT WORKING

string ones[] {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
               "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string doubles[] {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

int numberInWords(unsigned int number)
{
    int i = 0;

    if (number == 1000)
        return string("onethousand").size();

    string result;

    while (number != 0)
    {
        int remainder = number % 10;
        number /= 10;

        if (remainder != 0)
        {
            result += (i != 1 ? ones[remainder-1] : doubles[remainder-2]);

            if (i == 2)
                result += "hundred";
            else if (i == 3)
                result += "thousand";
        }

        i++;
        if (i == 2)
        {
            result += "and";
        }
    }

    cout << result << endl;

    return result.size();
}

int main()
{
    long long sum = 0;
    for (int i = 1; i <= 1000; i++)
    {
        sum += numberInWords(i);
    }

    cout << sum << endl;
}
