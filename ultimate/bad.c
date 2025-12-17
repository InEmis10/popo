#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} point;

typedef struct {
    point *a;
    point *b;
} segment;

point *create_point(double x, double y)
{
    point *p = malloc(sizeof(point));

    p->x = x;
    p->y = y;
    return p;
}

segment *segment_new(point *a, point *b)
{
    segment *s = malloc(sizeof(segment));

    s->a = a;
    s->b = b;
    return s;
}

double length(segment *s)
{
    double dx = s->b->x - s->a->x;
    double dy = s->b->y - s->a->y;

    return sqrt(dx * dx + dy * dy);
}

void print_segment(segment *s)
{
    printf("Segment[(%f,%f) -> (%f,%f)] len=%f\n",
           s->a->x, s->a->y,
           s->b->x, s->b->y,
           length(s));
}

int main()
{
    point *pa = create_point(0.0, 0.0);
    point *pb = create_point(3.0, 4.0);
    segment *s = segment_new(pa, pb);

    print_segment(s);

    /* double free / leaks: who owns what is unclear */
    free(pa);
    free(pb);
    free(s);
    free(s->a);

    return 0;
}

