#include <iostream>
#include <string>
#include <vector>

// Базовый класс для точки
class CPoint {
protected:
    double x;
    double y;
public:
    // Метод для установки координат точки
    void setCoordinates(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    // Метод для вывода координат точки
    void getCoordinates() {
        std::cout << "Coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};

// Класс для цветной точки, наследуется от CPoint
class CColoredPoint : public CPoint {
private:
    std::string color;
public:
    // Метод для установки цвета точки
    void setColor(std::string newColor) {
        color = newColor;
    }

    // Метод для получения цвета точки
    std::string getColor() {
        return color;
    }
};

// Класс для линии
class CLine {
protected:
    CPoint startPoint;
    CPoint endPoint;
    std::vector<CPoint> points;

public:
    // Метод для установки начальной точки линии
    void setStartPoint(double xVal, double yVal) {
        startPoint.setCoordinates(xVal, yVal);
    }

    // Метод для установки конечной точки линии
    void setEndPoint(double xVal, double yVal) {
        endPoint.setCoordinates(xVal, yVal);
    }

    // Метод для вывода всех точек
    void displayPoints() {
        std::cout << "Points:" << std::endl;
        for (auto& point : points) {
            point.getCoordinates();
        }
    }
};

// Класс для цветной линии, наследуется от CLine
class CColoredLine : public CLine {
private:
    std::string color;

public:
    // Метод для установки цвета линии
    void setColor(std::string newColor) {
        color = newColor;
    }

    // Метод для получения цвета линии
    std::string getColor() {
        return color;
    }
};

// Класс для полилинии, наследуется от CLine
class CPolyLine : public CLine {
private:
    std::vector<CPoint> points;
public:
    // Метод для добавления новой точки в многоугольник
    void addPoint(double xVal, double yVal) {
        CPoint newPoint;
        newPoint.setCoordinates(xVal, yVal);
        points.push_back(newPoint);
    }

};

