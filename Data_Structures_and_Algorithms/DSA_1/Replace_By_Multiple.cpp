#include <iostream>

using namespace std;

int main(){
    int size, i;
    cout << "enter the size of the array" << endl;
    cin >> size;

    int the_array[size];

    cout << "enter the elements of the array" << endl;
    for(int i = 0; i < size; ++i){
        cin >> the_array[i];

        the_array[i] *= i;

    }

    cout << "the new array is "<< endl;
    for(int j = 0; j < size; ++j){
        cout << the_array[j] << endl;
    }
    
}