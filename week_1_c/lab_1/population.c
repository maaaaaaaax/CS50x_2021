#include <cs50.h>
#include <stdio.h>

// Complete the implementation of population.c, such that it calculates the number of years required for the population to grow from the start size to the end size.

// Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

// For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.

// To try another example, if we were to start with n = 1000 llamas, at the end of the year, we would have 1000 / 3 = 333.33 new llamas. We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get 333 new llamas born. 1000 / 4 = 250 llamas will pass away, so we’ll end up with a total of 1000 + 333 - 250 = 1083 llamas at the end of the year.

int main(void)
{
    // Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);

    // Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    // Calculate number of years until we reach threshold
    int years = 0;

    while (start_size < end_size)
    {
        int new_llamas_born = start_size / 3;
        int llamas_passed_away = start_size / 4;
        start_size = start_size + new_llamas_born - llamas_passed_away;
        years++;
    }

    // Print number of years
    printf("Years: %i\n", years);

}