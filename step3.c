/*
** EPITECH PROJECT, 2018
** step01
** File description:
** CPool_rush2_2018 task01
*/

#include <unistd.h>
#include "./include/my.h"

int my_put_float(float t);

float total_nbr(char **argv)
{
    int i = 0;
    int nbr = 0;

    while (argv[1][i] != '\0')
    {
        if (('A' <= argv[1][i] && argv[1][i] <= 'Z') || ('a' <= argv[1][i] && argv[1][i] <= 'z'))
            nbr++;
        i++;
    }
    return (nbr);
}

void affichage(int j, int word_nbr, char **argv, float freq)
{
    my_putchar(argv[j][0]);
    my_putchar(':');
    my_put_nbr(word_nbr);
    my_putstr(" (");
    my_put_float(freq);
    my_putstr("%)");
    my_putchar('\n');
}

int my_word(char word)
{
    if (('A' <= word && word <= 'Z') || ('a' <= word && word <= 'z'))
        return (1);
    else {
        return (0);
    }
}

int step2(int argc, char **argv)
{
    int i = 0;
    int j = 2;
    float word_nbr = 0;
    float freq;
    
    while (j < argc) {
        if (my_word(argv[j][0]) == 1) {
            while (argv[1][i] != '\0') {
                if (argv[1][i] == argv[j][0] || argv[1][i] == argv[j][0] + 32 || argv[1][i] == argv[j][0] - 32)
                    word_nbr++;
            i++;
            }
        freq = word_nbr * 100 / total_nbr(argv);
        affichage(j, word_nbr, argv, freq);
        }
        word_nbr = 0;
        i = 0;
        j++;
    }
}

int main(int argc, char **argv)
{
    step2(argc, argv);
    return (0);
}
