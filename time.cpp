#include <iostream>
#include <cstdlib>
 int main()
{
    int n;
    std::cout<<"Enter n -> ";
    std::cin>>n;
    std::cout<<"Minutes -> "<<n/60<<"\nHours -> "<<(n/60)/60;
    system("pause");
    return 0;
}
