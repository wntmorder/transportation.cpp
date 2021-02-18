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
