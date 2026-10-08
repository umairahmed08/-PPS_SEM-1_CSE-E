#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* readline();

int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    if (n == 1) {
        printf("one\n");
    }
    else if (n == 2) {
        printf("two\n");
    }
    else if (n == 3) {
        printf("three\n");
    }
    else if (n == 4) {
        printf("four\n");
    }
    else if (n == 5) {
        printf("five\n");
    }
    else if (n == 6) {
        printf("six\n");
    }
    else if (n == 7) {
        printf("seven\n");
    }
    else if (n == 8) {
        printf("eight\n");
    }
    else if (n == 9) {
        printf("nine\n");
    }
    else {
        printf("Greater than 9\n");
    }

    free(n_str);

    return 0;
}

char* readline()
{
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    if (data == NULL) {
        exit(EXIT_FAILURE);
    }

    while (true)
    {
        char* cursor = data + data_length;

        if (fgets(cursor, alloc_length - data_length, stdin) == NULL) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length > 0 && data[data_length - 1] == '\n') {
            data[data_length - 1] = '\0';
            break;
        }

        if (data_length < alloc_length - 1) {
            break;
        }

        alloc_length *= 2;

        char* new_data = realloc(data, alloc_length);

        if (new_data == NULL) {
            free(data);
            exit(EXIT_FAILURE);
        }

        data = new_data;
    }

    return data;
}
