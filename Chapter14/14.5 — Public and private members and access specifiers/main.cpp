
#include <iostream>

class Point3d {
private:
    int m_x{};
    int m_y{};
    int m_z{};
public:
    void setValues(int point1, int point2, int point3) {
        m_x = point1;
        m_y = point2;
        m_z = point3;
    }
    void print() const {
        std::cout << '<' << m_x << ", "  << m_y << ", " << m_z << '>' << std::endl;
    }
    bool isEqual(Point3d& point)const {
        return (m_x == point.m_x) && (m_y == point.m_y) && (m_z == point.m_z);
    }
};


int main()
{
    Point3d point;
    point.setValues(1, 2, 3);
    point.print();
    return EXIT_SUCCESS;
}
