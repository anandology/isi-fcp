#include <sketch.h>

void bottle_circle(float bx, float by, float r)
{
    float cx = bx;
    float cy = by + r;

    draw_circle(cx, cy, r);
}

void draw_candle_light(float x, float y, float r)
{
    bottle_circle(x, y, r / 3);
    bottle_circle(x, y, 2 * r / 3);
    bottle_circle(x, y, r);
}

int main()
{
    draw_candle_light(-100, 0, 100);
    draw_candle_light(100, 0, 100);

    save_sketch("lesson2.svg");
}