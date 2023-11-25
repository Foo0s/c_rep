#include <iostream>
#include "List.cpp"

using namespace std;


int main() {
	setlocale(LC_ALL, "ru");

	List new_list(4);

	new_list.show_array();

	new_list.operator+=(4);

	new_list.show_array();
}
