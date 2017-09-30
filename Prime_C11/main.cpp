#include <iostream>
#include <vector>
#include <algorithm>

unsigned a, b, n;
std::vector<int> vec;

void DatiDate()
{
    std::cout<<"Dati de unde sa incepem: ";
    std::cin>>a;


    std::cout<<std::endl<<"Dati pana unde sa afisam: ";
    std::cin>>b;

    if(a < 0 || b < 0)
    {
        std::cout<<"\n\nNU SE ADMIT NUMERELE NEGATIVE!";
        exit(0);
    }

    if(a > b)
    {
        int aux = a;
        a = b;
        b= aux;
    }
}

void detNrPrime()
{
    bool isPrim;
    for(int i = a; i <= b; i++)
    {
        isPrim = true;
        for(int j = 2; j <= i/2; j++)
            if(i%j == 0) isPrim = false;

        if(isPrim)
        {
            if(i > 1) vec.push_back(i);
        }
    }
}

void Afisare()
{
    std::cout<<std::endl<<"Numerele prime de la "<<a<<" pana la "<<b<<" sunt: \n";

    for(int i : vec)
    {
        std::cout<<i<<" ";
    }
}

int main()
{
    DatiDate();
    detNrPrime();
    Afisare();
    return 0;
}
