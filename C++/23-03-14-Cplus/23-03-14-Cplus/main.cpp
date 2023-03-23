#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y)
    {  }
    void ShowPosition() const
    {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }
    Point operator+(const Point& ref)    //operator+라는 이름의 함수
    {
        Point pos(xpos + ref.xpos, ypos + ref.ypos);
        return pos;
    }
    Point operator-(const Point& ref)    //operator+라는 이름의 함수
    {
        Point pos(xpos - ref.xpos, ypos - ref.ypos);
        return pos;
    }
    friend Point operator*(const Point& pos1, const Point& pos2);

    Point& operator++() //전위증가
    {
        xpos += 1;
        ypos += 1;
        return *this;
    }
    friend Point& operator--(Point& ref);

    const Point operator++(int)
    {
        const Point retobj(xpos, ypos); 
        xpos += 1;
        ypos += 1;
        return retobj;

    }

    friend Point& operator--(Point& ref); //전위 감소
    friend const Point operator--(Point& ref, int);
                  //후위 감소



    Point operator*(int times)
    {
        Point pos(xpos * times, ypos * times);
        return pos;

    }
    friend Point operator*(int times, Point& ref);
};

Point operator*(int times, Point& ref)
{
    return ref * times;
}

Point& operator--(Point& ref)
{
    ref.xpos -= 1;
    ref.ypos -= 1;
    return ref;
}

Point operator*(const Point& pos1, const Point& pos2)
{
    Point pos(pos1.xpos * pos2.xpos, pos1.ypos * pos2.ypos);
    return pos;
}

const Point operator--(Point& ref, int)
{
    const Point retobj(ref);
    ref.xpos -= 1;
    ref.ypos -= 1;
    return retobj;
}




int main(void)
{
    Point pos(1, 2);
    Point cpy;

    cpy = pos * 3;
    cpy = pos.operator*(3);
    cpy = 3 * pos;
    cpy = operator*(3, pos);
    cpy.ShowPosition();


    cpy = 2 * pos * 3;
    cpy.ShowPosition();
    return 0;

   /* Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos1 + pos2;
    Point pos4 = pos1 - pos2;
    Point pos5 = operator*(pos1, pos2);
    Point pos6 = pos1 * pos2;
    ++pos1;
    pos1.ShowPosition();
    --pos1;
    pos1.ShowPosition();
    ++(++pos1);
    pos1.ShowPosition();
    
    --(--pos1);
    pos1.ShowPosition();

    pos2.ShowPosition();
    pos3.ShowPosition();
    pos4.ShowPosition();
    pos4.ShowPosition();*/
    return 0;
}