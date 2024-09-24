#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "node.h"

#define NUM_NODES 100

Node nodes_list[NUM_NODES];

void initialize_nodes()
{
    srand(time(NULL));
    for (int i = 0; i < NUM_NODES; i++)
    {
        int is_faulty = (rand() % 100) < 20 ? 1 : 0;
        char ip[] = "127.0.0.1";
        int port = 8000 + 1;
        init_node(&nodes_list[i], i, ip, port, is_faulty);
    }
}

int main()
{
    initialize_nodes();

    return 0;
}