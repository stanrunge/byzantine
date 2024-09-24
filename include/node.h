#ifndef NODE_H
#define NODE_H

#include <pthread.h>

typedef struct
{
    int id;
    char ip[16];
    int port;
    int is_faulty;
    pthread_t thread;
} Node;

void init_node(Node *node, int id, const char *ip, int port, int is_faulty);

#endif