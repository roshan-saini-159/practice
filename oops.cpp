#include<iostream>
using namespace std;

class tasks{
private:
    float pi=3.1415;
    

public:
    
    int area_of_circle(){
        cout<<endl<<"To Find Area of Circle "<<endl;
        int radius;
        cout<<"Enter radius : ";
        cin>>radius;
        cout<<"area of circle is : "<<pi*radius*radius<<endl;

    }

    int area_of_triangle(){
        cout<<endl<<"To Find Area of Triangle "<<endl;
        float base,height;
        cout<<"Enter base : ";;
        cin>>base;
        cout<<"Enter height : ";
        cin>>height;
        cout<<"Area of Triangle is : "<<base*height*0.5<<endl;

    }

    int area_of_square(){
        cout<<endl<<"To Find Area of Square "<<endl;
        int side;
        cout<<"Enter Side of Square : ";
        cin>>side;
        cout<<"area of circle is : "<<side*side<<endl;

    }

    int area_of_Paralelogram(){
        cout<<endl<<"To Find Area of Paralelogram "<<endl;
        int breadth,height;
        cout<<"Enter Breadth : ";
        cin>>breadth;
        cout<<"Enter Height : ";
        cin>>height;
        cout<<"area of Paralelogram is : "<<breadth*height<<endl;

        cout<<"Perimeter of Paralelogram is : "<<2*(breadth+height)<<endl;
        

    }



    


};




int main(){


   tasks am;

//    am.area_of_circle();
//    am.area_of_triangle();
    am.area_of_square(); 

    return 0;
}