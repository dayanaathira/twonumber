#include <bits/stdc++.h>
using namespace std;


bool twoSumNumber(int arr[], int size, int s) {
for(int i = 0; i < (size - 1); i++){
	for(int j = (i + 1); j < size; j++){
        if(arr[i] + arr[j] == s){
            return 1;
        }
	}
}

return 0;
}

int main() {
int arr[] = {1, 2, 4, 7, 11, 15};
int s = 15;
int size = sizeof(arr) / sizeof(arr[0]);

if(twoSumNumber(arr, size, s)){
	cout << "True";
}else{
	cout << "False";
}

return 0;
}


