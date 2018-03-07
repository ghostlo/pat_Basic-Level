#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    int i=0;
    std::cin >> n;
    while(n!=1)
    {
        if(n%2==1)
        {
            n=(3*n+1)/2;
            i++;
        }
        else
        {
            n=n/2;
            i++;
        }
    }
    std::cout<<i;
}
