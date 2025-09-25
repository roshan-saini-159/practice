#include <iostream>
#include <algorithm> 
#include<vector>
using namespace std;

int main(){

    vector<int>arr = {1,2,3,4,9,8,7,6};

    sort(arr.begin(),arr.end());

    cout<<"Second Largest is : "<<arr[arr.size()-2]<<endl;

    return 0;
}
