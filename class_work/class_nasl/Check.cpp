#include "Buy.h"
#include <iomanip>

using namespace std;

class Check : public Buy {
	public:
		void printProductInfo() {
			cout << "Товар: " << Product::getName() << " | " << "Цена: " << getPrice()  << " | " << "Вес: " << getWeight() << endl;
		}

		void printBuyInfo() {
			cout << "Товара куплено: " << getCount_Tovar() << " | " << "Сумма на которую был куплен товар: " << getCount_To_Price_Tovar() << " | " << "Общий вес купленного товара: " << getWeight_Tovar();
		}

		void printAllInfo() {
			cout << setw(10) << getName() << setw(15) << getPrice() << setw(15) << getWeight() << setw(15) << getCount_Tovar() << setw(20) << getCount_To_Price_Tovar() << setw(17) << getWeight_Tovar() << endl;
		}
};		
