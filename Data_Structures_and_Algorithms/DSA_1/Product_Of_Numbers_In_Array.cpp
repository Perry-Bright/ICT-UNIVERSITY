#include <iostream>

using namespace std;

int main(){
    int size;


    cout << "enter the size of the array" << endl;
    cin >> size;
    int the_array[size], product=1;
    cout << "enter the elements of the array\n";
    for(int i=0; i<size; ++i){
        cin >> the_array[i];
        product *= the_array[i];
    }
    cout << "The product of the elements of the array is:\n" << product << endl;
}