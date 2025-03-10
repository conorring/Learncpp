# include<iostream>

int main()
{
    char a = 'a';
    int b = static_cast<int>(a)                                                     ;
    std::cout << b;

    char num = '0';
    int c = static_cast<int>(num);
    std::cout << c;
    
    return 0;
}
