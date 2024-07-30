#include <sketch.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define N 36

float X[N];
float Y[N];

// initialze the X and Y for N points
// on circle of radius r
void make_circle(float r)
{
    for (int i = 0; i < N; i++)
    {
        float theta = 2 * M_PI / N * i;
        X[i] = r * cos(theta);
        Y[i] = r * sin(theta);
        draw_circle(X[i], Y[i], 2);
    }
}

int main()
{
    make_circle(250);

    save_sketch("lesson2.svg");
}
