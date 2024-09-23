#include <sketch.h>

void row_of_circles(float x, float y, float r, int n)
{
    float w = 2 * r * n;
    float x0 = x - w / 2 + r;

    for (int i = 0; i < n; i++)
    {
        draw_circle(x0 + i * 2 * r, y, r);
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