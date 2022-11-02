/*Задание 5. Координатные оси
Что нужно сделать
Модифицируйте пример с координатными осями так, чтобы в точке их пересечения рисовался знак « + », на верхнем конце вертикальной оси была стрелка вверх «^ », а на правом конце горизонтальной оси — стрелка вправо « > ».
Это сделает рисунок более красивым и точным.

Пример выполнения


Рекомендации по выполнению
Заметьте, что в центре координатных осей есть пересечение.

Что оценивается
Координатные оси рисуются с помощью условных конструкций и циклов.*/

#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//Залаём ширину и высоту координатной плоскости
	int widthCoordinatePlane = 20;
	int heightCoordinatePlane = 20;

	for (int y = 1; y <= heightCoordinatePlane; y++) {
		for (int x = 1; x <= widthCoordinatePlane; x++) {
			if ((x == widthCoordinatePlane / 2) && (y == 1)) std::cout << "^";
			else if (x == widthCoordinatePlane / 2) std::cout << "|";
			else if ((y == heightCoordinatePlane / 2) && (x == widthCoordinatePlane)) std::cout << ">";
			else if ((y == heightCoordinatePlane / 2) && (x == widthCoordinatePlane / 2)) std::cout << "+";
			else if (y == heightCoordinatePlane / 2) std::cout << "-";
			else std::cout << " ";
		}
		std::cout << std::endl;
	}
}

