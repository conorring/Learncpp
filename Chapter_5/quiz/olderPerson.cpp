# include<iostream>
# include<string>
# include<string_view>

// void getName(int person)
// {
//     std::cout << "Enter the name of person #" << person << ':';
// }

int getAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ':';
    int age{};
    std::cin >> age;

    return age;
}

int main()
{
    // Person 1 name
    std::cout << "Enter the name of person #1:";
    std::string name1{};
    std::getline(std::cin >> std::ws, name1);
    std::string_view name1_view{name1};

    // Person 1 age
    int age1{getAge(name1_view)};

    // Person 2 name
    std::cout << "Enter the name of person #2:";
    std::string name2{};
    std::getline(std::cin >> std::ws, name2);
    std::string_view name2_view{name2};

    // Person 2 age
    int age2{getAge(name2_view)};

    // Say who is older
    // Assume ages are not equal
    bool older{age1 > age2};
    if (older) 
        std::cout << name1_view << " (age " << age1 << ") is older than " << name2_view << " (age " << age2 << ").\n"; 
    else
        std::cout << name2_view << " (age " << age2 << ") is older than " << name1_view << " (age " << age1 << ").\n";

    return 0;
}
