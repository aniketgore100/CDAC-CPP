//operator overloading in compile time polymorphism
//syntax: <return type> operator<symbol>(<parameter list>)
// friend function
// C++ program to implement + operator
// overloading to add two timestamps

// #include <iostream>
// using namespace std;

// // Time class template
// class AddTime {
// private:
// 	int hour, minute, second;
// public:
// 	void setTime(int x, int y, int z)
// 	{
// 		hour = x;
// 		minute = y;
// 		second = z;
// 	}

	
		
	

// 	AddTime operator+(AddTime t)
// 	{
//         minute = minute + second / 60;
// 		second = second % 60;
// 		hour = hour + minute / 60;
// 		minute = minute % 60;

// 		AddTime secTime;
// 		secTime.second = second + t.second;
// 		secTime.minute = minute + t.minute;
// 		secTime.hour = hour + t.hour;
// 		return (secTime);
// 	}

//     void print()
// 	{
// 		cout << endl
// 			<< hour << ":" << minute << ":" << second;
// 	}
// };

// // Driver code
// int main()
// {
// 	AddTime t1, t2, t3;
// 	t1.setTime(5, 50, 30);
// 	t2.setTime(7, 20, 34);
// 	t3 = t1 + t2;
// 	t1.print();
// 	t2.print();
// 	t3.print();

// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Time{
    private:
     int hours, minute, sec;
     public:
     void setTime(int h, int m, int s){
        hours = h;
        minute = m;
        sec = s;
     }

     void display(){
        cout<<hours<<" : "<<minute<<" : "<<sec<<endl;
     }

 
     friend Time operator+(Time t1, Time t2);

};

Time operator+(Time t1, Time t2){
    Time x;
    x.hours = t1.hours + t2.hours;
    x.minute = t1.minute + t2.minute;
    x.sec = t1.sec + t2.sec;

        x.minute = x.minute + x.sec / 60;
		x.sec = x.sec % 60;
		x.hours = x.hours + x.minute / 60;
		x.minute = x.minute % 60;

        return(x);
}


int main(){
    Time t1, t2, t3;
    t1.setTime(5, 30, 35);
    t2.setTime(3, 35, 50);
    t3 = t1 + t2;
    t1.display();
    t2.display();
    t3.display();
}