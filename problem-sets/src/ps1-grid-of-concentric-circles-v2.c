#include <sketch.h>

float max(float a, float b)
{
    return a > b ? a : b;
}

float min(float a, float b)
{
    return a > b ? b : a;
}

void concentric_circles(float x, float y, float radius, int n)
{
    float r = radius / n;

    for (int i = 1; i <= n; i++)
    {
        draw_circle(x, y, i * r);
    }
}

void draw_shape(float x, float y, float size, int i, int j, int n)
{
    j = abs(n / 2 - j);
    i = abs(n / 2 - i);
    concentric_circles(x, y, size / 2, 1 + min(i, j));
}

void make_grid(int n)
{
    float dx = 600 / n;
    float dy = dx;

    float x0 = -300 + dx / 2;
    float y0 = -300 + dy / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            float x = x0 + i * dx;
            float y = y0 + j * dy;
            draw_shape(x, y, dx, i, j, n);
        }
    }
}

int main()
{
    make_grid(11);
    save_sketch("output.svg");
}
