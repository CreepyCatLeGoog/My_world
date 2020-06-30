/*
** EPITECH PROJECT, 2019
** MUL_my_world_2019
** File description:
** file_handling.c
*/

#include "../../include/basic.h"
#include <stdio.h>

char **map_parser(world_t *world)
{
    int i = 0;
    int j = 0;
    char **charmap = malloc(sizeof(char *) * 4069);

    while (world->tab[i]) {
        charmap[i] = malloc(sizeof(char) * 4096);
        while(world->tab[i][j])
            charmap[i][j] = my_itos((int)world->tab[i][j]);
        i += 1;
    }
    return(charmap);
}

void file_writer(world_t *world, char *path)
{
   FILE *fp = fopen (path ,"w");
   char **charmap = map_parser(world);

    printf("k");
   for(int i = 0; i < my_strlen(charmap[i]) ; i += 1) {
        fwrite(charmap[i], 1, my_strlen(charmap[i]), fp);
    }
    fclose (fp);
}