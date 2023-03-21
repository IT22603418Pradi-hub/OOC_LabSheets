// lab2ex1a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int searchkey(int numbers[], int x);
int findMax(int numbers[]);

int main()
{
    int i, x;
    int numbers[10];

    for (i = 0; i < 10; ++i) {
        std::cout << "Enter number " << i + 1 << " :";
        std::cin >> numbers[i];
    }
    
    printf("Array is : ");

    for (i = 0; i < 10; ++i) {
        std::cout << numbers[i] << " ";
    }
    cout << endl;

    //std::cout << numbers[3];

    //b)(ii)

    std::cout << "Enter the number to search : ";
    std::cin >> x;
	
	if (searchkey(numbers, x) == -1){
		std::cout << "Value not found" << endl;
	}else{
		std::cout << "Index of the number is : " << searchkey(numbers, x) << endl;
	}
    
    //find max

    cout << "Maximum number is : " << findMax(numbers);

    return 0;
}

int searchkey(int numbers[], int x) {
    int i;
	
	for (i = 0; i < 10; ++i) {
        if (numbers[i] == x) {
			return i;
        }
	}
	return -1;
}

int findMax(int numbers[]) {
    int max, i;
    max = numbers[0];

    for (i = 1; i < 10; ++i) {
        if (numbers[i] >= max) {
            max = numbers[i];
        }
    }
    return max;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
