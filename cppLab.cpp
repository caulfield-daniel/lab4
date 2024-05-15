#include <iostream>
#include <vector>
#include "PointsLines.h"

int main() {
    // Создаем динамический массив указателей на объекты классов CLine
    std::vector<CLine*> shapes;

    // Создаем объекты разных классов и добавляем их в массив
    CColoredLine* line1 = new CColoredLine();
    line1->setStartPoint(0.0, 0.0);
    line1->setEndPoint(3.0, 3.0);
    line1->setColor("blue");
    line1->setStartPoint(1.0, 1.0); // Добавляем точку в линию
    line1->setEndPoint(2.0, 2.0);
    shapes.push_back(line1);

    CPolyLine* polyLine1 = new CPolyLine();
    polyLine1->setStartPoint(0.0, 0.0);
    polyLine1->setEndPoint(1.0, 1.0);
    polyLine1->addPoint(2.0, 2.0);
    polyLine1->addPoint(3.0, 2.0);
    shapes.push_back(polyLine1);

    // Отображаем координаты точек фигур массива
    for (auto shape : shapes) {
        shape->displayPoints();
    }

    // Очистка памяти и удаление динамически выделенных объектов
    for (auto shape : shapes) {
        delete shape;
    }

    return 0;
}
