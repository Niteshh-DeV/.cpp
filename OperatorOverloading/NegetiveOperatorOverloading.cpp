// Negative operator overloading without using friend function

// #include <iostream>
// using namespace std;

// class space
// {
//     int x,y,z ;
//     public:
//         space()
//         {
//             x=0;
//             y=0;
//             z=0 ;
//         }
//         space(int ,int , int );
//         void display();
//         void operator -();
// };

// space :: space(int a , int b , int c)
// {
//     x=a ;
//     y=b ;
//     z=c ;
// }

// void space :: display()
// {
//     cout<<x <<"\t"<< y<<"\t"<<z ;

// }
// void  space :: operator -()
// {
//     x=-x;
//     y=-y;
//     z=-z;
// }


// int main() {
//     cout << "This is a example of - operator overloading" <<endl;
//     space s2 ,s1(-10,20,-30);

//     cout<<" s1 =";s1.display();
//     -s1 ;
//     cout<<"\n -s1 =";s1.display();
    

//     return 0;
// }

// Unary - ve operator overloading Using Friend  Function!!


#include <iostream>
using namespace std;

class space
{
    int x,y,z ;
    public:
        space()
        {
            x=0;
            y=0;
            z=0 ;
        }
        space(int ,int , int );
        void display();
      friend void operator -(space &);
};

space :: space(int a , int b , int c)
{
    x=a ;
    y=b ;
    z=c ;
}

void space :: display()
{
    cout<<x <<"\t"<< y<<"\t"<<z ;

}
void operator -(space &s)
{
    s.x=-s.x;
    s.y=-s.y;
    s.z=-s.z;
}


int main() {
    cout << "This is a example of - operator overloading" <<endl;
    space s2 ,s1(-10,20,-30);

    cout<<" s1 =";s1.display();
    -s1 ;
    cout<<"\n -s1 =";s1.display();
    

    return 0;
}