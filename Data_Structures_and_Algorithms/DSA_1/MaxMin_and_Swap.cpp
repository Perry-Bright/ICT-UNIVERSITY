//
#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    int size;
    //here we take in an array and find the max and the min and swap there
    cout << "Enter the size of the array" << endl;
    cin >>  size;

    int the_array[size], i;

    cout << "enter the values to be stored in the array" << endl;
    for ( i = 0; i <size; i++) {
        cin >> the_array[i];
    }

     int max_of_the_array = the_array[0], min_of_the_array = the_array[0], storage_for_index_of_max = 0, storage_for_index_of_min = 0;
    for(i = 0; i < size; i++){
        if(max_of_the_array < the_array[i]){
            max_of_the_array = the_array[i];
            storage_for_index_of_max = i;
        }

        if(min_of_the_array > the_array[i]){
            min_of_the_array = the_array[i];
            storage_for_index_of_min = i;
        }

    }
    int temp = the_array[storage_for_index_of_max];
    the_array[storage_for_index_of_max] = the_array[storage_for_index_of_min];
    the_array[storage_for_index_of_min] = temp;

    system("color 0C");
    cout << "the max of the array is " << the_array[storage_for_index_of_max] << endl;
    cout << "the min of the array is " << the_array[storage_for_index_of_min] << endl;
    
    system("color 0");
    cout << "the new array is " <<  endl;
    for (int i = 0; i < size; i++){
        if(the_array[i] == max_of_the_array || the_array[i] == min_of_the_array) {
            system("color 0A");
            cout << the_array[i] << endl;
            break;
        }
        cout << the_array[i] << endl;
    }
}