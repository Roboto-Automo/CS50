#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int e;
    int years = 0;
    do
    {
        n = get_int("Enter Population Start Size: ");
    } while (n < 9);
    
    do
    {
        e = get_int("Enter Population End Size: ");
    } while (e < n);
while (n < e){
    n = n + (n / 3) - (n / 4);
    years++;
}
    printf("Years: %i\n", years);
}
