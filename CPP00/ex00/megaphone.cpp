#include <iostream>

int main(int ac, char **av)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    if (ac < 2)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (av[++i])
    {
        j = -1;
        while (av[i][++j])
            std::cout<<(char)std::toupper(av[i][j]);
        if (av[i + 1])
            std::cout<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
