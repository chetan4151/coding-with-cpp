#include<iostream>
using namespace std;

int main() {

    int i, s, j, p;

    cout << "Enter size of an array:";
    cin>>s;
    int arr[s];

    cout << "Enter array elements:";
    for (i = 0; i < s; i++) {
        cin >> arr[i];
    }

    cout << "index number all prime numbers:";

    for (i = 0; i < s; i++) {
        j = 2;
        p = 1;
        while (j < arr[i]) {
            if (arr[i] % j == 0) {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1) {
            cout << i << " ";
        }
    }

    return 0;
}