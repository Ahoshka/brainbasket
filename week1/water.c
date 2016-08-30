#include <cs50.h>
#include <stdio.h>

int getBottles(int time)
{
    return (time * 12);
}

int main(void)
{
    printf("Сколько времени вы принимали душ? (в минутах)\n");
    int time = GetInt();
    
    int bottles = getBottles(time);
    printf("Минут в душе: %i\nИспользовано бутылок: %i\n", time, bottles);
}