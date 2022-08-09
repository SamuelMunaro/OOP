#include <iostream>
#include <string>

extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main() {

    std::string courses[4] = {"math", "chemistry", "physics", "english"};
    int nstudents = 6;
    std::string students[6] = {"samuel", "thomas", "joshua", "peter", "mia", "georgia"};
    int report_card[6][4] = {{95, 80, 45, 56}, {87, 76, 57, 90}, {87, 87, 90, 97}, {90, 87, 92, 91}, {100, 90, 40, 58}, {88, 88, 88, 19}};

    print_class(courses, students, report_card, nstudents);

    return 0;
}