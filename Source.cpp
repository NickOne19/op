//Создать класс «автомобиль», имеющий марку (указатель на строку),
//число цилиндров двигателя, мощность. Определить конструкторы,
//деструктор и функцию печати. Создать public-производный класс –
//«грузовики», имеющий грузоподъемность и тип кузова. Определить
//конструкторы по умолчанию и с разным числом параметров,
//деструкторы, функцию печати. Определить функции переназначения
//марки и грузоподъемности.
#include <iostream>
#include <algorithm>
//
////Класс содержит одно поле целого типа от 1 до 7, обозначающее номер дня недели : Необходимо перегрузить постфиксный оператор ++, с помощью которого текущее значение
//увеличивается на 1, если оно меньше семи, а значение 7 сбрасывается до единицы.

//class Number
//{
//private:
//	int number;
//public:
//	Number(int _number = 1) : number(_number) {}
//
//	Number& operator++(int)
//	{
//		if (number < 7)
//			number++;
//		else if (number == 7)
//			number = 1;
//		return *this;
//	}
//};
//
//int main()
//{
//
//}
//
//






//
////Задан класс Dog(собака) с описанным в нем набором переменных : name(Имя) с типом
////String, height(Рост) с типом int, color(Цвет) с типом String
////Описать в классе три конструктора со следующим набором входных параметров :
////Имя
////Имя, рост
////Имя, рост, цвет.
//
//
//
////Задан класс Circle(Круг) с описанным в нем набором переменных : centerX, centerY
////(Координаты центра круга) с типом double, radius(Радиус круга) с типом double, color
////(Цвет) с типом int.
////Описать в классе три конструктора со следующими наборами входных параметров :
////● radius;
////● centerX, centerY, radius;
////● centerX, centerY, radius, color.
using namespace std;
class Circle {
	double centerX, centerY,radius;
	int color;
public:
	Circle(double _radius) {
		radius = _radius;
		centerX = 0.0;
		centerY = 0.0;
		color = 0;
	}
	Circle(double _centerX, double _centerY, double _radius) {
		centerX = _centerX;
		centerY = _centerY;
		radius = _radius;
		color = 0;
	}

	Circle(double _centerX, double _centerY, double _radius, int _color) {
		this->centerX = _centerX;
		this->centerY = _centerY;
		this->radius = _radius;
		this->color = _color;
		cout << "konstruktor " <<this  << endl;
	}

	// конструктор копирования

	Circle(const Circle& obj) {
		this->centerX = obj.centerX;
		this->centerY = obj.centerY;
		this->radius = obj.radius;
		this->color = obj.color;
		cout << "konstr copy" <<this <<endl;
	}
	//void print() {
	//	cout << centerX << "  " << centerY << "  " << radius << "  " << color << endl;
	//}

// перегрузка вывода
	//ostream& operator<<(ostream& out, Circle &c) {
	//	out << c.color;
	//	return out;
	//}

};
int main() {
Circle a(2, 1, 4);
//a.print();

Circle b(4, 52, 1, 4);
Circle c(b);
//b.print();
}













//class Dog {
//	string name;
//	int height;
//	string color;
//
//public:
//	Dog(string _name) {
//		name = _name;
//	}
//	Dog(string _name,int _height) {
//		name = _name;
//		height = _height;
//	}
//
//	Dog(string _name, int _height, string _color) {
//		name = _name;
//		height = _height;
//		color = _color;
//	}
//	void print() {
//		cout << name << " " << height << color;
//	}
//};
//
//int main()
//{
//	Dog a("aboba", 40);
//	a.print();
//
//}













//using namespace std;
//
//// Разделение по схеме Lomuto
//int partition(int a[], int start, int end)
//{
//    // Выбираем крайний правый элемент в качестве опорного элемента массива
//    int pivot = a[end];
//
//    // элементы, меньшие точки поворота, будут перемещены влево от `pIndex`
//    // элементы больше, чем точка поворота, будут сдвинуты вправо от `pIndex`
//    // равные элементы могут идти в любом направлении
//    int pIndex = start;
//
//    // каждый раз, когда мы находим элемент, меньший или равный опорному, `pIndex`
//    // увеличивается, и этот элемент будет помещен перед опорной точкой.
//    for (int i = start; i < end; i++)
//    {
//        if (a[i] <= pivot)
//        {
//            swap(a[i], a[pIndex]);
//            pIndex++;
//        }
//    }
//
//    // поменять местами `pIndex` с пивотом
//    swap(a[pIndex], a[end]);
//
//    // вернуть `pIndex` (индекс опорного элемента)
//    return pIndex;
//}
//
//// Процедура быстрой сортировки
//void quicksort(int a[], int start, int end)
//{
//    // базовое условие
//    if (start >= end) {
//        return;
//    }
//
//    // переставить элементы по оси
//    int pivot = partition(a, start, end);
//
//    // повторяем подмассив, содержащий элементы, меньшие опорной точки
//    quicksort(a, start, pivot - 1);
//
//    // повторяем подмассив, содержащий элементы, превышающие точку опоры
//    quicksort(a, pivot + 1, end);
//}
//
//// C++ реализация алгоритма быстрой сортировки
//int main()
//{
//    int a[] = { 9, -3, 5, 2, 6, 8, -6, 1, 3 };
//    int n = sizeof(a) / sizeof(a[0]);
//
//    quicksort(a, 0, n - 1);
//
//    // печатаем отсортированный массив
//    for (int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//
//    return 0;
//}
//
//
//
//
//
//













//
//class Car
//{
//public:
//	string model;
//	int cylinder;
//	int power;
//
//	Car(string _model, int _cylinder, int _power)
//	{
//		model = _model;
//		cylinder = _cylinder;
//		power = _power;
//	}
//	~Car() 
//	{
//		cout << "Destrucktor";
//	}
//
//};
//class Truck : public Car
//{
//
//};
//
//int main()
//{
//	Truck truck;
//	
//}





















//class Car 
//{
//public:
//	string model;
//	int max_speed = 0;
//	float time = 0; // 0 - 100;
//	Car(string m,int max,float t) {
//		 model = m; max_speed = max; time = t;
//	}
//	virtual void Gas()
//	{
//		cout << " GAS" << endl;
//	}
//	void print() {
//		cout << model << "  " << max_speed << "  " << time << endl;
//	}
//
//};
//
//class Truck::Car
//{
//public:
//	void 
//};
//
//
//int main()
//{
//	Car BMW("BMW", 240, 6);
//	//BMW.model = "BMW";
//	//BMW.max_speed = 240;
//	//BMW.time = 6;
//	BMW.print();
//
//	//Car MB(m,max,t);
//	////Car N;
//	////cin >> N.model;
//	////cin >> N.max_speed;
//	////cin >> N.time;
//	//N.print();
//
//
//
//}
////class Car {
////public:
////	string model;
////	int max_speed = 0;
////	float time = 0; // 0 - 100;
////	void print() {
////		cout << model << "  " << max_speed << "  " << time << endl;
////	}
////
////};
////
////
////int main() 
////{
////	Car BMW;
////	BMW.model = "BMW";
////	BMW.max_speed = 240;
////	BMW.time = 6;
////	BMW.print();
////
////	Car N;
////	cin >> N.model;
////	cin >> N.max_speed;
////	cin >> N.time;
////	N.print();
////
////	
////
////}

