#include <sketch.h>
#include <math.h>

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

void connect(int i, int j)
{
    i = i % N;
    j = j % N;
    draw_line(X[i], Y[i], X[j], Y[j]);
}

int main()
{
    make_circle(250);

    connect(0, 4);
    connect(1, 5);

    save_sketch("lesson2.svg");
}
