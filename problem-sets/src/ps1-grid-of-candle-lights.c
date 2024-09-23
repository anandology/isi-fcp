#include <sketch.h>

void bottom_circle(float x, float y, float r)
{
    draw_circle(x, y + r, r);
}

void candle_lights(float x, float y, float r)
{
    float bx = x;
    float by = y - r;

    bottom_circle(bx, by, r / 3);
    bottom_circle(bx, by, 2 * r / 3);
    bottom_circle(bx, by, r);
}

void draw_shape(float x, float y, float size)
{
    candle_lights(x, y, size / 2);
}

void make_grid(int n)
{
    float dx = 600 / n;
    float dy = dx;

    float x0 = -300 + dx / 2;
    float y0 = -300 + dy / 2;

    for (float x = x0; x < 300; x += dx)
    {
        for (float y = y0; y < 300; y += dy)
        {
            draw_shape(x, y, dx);
        }
    }
}

int main()
{

    set_stroke("#aaa");
    draw_line(0, -300, 0, 300);
    draw_line(-300, 0, 300, 0);

    set_stroke("black");
    make_grid(6);

    save_sketch("output.svg");
}