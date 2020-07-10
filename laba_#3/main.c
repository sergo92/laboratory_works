#include <stdio.h>
#include "square.h"
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
	const int number_of_figure = 5;
	
	struct square a_square;
	
	a_square.vertex1.x = 0;
	a_square.vertex1.y = 0;
	
	a_square.vertex2.x = 0;
	a_square.vertex2.y = 2;
	
	a_square.vertex3.x = 2;
	a_square.vertex3.y = 2;
	
	a_square.vertex4.x = 2;
	a_square.vertex4.y = 0;
	
	
	
	struct figure_array *array = create_array(number_of_figure);
	
	add_element(array, &a_square);
	
	add_element(array, &a_square);
	
	add_element(array, &a_square);
	
	insert_element(array, &a_square, 3);
	
	remove_element(array, 2);

	print_arr(array);
	
	write_json(array);
	
	delete_array(array);
	
	
	
}
