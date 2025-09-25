#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int areaOfRectangle(rectangle rec){
    double area = rec.length * rec.breadth;
    cout<<"Area of Rectangle is : "<<area<<endl;
}


int main(){

    rectangle rec1;
    rec1.length = 10;
    rec1.breadth = 20;


    areaOfRectangle(rec1);

    rectangle rec2;
    rec2.length = 10;
    rec2.breadth = 5;

    areaOfRectangle(rec2);
    




    return 0;
}