#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength){
    int len = 0;
    t_agent **one = NULL;
    int i = 0;
    int len1 = 0;

    while (agents[len1]){
        len1++;
    }
    one = (t_agent **)malloc(sizeof(t_agent)*len1);
    while (agents[len]) {
        if(mx_strcmp("Smith",agents[len]->name) == 0){
            if(agents[len]->strength < strength){
                one[i] = agents[len];
                i++;
            }
        }
        len++;
    }
    mx_exterminate_agents(&agents);
    return one;
}

// int main(){
//     t_agent **arrA = NULL;
//     arrA = (t_agent **)malloc(sizeof(t_agent)*5);
//     arrA[0] = mx_create_agent("Smith", 150, 166);
//     arrA[1] = mx_create_agent("Brown", 147, 157);
//     arrA[2] = mx_create_agent("Smith", 151, 165);
//     arrA[3] = mx_create_agent("Smith", 123, 321);
//     arrA[4] = NULL;
//     mx_only_smiths(arrA, 100); //returns array with 1 elemen
//     // if (one[0])
//     // printf("%d",one[0]->strength);
//     system("leaks -q a.out");
// }

