# include<iostream>

bool isDiv3( int x ) {
    return( x%3 == 0 );
}

bool isDiv5( int x ) {
    return( x%5 == 0 );
}

void fizzbuzz( int x ) {
    bool isdiv5;
    for( int i{1}; i <= x; ++i ) {
        isdiv5 = isDiv5(i);
        if( isDiv3(i) ){
            if( isdiv5 ) 
                std::cout << "fizzbuzz\n";
            else
                std::cout << "fizz\n";
        }
        else if( isdiv5 )
            std::cout << "buzz\n";
        else
            std::cout << i << '\n';
    }
}

int main() {

    std::cout << "Please enter a positive integer:"; 
    int x{};
    std::cin >> x;
    fizzbuzz(x);
    
    return 0;
}
