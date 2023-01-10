#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Takes a list and checks if the numbers are in 
//consecutive order. Meaning starting at n, the next number must be n+1

//pass by value since list is small
bool consecutive(vector<int>numList) {
	sort(numList.begin(),numList.end());
	int count = numList.at(0);//count is the first number of the list
	
	for (int i = 1; i < numList.size();i++) {
		count++;
		if (numList.at(i) != count) {
			return false;
		}
	}
	return true;
}


int main() {
	vector<int>startingList = { 1,2,3,4 };//starting numbers. can be changed to take cin
	bool flag = consecutive(startingList);

	if (!flag) {
		cout << "Numbers are not consecutive or appear more than once"<< endl;
	}
	else{
		cout << "Numbers are in order";
	}

}
