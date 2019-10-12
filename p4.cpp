#include <iostream>
#include <string>

int main()  {
    // Declaring and taking a string as input.
    std::string input;
    
    // Using getline to take an entire line as input as opposed to just one word.
    std::getline(std::cin, input);
    
    // Declaring counters and initiliazing them to 0.
    unsigned int vowelCounter = 0;
    unsigned int consonantCounter = 0;
    unsigned int digitCounter = 0;
    unsigned int spaceCounter = 0;

    for (char c : input)    {
        if (c >= '0' && c <= '9')   {
            digitCounter++;

            // If the character is a digit, it cannot be anything else. So, jumping to the next iteration of the loop.
            continue;
        }

        // Using switch instead of `if`, as `switch` has slightly better performance in some scenarios when the input is fixed in number.
        switch (c)  {
            // Starting by checking for space.
            case ' ':
                spaceCounter++;
                continue;       // Directly jumping on the next iteration of the loop if found.

            // Next, checking for vowels. Using a small hack with the switch statements.
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowelCounter++;
                continue;

            // If the character is not a space or not a vowel and not a space, then by deafult, it is a consonant.
            default:
                consonantCounter++;
                continue;
        }
    }

    // Once the result has been calculated, printing the same to the screen. Using linefeed character to end the line. Using `endl` 
    // casues buffer flush with every call to `endl` and so is being avoided here.
    std::cout << "Vowels Found: " << vowelCounter << "\n";
    std::cout << "Spaces Found: " << spaceCounter << "\n";
    std::cout << "Digits Found: " << digitCounter << "\n";
    std::cout << "Consonants Found: " << consonantCounter << "\n";

    return 0;
}