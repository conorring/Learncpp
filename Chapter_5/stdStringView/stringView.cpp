# include<iostream>
# include<string_view>
# include <string>

void printSV(std::string_view str)
{
    std::cout << str << '\n';
}

int main()
{
    // std::string_view is used when we want to make a copy of a string without
    // modifying it eg printing it to console

    // std::string s{"Hello World"}; // a copy of "Hello World" is made and stored in s
    // std::cout << s << '\n';       // copy initialisation is slow for non fundamental types

    // // Above, all we've done is make a copy of the string to print it and
    // // the destroy it which is inefficient

    // //std::string_view types are for read only which make it more efficient
    // // no copies are made
    // std::string_view s1{"Hello World"};
    // std::cout << s1 << '\n';

    // // we can initialise a std::string_view with many types of strings including the
    // // ones we have seen so far

    // // The same for passing as an argument
    // // The following are all valid
    // printSV("Hello world"); 
    // std::string s2{"Hello World"};
    // printSV(s2);
    // std::string_view s3{s2};
    // printSV(s3);

    //changing the value of the thing it is viewing changes what it outputs
    // this is unlike copy initialisation

    std::string name{"Alex"};
    std::string_view sv{name};
    name = "John";
    std::cout << sv << '\n';
    
    return 0;
}
