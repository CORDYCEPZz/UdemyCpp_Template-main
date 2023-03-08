#include <iostream>
#include <string>

bool is_palindrome(std::string_view text)
{
    const auto reversed = std::string(text.rbegin(), text.rend());
    return reversed == text;
}

int main()
{
    const auto text = std::string{"otato"};
    const auto check = is_palindrome(text);
    std::cout << text <<" is Palindrome? " << std::boolalpha << check << "\n";

    return 0;
}
