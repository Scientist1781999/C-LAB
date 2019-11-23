//exp6
#include<iostream>
using namespace std;
const float pi=3.14;
class allarea{						//declare the class of type allarea
    private:float ar1,ar2,ar3;				//declare variables to find the area
    public:
        float area(float n,float b,float h)			//function to calculate area
        {
            ar1=n*b*h;
        }
        float area(float r)
        {
            ar2=pi*r*r;
        }
        float area(float lr,float br)
        {
            ar3=lr*br;
        }
       void display()					//display the output
       {
           cout<<"\nArea of traingle:"<<ar1<<endl;
           cout<<"\nArea of circle:"<<ar2<<endl;
           cout<<"\nArea of rectangle:"<<ar3<<endl;
       }
};

int main()
{
    float b,h,r,lr,br;
    allarea a;				//define the class and compute area..
    cout<<"\nenter the base & height of traingle:";
    cin>>b>>h;
    a.area(0.5,b,h);

     cout<<"\nenter radius of circle:";
    cin>>r;
    a.area(r);

     cout<<"\nenter the length and breath of rectangle:";
    cin>>lr>>br;
    a.area(lr,br);

    a.display();
    return 0;
}
