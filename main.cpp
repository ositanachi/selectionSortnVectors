#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Function that uses the selection sort to sort the list in ascending order
void SelectionSort (vector<int> & numbers) {
	int temp, numberSize = numbers.size();
	for (int i = 0; i < numberSize; ++i) {
		int indexSmallest = i;
		for (int j = i + 1; j < numberSize; ++j) {
			if (numbers.at(j) < numbers.at(indexSmallest)) {
				indexSmallest = j;
			}
		}
		temp = numbers.at(i);
		numbers.at(i) = numbers.at(indexSmallest);
		numbers.at(indexSmallest) = temp;
	}
}
//Output the data from the vector in both ascending and descending order
void Output (vector<int> & numbers) {
	int element = 0;
	cout << "Ascending order: {";
	//While statement goes through the vector and prints every element
	while (element < numbers.size()) {
		cout << numbers.at(element);
		if (element < (numbers.size()-1))
		{
			cout << ", ";
		}
		element++;
	}
	//Print the above in reverse to get it in descending order
	cout << "}" << endl << "Descending order: {";
	//While statement goes through the vector and prints every element in reverse order
	while (element > 0) {
		cout << numbers.at(element-1);
		if (element > 1) {
			cout << ", ";
		}
		element--;
	}
	cout << "}";
}

int main() {
	//Create a vector called numbersList with 8 values
	vector<int> numbersList(8);
	//Store the 8 values in their appointed positions
	numbersList.at(0) = 38;
	numbersList.at(1) = 72;
	numbersList.at(2) = 89;
	numbersList.at(3) = 6;
	numbersList.at(4) = 12;
	numbersList.at(5) = 3;
	numbersList.at(6) = 41;
	numbersList.at(7) = 2;
	//Sort the vector by calling the selection sort method
	SelectionSort(numbersList);
	//Output the contents in the list
	Output(numbersList);
}