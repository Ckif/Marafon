#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents) {
     t_agent **buff = *agents;

    for (int i = 0; buff[i]; i++) {
        printf("!\n");
        free(buff[i]->name);
        free(buff[i]);
    }
    //free(buff);
    printf("test\n");
    free(*agents);
    // buff = NULL;
    *agents = NULL;
}
