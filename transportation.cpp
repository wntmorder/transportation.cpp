#include <iostream>

using namespace std;

int main() {
   
   int BusCapacity = 50;
   int Passengers;

   cin >> (Passengers);
   cout << BusCapacity - (Passengers % BusCapacity);

return 0;
}
