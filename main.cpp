#include <iostream>

using namespace std;

int main()
{
     int num1,num2,opt;

    cout<<"enter the first integer"<<endl;
    cin>>num1;

    cout<<"enter the second integer"<<endl;
    cin>>num2;

    cout << "1.addition"<<endl;
    cout <<"2.substraction"<<endl;
    cout <<"3.multiplication"<<endl;
    cout <<"4.division"<<endl;

    cout<<"input your option"<<endl;
    cin>>opt;


if(opt=1)
    cout<<"result"+ num1+num2<<endl;

else if(opt=2)
    cout<<"result"+ num1-num2<<endl;

else if(opt=3)
    cout<<"result"+ num1*num2<<endl;

else if(opt=4)
    cout<<"the second integer is zero,divide by zero"+ num1/num2<<endl;

else{
    cout<<"not in range"<<endl;
    cout <<"press y or Y to continue"<<endl;

    do{
        cout<<"result"<<endl;
        opt++;
    }

while(opt<=4);


}
    }



