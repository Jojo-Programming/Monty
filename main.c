#include "monty.h"
/**
* main - a monty code interpreter
* @argc: the number of arguments
* @argv: the monty file location
* Return: 0 on success
*/

bus_t bus;

int main(int argc, char *argv[])

{

if (argc != 2)

{

fprintf(stderr, "Usage: monty file\n");
exit(EXIT_FAILURE);

}

bus.file = fopen(argv[1], "r");
if (bus.file == NULL)

{

fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);

}

bus.arg = NULL;
bus.content = NULL;
bus.lifi = 0;

execute(NULL, NULL, 0, bus.file);

fclose(bus.file);

return EXIT_SUCCESS;

}
