#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef SQUARE_H
#define SQUARE_H


#define INCORRECT_FIGURE  	-2
#define ARRAY_OVERSIZE  	-3
#define MEMORY_PROBLEM  	-1


struct figure_array
{
	struct square *a_square;
	int size;
	int current_number;
	bool *arr_bool;
};

struct point
{
	int x;
	int y;
};

struct square
{
	struct point vertex1;
	struct point vertex2;
	struct point vertex3;
	struct point vertex4;
};


struct figure_array *create_array(int n);

int add_element(struct figure_array *the_array, struct square *aa_square);

int insert_element_by_index(struct figure_array *the_array, struct square *aa_square, int index);

void print_arr(struct figure_array *the_array);

void remove_element(struct figure_array *the_array, int index);

void write_json(struct figure_array *the_array, FILE *txt);

void delete_array(struct figure_array *the_array);


#endif /* SQUARE_H */




