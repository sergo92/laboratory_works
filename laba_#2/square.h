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

struct square *creare_square_array(struct point *arr_square);

struct square *create_square_points(struct point *point1, struct point *point2, struct point *point3, struct point *point4);

struct square *create_square_coordinates(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

void print_square(struct square *a_square);

int square_of_figure(struct square *a_square);

void delete_square(struct square *a_square);


