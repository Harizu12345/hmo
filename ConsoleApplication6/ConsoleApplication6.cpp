#include <iostream>

using namespace std;

/*
int differenceInDays(int day1, int month1, int year1, int day2, int month2, int year2) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int days = 0;

    for (int i = month1 - 1; i < 12; ++i) {
        if (i == month1 - 1) {
            days += daysInMonth[i] - day1;
        }
        else {
            days += daysInMonth[i];
        }
    }
 
    for (int i = month2 - 1; i < 12; ++i) {
        if (i == month2 - 1) {
            days -= daysInMonth[i] - day2;
        }
        else {
            days -= daysInMonth[i];
        }
    }
   
    for (int i = year1 + 1; i < year2; ++i) {
        days += 365; 
    }

    return days;
}

int main() {
    
    int day1, month1, year1, day2, month2, year2;

    cout << "first date (day month year): ";
    cin >> day1 >> month1 >> year1;

    cout << "first date (day month year): ";
    cin >> day2 >> month2 >> year2;

    int difference = differenceInDays(day1, month1, year1, day2, month2, year2);

    cout << "difference : " << difference << endl;

    return 0;
}
*/



//2 
/*
double averageOfArray(int arr[], int size) {
    if (size == 0) {
        return 0; 
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / size; 
}

int main() {
    
    int array[] = { 7, 12, 45, 72, 46 };
    int size = sizeof(array) / sizeof(array[0]); 

    double average = averageOfArray(array, size);

    cout << "average: " << average << endl;

    return 0;
}
*/


//3

void countElements(int arr[], int size) {
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positiveCount++;
        }
        else if (arr[i] < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }

    cout << "positive: " << positiveCount << endl;
    cout << "negative: " << negativeCount << endl;
    cout << "zero: " << zeroCount << endl;
}

int main() {
    
    int array[] = { 2, -13, 0, 28, -17, 3, -8 };
    int size = sizeof(array) / sizeof(array[0]); 

    countElements(array, size);

    return 0;
}
