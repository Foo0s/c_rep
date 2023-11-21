#pragma once
#include <iostream>

using namespace std;

class List {
	private:
		int size_list;
		int* list = new int[size_list];
		bool invert = false;
	public:
		List(int size_list);
		List(int *arr);

		void set_size_list(int size);

		int get_size_list();

		void inverse_list();

		int find_unlist(int arr[], int size);

		void show_list();
};
