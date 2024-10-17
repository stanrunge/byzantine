#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "node.h"
#include <string.h>

#define NUM_NODES 100

Node nodes_list[NUM_NODES];

void initialize_nodes()
{
}

void show_intro()
{
    printf("-----------------------------------------\n\n");
    printf(" THE DISTRIBUTOR (Written by Stan Runge)\n\n");
    printf("-----------------------------------------\n\n");
}

char *get_command(char *command)
{
    printf("Available commands:\n\n");

    printf("add - Add a new node\n");
    printf("kill - Kill a random node\n");
    printf("list - List all nodes\n");
    // printf("exit - Exit the program\n");
    printf("job - Start a new job\n");

    printf("\n");
    printf("Enter a command: ");

    scanf("%s", command);

    return command;
}

void add_node()
{
    return;
}

void kill_random_node()
{
    return;
}

void list_nodes()
{
    return;
}

void start_job()
{
    return;
}

void run_command(char *command)
{
    if (strcmp(command, "add") == 0)
    {
        return add_node();
    }

    if (strcmp(command, "kill") == 0)
    {
        return kill_random_node();
    }

    if (strcmp(command, "list") == 0)
    {
        return list_nodes();
    }

    if (strcmp(command, "job") == 0)
    {
        return start_job();
    }

    printf("Invalid command\n");

    return;
}

int main()
{

    initialize_nodes();

    show_intro();

    char command[10];
    get_command(command);

    return 0;
}