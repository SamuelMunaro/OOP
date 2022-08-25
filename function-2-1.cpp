#include <iostream>
#include <string>

std::string month_lookup(int month) {

    std::string out; 

    switch (month){
        case 1:
        out = "Jan";
        break;
        case 2:
        out = "Feb";
        break;
        case 3:
        out = "Mar";
        break;
        case 4:
        out = "Apr";
        break;
        case 5:
        out = "May";
        break;
        case 6:
        out = "Jun";
        break;
        case 7:
        out = "Jul";
        break;
        case 8:
        out = "Aug";
        break;
        case 9:
        out = "Sep";
        break;
        case 10:
        out = "Oct";
        break;
        case 11:
        out = "Nov";
        break;
        case 12:
        out =  "Dec";
        break;
        default:
        std::cout << "invalid month" << std::endl;
    }

    return out;
}