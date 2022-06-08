/**
 * @file romanizer.cpp
 * @author John M. Pae
 * @brief C++ version of Project :: Romanizer
 * @version 0.1
 * @date 2022-06-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

using std::cout, std::cin, std::endl;
using std::string;

/**
 * @brief Holds the value and represenatation for each Roman numeral.
 * 
 */
class Numeral {
    private:
        int val;
        std::string sym;

    public:
        Numeral(string symbol, int value) {
            sym = symbol;
            val = value;
        }

        const int value() {
            return val;
        }
        const string symbol() {
            return sym;
        }
};

Numeral zero_numeral = Numeral("Z", 0);
Numeral non_zero_numerals[] = {
    Numeral("M", 1000),
    Numeral("CM", 900),
    Numeral("D", 500),
    Numeral("CD", 400),
    Numeral("C", 100),
    Numeral("XC", 90),
    Numeral("L", 50),
    Numeral("XL", 40),
    Numeral("X", 10),
    Numeral("IX", 9),
    Numeral("V", 5),
    Numeral("IV", 4),
    Numeral("I", 1)
};

string cascade(int val) {
    string result = "";

    for (auto i = 0; i < 13; i++)
    {
        Numeral curr_stage = non_zero_numerals[i];
        while (val >= curr_stage.value())
        {
            val -= curr_stage.value();
            result += curr_stage.symbol();
        }
        
    }

    return result;
}

/**
 * @brief Converts valid values to Roman numerals.
 * 
 * @param val 
 * @return string 
 */
string to_roman(int val) {
    if (val == 0)
    {
        return zero_numeral.symbol();
    }
    else
    {
        return cascade(val);
    }
}


/**
 * @brief Promps user for value and prints the corresponding roman numeral to console.
 * 
 * @return int 
 */
int main() {
    cout << "Welcome to Romanizer!" << endl;

    cout << "Enter your value: ";
    int user_value;
    cin >> user_value;

    cout << endl << to_roman(user_value) << endl;

    return 0;
}