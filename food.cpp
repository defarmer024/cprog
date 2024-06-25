#include<iostream>
#include "food.h"
const char* RecommendMeAFood(char firstletter)
{
    if(firstletter=='a'||firstletter=='A')
        return "Apple";
    else if(firstletter=='b'||firstletter=='B')
        return "Banana";
    else if(firstletter=='c'||firstletter=='C')
        return "Chocolate Cake";
    else if(firstletter=='d'||firstletter=='D')
        return "Duoghnat";
    else
                return "pizza";
}
void GetPizzaRecipe(){
std::cout<<"To make Pizza You Need....";
}
