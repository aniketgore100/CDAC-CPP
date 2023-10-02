// // #include <bits/stdc++.h>
// // using namespace std;


// // class circle{
// // private: 
// //     float r;
// // public:
// // void area(float r){
// //     float pi = 3.14;
// //     // float radius = r;  
// //     r = r;
// //     float ans = pi*r*r;
// //     cout<<ans<<endl;
// // }
// // };

// // int main(){
// //     float r;
// //     cin>>r;
// //     circle c;
// //     c.area(r);
// // }




// #include <iostream>
// using namespace std;
// class Human
// {
//   private:
//   	string name,gender;

//   public:
//   	Human()//default constructor:set to default values
//   	{
//   		cout<<"\nHuman created: Default value constructor";
//   		name="unnamed";
//   		gender="unknown";
// 	  }
// 	Human(string name,string gender)
// 	//parameterized constructor:set to user given valuesui 
// 	 	{
//   		cout<<"\nHuman created: parameterized constructor";
//   		this->name=name;
//   		this->gender=gender;
// 	  }
// 	Human(Human &obj)//refrence of object created
// 	//copy constructor:set parameters to values already set in passed object
// 	//makes duplicate copy of obj
//   	{
//   		cout<<"\nHuman created: copy constructor";
//   		this->name=obj.name;
//   		this->gender=obj.gender;
// 	  }
//   void setHuman(string n ,string g)
//   {
//      name=n;
// 	 gender=g;
//   }
//   void displayHuman()
//   {
//   	cout<<"\nhi i am a "<<gender<<" called "<<name;
//   }
// };
// int main()
// {
// 	Human h1;//object of class Human defult constructor called
// 	h1.displayHuman();
// 	h1.setHuman("amar","male");//set
// 	h1.displayHuman();//display

// 	Human h2("superman","male");//parameterized constructor
//     h2.displayHuman();//display

//     Human h3(h1);//copy constructor
//     h3.displayHuman();//display
// }









// #include <iostream>
// using namespace std;

// class Human
// {
//   private:
//   	string name, gender;
//   	static int population; // Declare population as a static member variable
// 	int ACN;
//   public:
//   	static int generated_number;
	
// 	// Parameterized constructor
// 	Human(string name, string gender)
//   	{
//   		this->name = name;
//   		this->gender = gender;
//   		population++;
//   		cout << "\nHuman created total population:" << population;
// 	  }
	  
// 	// Member function to display information about the Human object
//   	void displayHuman()
//   	{
//   		cout << "\nHi, I am a " << gender << " called " << name;
//   	}
  	
// 	// Destructor
//   	~Human()
//   	{
//   		cout << "\nR.I.P " << name << " gaya re";
//   	}
  
// 	// Static function can only access static data
//   	static void population_display()
//   	{
//   		cout << "\nTotal population:" << population;
//   	}
// };



// int Human::generated_number = 202300;
// int Human::population = 0; // Initialize population to 0

// int main()
// {
// 	Human h1("amar", "male");
// 	Human h2("superman", "male");
// 	Human h3("hulk", "male");
	
// 	Human::population_display();
// }


#include <iostream>
using namespace std;
class Human
{ private:
	string name;
  public:
  	Human(string n)
  	{
  		cout<<"\nHi i m constructor from human";
  		name=n;
  		cout<<"\nName set to: "<<name<<" by constructor:Human";
	}
};

class Education:public Human
{
	private:
		string degree;

  public:
  	Education(string n,string d):Human(n)
  	{
  		cout<<"\nHi i m constructor from Education";
  		degree=d;
  		cout<<"\nDegree set to: "<<degree<<" by constructor:Education";
	}
};

class Job:public Education
{
	private:
		string job;
	public:
	   //contructor(parameters):constructor_super_class(parameters)
	   Job(string n,string d,string j):Education(n,d)
	   {
	   	cout<<"\nHi i m constructor from Job";
  		job=j;
  		cout<<"\nJob set to: "<<job<<" by constructor:Job";
	   }

};
int main()
{
	Job j("Amar","Phd","Trainer");
}