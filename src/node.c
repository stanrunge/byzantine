#include "node.h"
#include <string.h>

void init_node(Node *node, int id, const char *ip, int port, int is_faulty)
{
    node->id = id;
    strncpy(node->ip, ip, sizeof(node->ip));
    node->port = port;
    node->is_faulty = is_faulty;
}