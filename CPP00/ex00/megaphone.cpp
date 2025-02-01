/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:39:30 by beyildiz          #+#    #+#             */
/*   Updated: 2024/12/10 15:30:09 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **ag)
{
    int     i;
    int     j;
    char    c;

    i = 0;
    j = 0;
    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (ag[++i])
        {
            j = -1;
            while (ag[i][++j])
            {
                c = toupper(ag[i][j]);
                std::cout<<c;
            }
        }
    }
    std::cout<<std::endl;
    return (0);
}
