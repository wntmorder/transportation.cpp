# transportation.cpp
Программа для автобусной службы

#include (iostream);

using namespace std; 

 setlocal (LC_ALL, 'Russian')

int main () {
	
    int x=50;
	int y;
	cout << ('Колличество посажиров на остановке: ');
	cin >> (y);
	cout<<('Колличество свободных мест в автобусе: ') <<x-(y%x);
	
	return 0;
}

//Перевозка 
Вы создаете программу для автобусной службы. Автобус может перевозить 50 пассажиров за один раз. Вам дано количество пассажиров, ожидающих на автобусной станции. Посчитайте и выведите, сколько будет свободных мест в последнем автобусе. 
Пример Входных Данных: 126 
Пример Выходных Данных: 24
