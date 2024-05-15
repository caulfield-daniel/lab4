#include <iostream>
#include <string>
#include <vector>

// ������� ����� ��� �����
class CPoint {
protected:
    double x;
    double y;
public:
    // ����� ��� ��������� ��������� �����
    void setCoordinates(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    // ����� ��� ������ ��������� �����
    void getCoordinates() {
        std::cout << "Coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};

// ����� ��� ������� �����, ����������� �� CPoint
class CColoredPoint : public CPoint {
private:
    std::string color;
public:
    // ����� ��� ��������� ����� �����
    void setColor(std::string newColor) {
        color = newColor;
    }

    // ����� ��� ��������� ����� �����
    std::string getColor() {
        return color;
    }
};

// ����� ��� �����
class CLine {
protected:
    CPoint startPoint;
    CPoint endPoint;
    std::vector<CPoint> points;

public:
    // ����� ��� ��������� ��������� ����� �����
    void setStartPoint(double xVal, double yVal) {
        startPoint.setCoordinates(xVal, yVal);
    }

    // ����� ��� ��������� �������� ����� �����
    void setEndPoint(double xVal, double yVal) {
        endPoint.setCoordinates(xVal, yVal);
    }

    // ����� ��� ������ ���� �����
    void displayPoints() {
        std::cout << "Points:" << std::endl;
        for (auto& point : points) {
            point.getCoordinates();
        }
    }
};

// ����� ��� ������� �����, ����������� �� CLine
class CColoredLine : public CLine {
private:
    std::string color;

public:
    // ����� ��� ��������� ����� �����
    void setColor(std::string newColor) {
        color = newColor;
    }

    // ����� ��� ��������� ����� �����
    std::string getColor() {
        return color;
    }
};

// ����� ��� ���������, ����������� �� CLine
class CPolyLine : public CLine {
private:
    std::vector<CPoint> points;
public:
    // ����� ��� ���������� ����� ����� � �������������
    void addPoint(double xVal, double yVal) {
        CPoint newPoint;
        newPoint.setCoordinates(xVal, yVal);
        points.push_back(newPoint);
    }

};

