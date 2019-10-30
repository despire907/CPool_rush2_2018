/*
** EPITECH PROJECT, 2018
** task04
** File description:
** task04
*/

#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        write(1, "-", 1);
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}

int my_word(char word)
{
    if (('A' <= word && word <= 'Z') || ('a' <= word && word <= 'z'))
        return (1);
    else
        return (0);
}

int step1(int argc, char **argv)
{
    int i = 0;
    int p = 0;
    int j = 2;

    while (j < argc) {
        if (my_word(argv[j][0]) == 1) {
            p = 0;
            i = 0;
            while (argv[1][i] != '\0') {
                if (argv[1][i] == argv[j][0] || argv[1][i] == argv[j][0] + 32 ||
                    argv[1][i] == argv[j][0] - 32)
                    p++;
                i++;
    	    }
            my_putchar(argv[j][0]);
            my_putchar(':');
            my_put_nbr(p);
            my_putchar('\n');
            j++;
        }
    }
}
    
int main(int argc, char **argv)
{
    step1(argc, argv);
    return (0);
}
