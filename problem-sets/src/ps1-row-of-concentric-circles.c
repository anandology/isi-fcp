#include <sketch.h>

void concentric_circles(float x, float y, float r, int n)
{
    float dr = r / n;
    for (int i = 1; i <= n; i++)
    {
        draw_circle(x, y, dr * i);
    }
}

void row_of_circles(float x, float y, float r, int n)
{
    float w = 2 * r * n;
    float x0 = x - w / 2 + r;

    for (int i = 0; i < n; i++)
    {
        concentric_circles(x0 + i * 2 * r, y, r, i + 1);
    }
}

int main()
{
    row_of_circles(0, 0, 50, 5);

    set_stroke("#aaa");
    draw_line(0, -300, 0, 300);
    draw_line(-300, 0, 300, 0);

    save_sketch("output.svg");
}