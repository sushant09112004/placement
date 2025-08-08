// you will be given and array of integers you need to retur an array of integres form the array whcih gives remiander of 4 on diving by 5
// the array should be sorted in ascending order

#include <iostream>
#include <vector>   
#include <algorithm>
using namespace std ;
int main(){
     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     int n= arr.size ();
     vector<int> result;
     cout << " size of array is "<< n << endl;
     for (int i = 0 ; i < n ; i++){
        if(arr[i] % 5 == 4){
            result.push_back(arr[i]);
        }
     }
        sort(result.begin(), result.end());
        cout << "The elements with remainder 4 when divided by 5 are: ";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
        return 0;

}