#include <iostream>
#include <string.h>

using namespace std;

void show_people(const struct First &obj_p);

struct Second{char prof[50];};

struct First{
    int age;
    int height;
    int weight;
    char name[32];
    Second work;
};

int main()
{
    First people = {};
    people.age = 18;
    people.height = 180;
    people.weight = 80;
    strcpy(people.name, "Андрей");
    strcpy(people.work.prof, "Программист");
    show_people(people);
    
    return 0;
}

void show_people(const struct First &obj_p) {
    cout << obj_p.age << endl;
    cout << obj_p.height << endl;
    cout << obj_p.weight << endl;
    cout << obj_p.name << endl;
    cout << obj_p.work.prof << endl;
}
