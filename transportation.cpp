#include <iostream>

using namespace std;

int main() {

   string s1 ("Введите количество пассажиров на остановке:");
   string s2 ("Количество свободных мест в автобусе: ");
	
   
   int BusCapacity = 50;
   int Passengers;
	
   cout << s1 << endl;
   cin >> (Passengers);
   cout << s2 << BusCapacity - (Passengers % BusCapacity);

return 0;

}
