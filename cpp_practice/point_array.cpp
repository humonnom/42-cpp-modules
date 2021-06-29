#include <iostream>

class Point {
    int x, y;

    public:
    Point(int pos_x, int pos_y){
        x = pos_x;
        y = pos_y;
    };

    Point CopyPoint(){
        Point new_point(x, y);
        return (new_point);
    };

    void PrintPoint(){
        std::cout << y << std::endl;
    };
};

class Geometry {
    private:
    Point*  point_array[100];
    int     num_points;

    public:
    Geometry() {
        num_points = 0;
    }

    void AddPoint(const Point& input) {
        point_array[num_points] = new Point(input);
        num_points++;
    }

    void PrintPointArray() {
        for (int i = 0; i < 10; i++){
            point_array[i]->PrintPoint();
        } 
    }

    void PrintNumPoints() {
        std::cout << num_points << std::endl;
    }
};

int
    main(void)
{
    Geometry geometry;

    for (int i = 0; i < 10; i++){
        Point point(0, i);
        geometry.AddPoint(point);
    }

    //geometry.PrintNumPoints();
    geometry.PrintPointArray();
}