# include<iostream>
# include<string_view>
# include<string>

std::string_view getBoolName(bool b)
{
    std::string t { "true" };  // local variable
    std::string f { "false" }; // local variable

    if (b)
        return t;  // return a std::string_view viewing t

    return f; // return a std::string_view viewing f
} // t and f are destroyed at the end of the function
  // it is better to view the C-style literals themselves and return the viewer

int main()
{
    // If a std::string_view object looks at something that is destroyed we will see
    // undefined behaviour as follows
    std::string_view sv{};

    {
        std::string s{"Hello World"}; // the scope of s is inside the braces
        sv = s; // sv now views s
    } // s is destroyed here

    std::cout << sv << '\n'; // undefined behaviour

    std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n'; // undefined behavior
    
    return 0;
}
