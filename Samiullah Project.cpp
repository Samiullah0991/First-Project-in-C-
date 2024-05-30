#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <cmath>
using namespace std;
class Test 
{
	private:
		int s;
		public:
			void in()
			{
				cout<<"Enter a number :";
				cin>>s;
			}
			void show()
			{
				cout<<"The value of number:"<<s;
			}
};
			class Marks
{
	private:
		int a,b,c;
		public:
			void in()
			{
				cout<<"Enter a three Marks:";
				cin>>a>>b>>c;
			}
			int sum()
         {
         	return a+b+c;
         }
            float avg()
         {
        	return (a+b+c)/3;
         }
};
class Circle
{
	private:
		float radius;
		public:
			void get_radius(float r)
			{
				radius=r;
			}
			void area()
			{
				cout<<"Area of circle"<<radius*radius<<endl;
			}
			void cirum()
			{
				cout<<"Area of Cirumference"<<3.14*radius*radius;
			}
};
class Tests
{
	private:
		int bookid,pages,price;
	public:
        void get()
        {
        	cout<<"Enter a book No :";
        	cin>>bookid;
        	cout<<"Enter a pages of book :";
        	cin>>pages;
        	cout<<"Enter a prices of book :";
        	cin>>price;
        
	}
		void show()
		{
			cout<<"Books id :"<<bookid<<endl;
			cout<<"Pages : "<<pages<<endl;
			cout<<"Price :"<<price<<endl;
		
		}
		void set(int id,int pg,int pr)
		{
			bookid = id;
			pages= pg;
			price= pr;
			}
			int getprice()
			{
			return price;
			}
		};
		class Array
{
	private:
		int a[5];
		public:
			void fill();
			void show();
			int max();
			int min();
};
     void Array::fill()
    {
	for(int i=0;i<5;i++)
	{
		cout<<"A["<<i<<"]:";
		cin>>a[i];
	}
    }
    void Array::show()
    {
	for(int i=0;i<5;i++)
		cout<<"A["<<i<<"]:"<<a[i]<<endl;
	
    }
     int Array::max()
    {
     	int m=a[0];
    	for(int i=0;i<5;i++)
    	if(m<a[i])
    	m=a[i];
	    return m;
     }
       int Array::min()
      {
     	int m=a[0];
    	for(int i=0;i<5;i++)
	    if(m>a[i])
       	m=a[i];
	   return m;
}
class Hello
{
	private:
		int n;
		public:
			Hello()
			{
				cout<<"Samiullah Code"<<endl;
				}
			};
class Number
{
	private:
		int x,y;
		public:
			Number()
			{
				x=y=100;
			}
	void avg()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"Average="<<(x+y)/2<<endl;
			}		
};
class Student
{
	private :
		int marks;
		char grade;
		public:
			Student(int m,char g)
			{
				marks=m;
				grade=g;
			}
			void show()
			{
				cout<<"Marks="<<marks<<endl;
				cout<<"Grade="<<grade<<endl;
			}
};
class Tv
{
	private:
			char brandname[20];
			char model[20];
			float retailprice;
			public:
		Tv(char brand[20],char mod[20],float price);
		void change(char brand[20],char mod[20],float price);
		void display();
		};
		Tv :: Tv(char brand[20],char mod[20],float price)
		{
			strcpy(brandname, brand);
			strcpy(model,mod);
			retailprice=price;
		}
		void Tv::change(char brand[20],char mod[20],float price)
		{
			strcpy(brandname,brand);
strcpy(model,mod);
			retailprice=price;			
		}
		void Tv::display()
		{
			cout<<"Brand name:"<<brandname<<endl;
			cout<<"models:"<<model<<endl;
			cout<<"price:"<<retailprice<<endl;
		}
		class Over
{
	private:
		int num;
		char ch;
		public:
			Over()
			{
				num=50;
				ch='c';
			}
			Over(int n,char c)
			{
				num=n;
				ch=c;
			}
			void show()
			{
				cout<<"Num="<<num<<endl;
				cout<<"Char="<<ch<<endl;
				
			}
};
class Book
{
	private:
		int bookid,pages;
		float price;
		public:
			void get()
		{
			cout<<"Enter a Book id"<<endl;
			cin>>bookid;
			cout<<"Enter a BOOk pages"<<endl;
			cin>>pages;
			cout<<"Enter a Price od Book"<<endl;
			cin>>price;
		}
		void show()
		{
			cout<<"BOok id="<<bookid<<endl;
			cout<<"Pages="<<pages<<endl;
			cout<<"price="<<endl;
			
		}
		void set(int id,int pg,float pr){
			bookid=id;
			pages=pg;
			price=pr;
			
		}
		float getprice(){
			return price;
		}
};
class Travel
{
	protected:
		int kmm,hr;
		public:
			Travel()
			{
				kmm=hr=0;
			}
			void get()
			{
				cout<<"Enter Kilometer :";
				cin>>kmm;
				cout<<"Enter a hours :";
				cin>>hr;
			}
			void show()
			{
				cout<<"You Travelled :"<<kmm<<"  in hour :"<<hr<<endl;
			}
			int add(Travel s)
			{
				Travel p;
				p.kmm=kmm+s.kmm;
				p.hr=hr+s.hr;
			cout<<"Totl Travelling is "<<p.kmm<<"Kilometer in"<<p.hr<<"hours"<<endl;
			}
		};
		class Travels
{
	private:
		int kmt,hr;
		public:
			Travels()
			{
				kmt=hr=0;
			}
			void get()
			{
				cout<<"Enter Kilometer :";
				cin>>kmt;
				cout<<"Enter a hours :";
				cin>>hr;
			}
			void show()
			{
				cout<<"You Travelled :"<<kmt<<"  in hour :"<<hr<<endl;
			}
			Travels add(Travels u)
			{
				Travels p;
				p.kmt=kmt+u.kmt;
				p.hr=hr+u.hr;
			return p;
			}
		};
		class Test1
{
	private:
	static int n;
	public:
		Test1()
		{
			n++;
		}
		void show()
		{
			cout<<"You have Created:"<<n<<" Object So far"<<endl;
		
		}
};
class Student1
{
	private:
		static int s;
		int rno,marks;
		char name[10];
		public:
			Student1()
			{
				s++;
				rno=s;
			}
			void in()
			{
				cout<<"Enter Name:";
				gets(name);
				cout<<"Enter a Marks:";
				cin>>marks;
			}
			void show()
			{
				cout<<"Roll no:"<<rno<<endl;
				cout<<"Name:"<<name<<endl;
				cout<<"Marks:"<<marks<<endl;
			}
			
};
int Student1::s=0;
class B;
class A
{
	private:
		int s;
		public:
			A()
			{
				s=10;
			}
			friend void show(A,B);
			
};
 class B
{
	private:
		int a;
		public:
			B()
			{
				a=20;
			}
			friend void show(A,B);
			
};
void show(A x,B y)
{
	int r;
	r=x.s+y.a;
	cout<<" The value of Class A object="<<x.s<<endl;
	cout<<" The value of Class B object="<<y.a<<endl;
	cout<<" The Sum of both="<<r<<endl;
}
class A1
{
	private:
		int c,d;
		public:
			A1()
			{
				c=10;
				d=20;
			}
			friend class B1;
			
};
 class B1
{
	public:
		void showA1(A1 obj)
		{
			cout<<"The Value of a"<<obj.c<<endl;
		}
		void showB1(A1 obj)
		{
			cout<<"The value of b:"<<obj.d<<endl;
		}
	};
	class Test2
{
	private:
		static int n;
		public:
			static void show()
			{
				cout<<"N="<<n<<endl;
			}
};
int Test2 ::n=20;
class Test3
{
	private:
		static int n;
		public:
			Test3()
			{
				n++;
			}
			static int show()
			{
				cout<<"You created :"<<n<<" Obiect so far"<<endl;
			}
			
};
int Test3::n=10;
class Test4
{
	private:
		static int n;
		public:
			Test4()
			{
				n++;
			}
			static int show()
			{
				cout<<"You created :"<<n<<" Obiect so far"<<endl;
			}
			
};
int Test4::n=10;


class Parent
{
	protected:
		int  n;
		public:
			Parent()
			{
				n=5;
			}
	Parent(int p)
        {
        	n=p;
		}
		void show()
		{
			cout<<"n="<<n<<endl;
		}
};
class Child:public Parent
{
	private:
		char ch;
		public:
			Child() : Parent()
			{
				ch='@';
			}
			Child(char c,int m):Parent(m)
			{
				ch=c;
			}
			void display(){
				cout<<"ch="<<ch<<endl;
			}
};
class Person
{
	protected:
		int id;
		char name[50],address[50];
		public:
			Person()
			{
				id=0;
				name[50]='0';
				address[50]='0';
			}
			void input()
			{
				cout<<"Enter a id:";
				cin>>id;
				cout<<"Enter a Name:";
				gets(name);
				cout<<"Enter a Address:";
				gets(address);
			}
			void output()
			{
				cout<<"Information"<<endl;
				cout<<"id="<<id<<endl;
				cout<<"Name="<<name<<endl;
				cout<<"Address="<<address<<endl;
			}
			
};
class Student2:public Person
{
	private :
		int rno,marks;
		public:
			Student2()
			{
				Student2:: Person();
				rno=marks=0;
			}
			void input()
			{
				Student2::Person();
				cout<<"Enter a Roll no:";
				cin>>rno;
				cout<<"Enter a marks:";
				cin>>marks;
				
			}
			void output()
			{
				Person::output();
				cout<<"Education info"<<endl;
				cout<<"Roll no="<<rno<<endl;
				cout<<"Marks:"<<marks<<endl;
				}
				
};
class Parent1
{
	protected:
		int  n;
		public:
	Parent1(int p)
        {
        	n=p;
		}
		void show()
		{
			cout<<"n="<<n<<endl;
		}
};
class Child1:public Parent1
{
	private:
		char ch;
		public:
			Child1(char c,int m):Parent1(m)
			{
				ch=c;
			}
			void show(){
				Parent1 ::show();
				cout<<"ch="<<ch<<endl;
			}
};
class Smart
{
	protected:
		int a,b;
		public:
			Snart(){
				a=b=0;
			}
			void in(){
				cout<<"Enter avalue of a:";
				cin>>a;
				cout<<"enter a value of b:";
				cin>>b;
			}
			void add(){
				cout<<"a+b="<<a+b<<endl;
			}
			void sub(){
				cout<<"a-b="<<a-b<<endl;
			}
			void mul(){
				cout<<"a*b="<<a*b<<endl;
			}
			void div(){
				cout<<"a/b="<<a/b<<endl;
			}
};
class Large:public Smart
{
	public:
		void add(){
			if(a<=0||b<=0)
			cout<<"invalid value";
			else
			Smart::add();
		}
		void sub(){
			if(a<=0||b<=0)
			cout<<"invalid value";
			else
			Smart::sub();
		}
		void mul(){
			if(a<=0||b<=0)
			cout<<"invalid value";
			else
			Smart::mul();
		}
		void div(){
			if(a<=0||b<=0)
			cout<<"invalid value";
			else
			Smart::div();
		}
		
};
class Study
{
	public:
		int a;
		protected:
			int b;
			private:
				int c;
				
};
class Studying :public Study
{
	public:
		void in(){
			cout<<"Enter avalue of A:";
			cin>>a;
			cout<<"Enter avalue of B:";
			cin>>b;
		}
		void out(){
			cout<<"value of a="<<a<<endl;
			cout<<"Value of b="<<b<<endl;
		}
};
class Study1
{
	public:
		int a;
		protected:
			int b;
			private:
				int c;
				
};
class Studying1 :private Study1
{
	public:
		void in(){
			cout<<"Enter avalue of A:";
			cin>>a;
			cout<<"Enter avalue of B:";
			cin>>b;
		}
		void out(){
			cout<<"value of a="<<a<<endl;
			cout<<"Value of b="<<b<<endl;
		}
};
class Study2
{
	public:
		int a;
		protected:
			int b;
			private:
				int c;
				
};
class Studying2 :protected Study2
{
	public:
		void in(){
			cout<<"Enter avalue of A:";
			cin>>a;
			cout<<"Enter avalue of B:";
			cin>>b;
		}
		void out(){
			cout<<"value of a="<<a<<endl;
			cout<<"Value of b="<<b<<endl;
		}
};
class Study3
{
	private:
		int a;
		public:
			void in()
			{
				cout<<"Enter a value of A:";
				cin>>a;
			}
			void out()
			{
				cout<<"value of A="<<a<<endl;
			}
			
};
class Studying3:public Study3
{
	private:int b;
	public:
		void in()
		{
			Study3::in();
			cout<<"Enter a value of B:";
			cin>>b;
		}
		void out()
		{
			Study3::out();
			cout<<"value of B="<<b<<endl;
		}
		};
class Sami:public Studying
{
	private:
	int c;
	public:
		void in()
		{
			Studying::in();
			cout<<"Enter a value of C:";
			cin>>c;
		}
		void out()
		{
			Studying::out();
			cout<<"value of C="<<c<<endl;
		}
};
class Complex {
        private:
            float real;
            float imag;
           	public:
           Complex() : real(0), imag(0) {}

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};
class Samii
{
	private:
		int n;
		public:
			Samii()
			{
				n=0;
			}
			void show()
			{
				cout<<"N="<<n<<endl;
			}
			void operator ++()
			{
				n=n+1;
			}
};
class Samiu
{
	private:
		int n;
		public:
			Samiu()
			{
				n=0;
			}
			void show()
			{
				cout<<"N="<<n<<endl;
			}
			Samiu operator++()
			{
				Samiu temp;
				n=n+1;
				temp.n=n;
				return temp;
			}
};
class Samiul
{
	private:
		int n;
		public:
			Samiul()
			{
				n=0;
			}
			void show()
			{
				cout<<"N="<<n<<endl;
			}
			Samiul operator++()
			{
				Samiul temp;
				n=n+1;
				temp.n=n;
				return temp;
			}
			Samiul operator ++(int)
			{
				Samiul temp;
				n=n+1;
				temp.n=n;
				return temp;
			}
};
class Add
{
	private:
		int a,b;
		public:
			Add()
			{
				a=b=0;
			}
			void in()
			{
				cout<<"Enter a number A:";
				cin>>a;
				cout<<"Enter a number B:";
				cin>>b;
			}
			void show()
			{
				cout<<"A="<<a<<endl;
				cout<<"B="<<b<<endl;
			}
			Add operator+(Add s)
			{
				Add temp;
				temp.a=s.a+a;
				temp.b=s.b+b;
				return temp;
				
			}
};
class String
{
	private:
		char strr[10];
		public:
			String()
			{
				strr[50]='0';
			}
			void in()
			{
				cout<<"Enter String:";
				gets(strr);
			}
			void show()
			{
				cout<<strr<<endl;
			}
			String operator + (String s)
			{
				String  temp;
				strcpy(temp.strr,strr);
				strcat(temp.strr,s.strr);
				return temp;
			}
};

class Int{
         private:
          int intvar;
            public:
              Int(){
                intvar = 0;
                }
                  Int(int x){
                       intvar = x;
                 }
                    void display(){
                       cout << intvar << endl;
                }
                   void add(Int x, Int y){
                   intvar = x.intvar + y.intvar;
                }
        };
	
class time
{
     private:
        int hours;
          int minutes;
            int seconds;
     public:
              time() : hours(0), minutes(0), seconds(0)
                     { }
               time(int h, int m, int s) : hours(h), minutes(m), seconds(s)
                       { }

    void displayTime() const
    {
        if(hours<10)
            cout<<"0";
        cout<<hours<<",";
        if(minutes<10)
            cout<<"0";
        cout<<minutes<<";";
        if(seconds<10)
            cout<<"0";
        cout<<seconds<<endl;
    }

    time addTo(time t1)
    {
        time temp;
        temp.seconds = seconds + t1.seconds;
        temp.minutes = minutes + t1.minutes;
        temp.hours = hours + t1.hours;

        if(temp.seconds>= 60)
        {
            temp.seconds= temp.seconds - 60;
            temp.minutes++;
        }

        if(temp.minutes>=60)
        {
            temp.minutes= temp.minutes - 60;
            temp.hours++;
        }

        if(temp.hours>12)
        {
            temp.hours= temp.hours -12;
        }

        return temp;
    }
};
class employee {
	private:
		int emp_num;
        float emp_comp;
	public:
		employee(): emp_num(0), emp_comp(0)	{	}
		employee(int empNum, float empCom): emp_num(empNum), emp_comp(empCom){	}
		void setData();	
		void display() const;
};

     void employee::setData() {	
	cout << "\nEnter employee Number: ";
	cin >> emp_num;
	cout << "Enter employee Compensation: ";
	cin >> emp_comp;
	cout << endl;
}

    void employee::display() const {
	cout << "Employee Number: " << emp_num << endl;
	cout << "Employee Compensation: $" << emp_comp <<endl;
}

class date{
    private:
        int month, day, year;
        char temp;
    public:
        date(){ };
        void getData(){
            cout << "Enter date (MM/DD/YYYY): ";
            cin >> month >> temp >> day >> temp >> year;
        }
        void display(){
            cout << endl << "Date is " << month << "/" << day << "/" << year << endl;
        }
};


enum etype {laborer, secretary, manager, accountant, executive, researcher};
class dates {	
	private:
		int day, month, year;
	public:
		void getDate(){
            char temp;
	        cout << "Enter employee date of joining in (DD/MM/YYYY) format: ";
	        cin >> day >> temp >> month >> temp >>year;
        }	
        void showDate(){
            cout << "\nEmployee date of joining: " << day << "/" << month << "/" <<year;
        }
};

class employee1 {
	private:
		int emp_num;
        float emp_comp;
        dates date1;
        etype emp;
	public:
		void setData();
        void dispData();
};

void employee1::setData(){
    char type;
    cout << "\nEnter employee Number: ";
	cin >> emp_num;
	cout << "Enter employee Compensation: ";
	cin >> emp_comp;
    date1.getDate();
    cout << "Enter employee type (first letter only laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> type;
    switch (type){
        case 'l': emp = laborer; break;
        case 's': emp = secretary; break;
        case 'm': emp = manager; break;
        case 'a': emp = accountant; break;
        case 'e': emp = executive; break;
        case 'r': emp = researcher; break;
        default:
            break;
    }
}

void employee1::dispData(){
    cout << "Employee Number: " << emp_num << endl;
	cout << "Employee Compensation: $" << emp_comp <<endl;
    date1.showDate();
    cout << endl;
    switch(emp){
        case laborer:
            cout << "Employee type is laborer";
            break;
        case secretary:
            cout << "Employee type is secretary";
            break;
        case manager:
            cout << "Employee type is manager";
            break;
        case accountant:
            cout << "Employee type is accountant";
            break;
        case executive:
            cout << "Employee type is executive";
            break;
        case researcher:
            cout << "Employee type is researcher";
            break;
        default:
            cout << "Invalid input";
            break;
    }
    cout << endl;
}


class counter1
{
       private:
         static int count;
          int num;
        public:
           counter1()
       {
              static int count=0;
              num=++count;
       }
       void show()
       {
              cout<<"I am Oject "<<num<<"\n";
       }
};
class fraction
           {
               private:
                int a,b,c,d,e,f;
                char dummychar;
                public:
                void getdata()
                {
                 cout<<"Enter first fraction =";
                   cin>>a;cin>>b;
                 cout<<"Enter second fraction =";
                     cin>>c;cin>>d;
                }
                void showdata()
                {
                    if(b==d)
                {
                    e=a+c;
                    f=b;
                }
                    else if(b!=d)
                {
                    e=a*d+c*b;
                    f=b*d;
                }
                cout<<"The sum of fraction is = "<<e<<"/"<<f<<"\n";}
            };
            
class angle
          {
             private:
                int degrees;
                float minutes;
                char direction;
             public:
                void getdata()
                {
                                cout<<"\nenter degrees :";
                                cin>>degrees;
                                cout<<"enter minutes :";
                                cin>>minutes;
                                cout<<"enter direction (N,E,W,S) :";
                                cin>>direction;
                }
                void display1()
                {
                                cout<<"\non latitude :"<<degrees<<"\xf8"<<minutes<<"'"<<direction;
                }
                void display()
                {
                                cout<<"\non longitude :"<<degrees<<"\xf8"<<minutes<<"'"<<direction;
                                cout<<"\n";
                }
           };
class ship
          {
             private:
                angle latitude;
                angle longitude;
                int ship_number;
                static int count;
             public:
                void getposition()
                {
                                count++;
                                ship_number=count;
                                cout<<"\nenter direction on latitude :\n";
                                latitude.getdata();
                                cout<<"\nenter direction on longitude :\n";
                                longitude.getdata();
               }
                void display()
                {
                                cout<<"\ndirection of ship number "<<ship_number<<" is:- \n";
                                latitude.display1();
                                longitude.display();
                }
           };
            int ship::count=0;
            
class direction
       {
           public:
             int degree;
            float minute;
            char direc,press;
            int degree1;
            float minute1;
            char dir1;
           direction (){
	         }
              	int longitude(int d,float m,char dir)
              {
              degree=d;
              minute=m;
              direc=dir;
              if ((0<degree)&&(degree<=180))
              {     
            
                     d=degree;
                    return(degree);
                    
              }
              else
              {
              cout<<"Enter correct information"<<endl;
              }

              }
              int latitude(int d,float m,char dir)
              {
              degree1=d;
              minute1=m;
              dir1=dir;
              if ((0<degree1)&&(degree1<90))
              {     
                                       d=degree1;
                     return(degree1);
                           }
              else
              {
              cout<<"Enter correct information"<<endl;
              }
            }
          };
class counter
    {
       public:
             void showdata(int a,int b,float c,float d,char e,char f)
       {
              for(int u=0;u<2;u++)
              {cout<<a<<"\xF8"<<c<<"\'"<<e<<endl;
              cout<<b<<"\xF8"<<d<<"\'"<<f<<endl;}
       }
            
};
class student5
{
	protected:
		int id;
		char name[50];
		char address[100];
		public:
			Student5()
			{
				id= 0;
				name[50] = 0;
				address[100] = 0;
			}
			void getinfo()
			{
				cout<<"Enter a id"<<endl;
				cin>>id;
				cout<<"enter a name"<<endl;
				gets(name);
				cout<<"enter aaddress"<<endl;
				gets(address);
			}
			void show()
			{
				cout<<id;
				cout<<name;
				cout<<address;
			}
			
};
class result5 : public student5
{
private:
	int marks,rno;
	public:
		result5()
		{result5::student5();
			marks = rno = 0;
			
		}
		void getinfo()
		{
			cout<<"enter a marks"<<endl;
			cin>>marks;
			cout<<"enter a roll no"<<endl;
			cin>>rno;
		}
};

    int main()
    {
	int input,choice,rpt,set,i,j,dell,hp,a,b,c,logic,d,e,f,g,h,k,l,m,n,x,y,z,mx;
	label:
				system("cls");
	cout<<"\n\t\tWelcome To Project Interference"<<endl;
	cout<<"\n\n\t\t!Its My Second C++ Project! \n";
	cout<<"\t\t! My name is Samiullah    !\n\n\n";
	cout<<"\t\t!  Samiullah Project      |\n";
    cout<<"\t\t|#########################|\n";
	cout<<"\t\t|+-----------------------+|\n";
	cout<<"\t\t| 1.Basic Oops            |\n";
	cout<<"\t\t| 2.Inheritance Program   |\n";
	cout<<"\t\t| 3.Operator loading      |\n";
	cout<<"\t\t|  4.Exit                 |\n";
	cout<<"\t\t|+--___________________--+|\n";
	cout<<setw(7)<<"xxxxx"<<endl;
	cout<<setw(15)<<"x     x\t x\t  x"<<endl;
	cout<<setw(10)<<"x		 x\t  x"<<endl;
	cout<<setw(25)<<"x\t      xxxxxxx  xxxxxxx"<<endl;
	cout<<setw(10)<<"x		 x\t  x"<<endl;
	cout<<setw(15)<<"x     x\t x\t  x"<<endl; 
	cout<<setw(7)<<"  xxxxx"<<endl; 
	cout<<"Enter Program Number:"<<endl;
	cin>>input; 
	system("cls");
	     if(input==1){ 
		 goto start ;
	       }
        if (input==2){
		  goto logic;
		  }
	    if(input==3)
    	{
		   goto sami;
		}
		if(input<=5)
		exit(0);	
     	else
	{cout<<"invalid input";
	}
	
     start:
     	system("cls");
    cout <<"       Basic Oops  		\n"<<endl;
    cout<<"1. Member function Program \n";
    cout<<"2. Constructors  \n";
    cout<<"3. Default Coppy Constructors\n";
    cout<<"4. Destructors \n";
    cout<<"5. Object as Function Parameters\n";
    cout<<"6. Static Data Members\n";
    cout<<"7. Friend Function\n";
    cout<<"8. Friend Classes\n";
    cout<<"9. Static Function\n";
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    if(choice==1){goto a;
	}
	 if(choice==2){goto b;
	}
	 if(choice==3){goto c;
	}
	 if(choice==4){goto d;
	}
	 if(choice==5){goto e;
	}
	 if(choice==6){goto f;
	}
	 if(choice==7){goto g;
	}
	 if(choice==8){goto h;
	}
	 if(choice==9){goto i;
	}
	else 
	{cout<<"Wrong number add";
	}

    a:
	system("cls");
    cout <<"      Member function Program 		\n"<<endl;
    cout<<"1. Get and print a number  \n";
    cout<<"2. Sum and Avarage of three number  \n";
    cout<<"3. Find Cirumference of circle \n";
    cout<<"4. Get and Print Book details \n";
    cout<<"5. Find maximum and minimum value B/W five number \n";
    cout<<"Enter Program number";
    cin>>a;
    
     switch(a)
    {
   		case 1:
   			
    system("cls");
	Test obj;
	obj.in();
	obj.show();
	break;
	
	case 2:
		
	system("cls");
	Marks t;
	int s;
	float a;
	t.in();
	s=t.sum();
	a=t.avg();
	cout<<"Sum"<<s<<endl;
	cout<<"Average"<<a;
	break;
	
	case 3:
		
	system("cls");
	Circle T1;     
	float rad;
	cout<<"Enter a radius";
	cin>>rad;
	T1.get_radius(rad);
	T1.area();
	T1.cirum();
	break;
	
	case 4:
		system("cls");
       Tests b1,b2;
		b1.get();
		b2.set(2,320,50);
		cout<<"Details"<<endl;
		if(b1.getprice()>b2.getprice())
		b1.show();
		else
		b2.show();
		break;
		
	case 5:
			
		system("cls");
		Array arr;
	arr.fill();
	cout<<"*****You Entered the number*****"<<endl;
	arr.show();
	cout<<"****Your Result is****"<<endl;
	cout<<"Maximum value:"<<arr.max()<<endl;
	cout<<"Minmum value: "<<arr.min();
	break;
	default:
		cout<<"Error\n";
        }
         cout<<"\n\nWhat Are you choose";
         cout<<"\n\n1:Main Menu"<<endl;
         cout<<"\n\n2:Program Menu"<<endl;
        cout<<"\n\n3:Last Menu"<<endl;
       cin>>rpt;
        if(rpt==1){
        	goto label;
         }
          if (rpt==2){
          	goto start;
         }
         if(rpt==3)
         {
		 goto a;
        }
        else{
           cout<<"Invalid Option choose";
		   }
   
b:
	system("cls");
    cout <<"      Constructors 		\n"<<endl;
    cout<<"1. Class Constructors  \n";
    cout<<"2. Avarage of two number  \n";
    cout<<"3. Print the Marks and Grade of students \n";
    cout<<"4.  Print num and char \n";
    cout<<"Enter Program number";
    cin>>b;
    switch(b)
    {
    		case 1:{
		system("cls");
		Hello x,y,z;
		return 0;
		break;}
		
    case 2:{
		break;
		system("cls");
		Number n;
	    n.avg();}
	break;
	case 3:{
		
	system("cls");
	Student s1(730,'A'),s2(450,'B');
	cout<<"Record 1"<<endl;
	s1.show();
	cout<<"Record 2"<<endl;
	s2.show();
		break;
	}
	
	case 4:
		system("cls");
		Over first,second(130,'s');
	cout<<"The content of first"<<endl;
	first.show();
	cout<<"The content of second"<<endl;
	second.show();		
	break;	
      	}
          cout<<"\n\nWhat Are you choose";
            cout<<"\n\n1:Main Menu"<<endl;
             cout<<"\n\n2:Program Menu"<<endl;
               cout<<"\n\n3:Last Menu"<<endl;
                cin>>rpt;
                  if(rpt==1){
                   	goto label;
                     }
                     if (rpt==2){
                        	goto start;
                        }
                       if(rpt==3)
                          {
						   goto b;
                           }
                            else{  cout<<"Invalid Option choose";
		   }
		   
c:
	system("cls");
    cout <<"     Default Coppy Constructors 		\n"<<endl;
    cout<<"1. Get and Print book Id, pages  and price \n";
    cout<<"Enter Program number";
    cin>>c;
    
    switch(c)
    {
   	case 1:
   		
		system("cls");
	Book t1,t2;
	t1.get();
	t2.set(5,100,500);
	cout<<"Details"<<endl;
	if(t1.getprice()>t2.getprice())t1.show();
	else
	t2.show();
		break;	
	}
	
     	cout<<"\n\nWhat Are you choose";
         cout<<"\n\n1:Main Menu"<<endl;
          cout<<"\n\n2:Program Menu"<<endl;
           cout<<"\n\n3:Last Menu"<<endl;
             cin>>rpt;
              if(rpt==1){
             	goto label;
               }
               if (rpt==2){
                	goto start;
                }
                 if(rpt==3)
                 {
				 goto c;
                  }
                   else{
                     cout<<"Invalid Option choose";}
d:
	system("cls");
    cout <<"      Object as Function Parameters 		\n"<<endl;
    cout<<"1. Get and Print Distance and Time  \n";
    cout<<"2. call a constructer   \n";
    cout<<"Enter Program number";
    cin>>d;
    switch(d)
    {
    		case 1:{
		system("cls");
	Travel my,your;
			my.get();
			my.show();
			your.get();
			your.show();
			my.add(your);
		break;
    }
    	case 2:{
    		system("cls");
    		Travels my,your,r;
			my.get();
			my.show();
			your.get();
			your.show();
			r=my.add(your);
			cout<<"Total Travelling is as fellow :"<<endl;
			r.show();
		break;	}
	}
         	cout<<"\n\nWhat Are you choose";
             cout<<"\n\n1:Main Menu"<<endl;
               cout<<"\n\n2:Program Menu"<<endl;
                 cout<<"\n\n3:Last Menu"<<endl;
                 cin>>rpt;
                   if(rpt==1){
	                goto label;
                      }
                     if (rpt==2){
                     	goto start;
                           }
                    if(rpt==3)
                     {
                        goto d;
                     }
                      else{
                     cout<<"Invalid Option choose";
					 }
e:
	system("cls");
    cout <<"      Static Data Member 		\n"<<endl;
    cout<<"1.  Get and Print a value  \n";
    cout<<"2. Print name, roll number and marks of three students   \n";
    cout<<"Enter Program number";
    cin>>e;
    switch(e)
    {
    		case 1:
		system("cls");
	Test x,y;
	x.show();
	Test z;
	x.show();
		break;
    	
    	case 2:{
		
    		Student1 t1,t2,t3;
	t1.in();
	t2.in();
	t3.in();
	t1.show();
	t2.show();
	t3.show();
		system("cls");
		
	break;}	
	}
        	cout<<"\n\nWhat Are you choose";
             cout<<"\n\n1:Main Menu"<<endl;
              cout<<"\n\n2:Program Menu"<<endl;
                cout<<"\n\n3:Last Menu"<<endl;
                  cin>>rpt;
                   if(rpt==1){
                  	goto label;
                    }
                   if (rpt==2){
                 	goto start;
                     }
                    if(rpt==3)
                   {
				   goto e;
                   }
                   else{
                     cout<<"Invalid Option choose";
					 }
f:
	system("cls");
    cout <<"      Friends function 		\n"<<endl;
    cout<<"1.  Sum of friend function \n";
    cout<<"Enter Program number";
    cin>>f;
    switch(f)
    {
    		case 1:
		system("cls");
	A obj1;
	B obj2;
	show(obj1,obj2);
		break;
	}
         	cout<<"\n\nWhat Are you choose";
            cout<<"\n\n1:Main Menu"<<endl;
            cout<<"\n\n2:Program Menu"<<endl;
            cout<<"\n\n3:Last Menu"<<endl;
             cin>>rpt;
               if(rpt==1){
              	goto label;
                }
                if (rpt==2){
	              goto start;
                 }
                 if(rpt==3)
                 {
				 goto f;
                 }
                 else{
                   cout<<"Invalid Option choose"; 
				   }
g:
	system("cls");
    cout <<"      Friends Class 		\n"<<endl;
    cout<<"1. Value of friends classes  \n";
    cout<<"1. Static function  \n";
    cout<<"1. Static function \n";
    cout<<"Enter Program number";
    cin>>g;
    switch(g)
    {
    		case 1:{
			
		system("cls");
	    A1 x;
		B1 y;
		y.showA1(x);
		y.showB1(x);
		break;}
		case 2:
		system("cls");
	Test3::show();
		break;
    	
    	case 3:
		system("cls");
			Test4::show();
	Test4 a,b;
	a.show();
	Test c;
	a.show();
	break;	
	}  
	         cout<<"\n\nWhat Are you choose";
             cout<<"\n\n1:Main Menu"<<endl;
             cout<<"\n\n2:Program Menu"<<endl;
             cout<<"\n\n3:Last Menu"<<endl;
              cin>>rpt;
               if(rpt==1){
                	goto label;
                  }
                 if (rpt==2){
                	goto start;
                   }
                   if(rpt==3)
                   {
				   goto g;
                  } 
                   else{
                    cout<<"Invalid Option choose";}
h:
	system("cls");
    cout <<"      Static function	\n"<<endl;
    cout<<"1. It Question no1 \n";
    cout<<"2. Direction Program  \n";
    cout<<"3. Time Program  \n";
    cout<<"4. Employee Program  \n";
    cout<<"5. Date Program  \n";
    cout<<"Enter Program number";
    cin>>h;
    switch(h)
    {
    		case 1:{
		system("cls");
	    Int a(5),b(45);
        Int c;
        c.add(a,b);
        c.display();
		break;}
    	case 2:{
		
		system("cls");
		direction dirc;
       counter counterx;
       int inputdeg,inputdeg2,ship;
       float min,min2;
       char dir,dir2;
       int clas1,clas2;
       cout<<"Enter Degree for longitute"<<endl;
       cin>>inputdeg;
       cout<<"Enter minutes for longitute"<<endl;
       cin>>min;
       cout<<"Enter Direction for longitute Press E for east and W for west"<<endl;
       cin>>dir;
       cout<<"Enter Degree for latitude"<<endl;
       cin>>inputdeg2;
       cout<<"Enter minutes for latitude"<<endl;
       cin>>min2;
       cout<<"Enter Direction for latitude Press N for east and S for west"<<endl;
       cin>>dir2;
       clas1=dirc.longitude(inputdeg,min,dir);
       clas2=dirc.latitude(inputdeg2,min2,dir2);
       counterx.showdata(clas1,clas2,min,min2,dir,dir2);
	break;
	}
    	
	case 3:{
		system("cls");
	time t1(11, 59, 59);
    time t2(2, 0, 1);
    time t3;
    t3 = t1.addTo(t2);
    t3.displayTime();
	break;
	}
		
	case 4:{
		system("cls");
	employee emp1, emp2;	
	employee emp3(12, 34.6);

	emp1.setData();	
	emp2.setData();	

	cout << "\nDetails of first employee: \n";
	emp1.display();	
	cout << "\nDetails of second employee: \n";
	emp2.display();	
	cout <<"\nDetails of third employee: \n";
	emp3.display();

	cout <<endl;
		break;}
		
	case 5:
		system("cls");
	date d1;
    d1.getData();
    d1.display();
		break;
	}
          cout<<"\n\nWhat Are you choose";
           cout<<"\n\n1:Main Menu"<<endl;
             cout<<"\n\n2:Program Menu"<<endl;
              cout<<"\n\n3:Last Menu"<<endl;
               cin>>rpt;
                if(rpt==1){
                	goto label;
                  }
                  if (rpt==2){
                 	goto start;
                    }
                  if(rpt==3)
                 {
				 goto h;
                  }
                  else{
                   cout<<"Invalid Option choose";}

i:
	system("cls");
    cout <<"      Destructors 		\n"<<endl;
    cout<<"1. EmployeeProgram  \n";
    cout<<"2. Counter Program  \n";
    cout<<"3. Fraction Program  \n";
    cout<<"4. Ship Program  \n";
    cout<<"Enter Program number";
    cin>>i;
    switch(i)
    {
    		case 1:
		system("cls");
	employee1 emp1, emp2, emp3;
	cout <<"\nEnter first employee details: \n";
	emp1.setData();	
	cout <<"\nEnter second employee details: \n";
	emp2.setData();	
	cout <<"\nEnter third employee details: \n";
	emp3.setData();	

	cout <<"\nFirst employee deatils: ";
	emp1.dispData();
	cout <<"\nSecond employee deatils: ";
	emp2.dispData();
	cout <<"\nThird employee deatils: ";
	emp3.dispData();
		break;
    	
    	
	case 2:{
		system("cls");
		counter1 x[3];
              for(int i=0;i<3;i++)
              {
                x[i].show();
              }
	            	break;
					}	 
		
		case 3:
		system("cls");
	        char choice;
               fraction f;
                 do{
                    f.getdata();
                    f.showdata();
                       cout<<"do you want to continue (y,n)";
                           cin>>choice;         
						   }
                                while(choice=='y');
	                       	break;
		
		case 4:
		system("cls");
	            ship ship1,ship2;
                ship1.getposition();
                ship2.getposition();
                ship1.display();
                ship2.display();
		break;
	}
          	cout<<"\n\nWhat Are you choose";
              cout<<"\n\n1:Main Menu"<<endl;
               cout<<"\n\n2:Program Menu"<<endl;
                 cout<<"\n\n3:Last Menu"<<endl;
                   cin>>rpt;
                   if(rpt==1){
                   	goto label;
                     }
                     if (rpt==2){
                    	goto start;
                        }
                   if(rpt==3)
                     {
					 goto i;
                     }
                   else{
                     cout<<"Invalid Option choose";
					 }

logic:
     	system("cls");
    cout <<"       Inheritence Program  		\n"<<endl;
    cout<<"1. Function Overriding \n";
    cout<<"2. Type of Inheritence  \n";
    cout<<"3. Multilevel Inheritance\n";
    cout<<"4. Multiple Inheritance \n";
    cout<<"Enter your choice"<<endl;
    cin>>dell;
    if(dell==1){
    	goto j;}
	if(dell==2){
    	goto k;}
	if(dell==3){
    	goto l;}
	if(dell==4){
    	goto m;}
	else {
	cout<<"invalid";}
	j:
	system("cls");
    cout <<"      Inhritance 		\n"<<endl;
    cout<<"1. Accessing Members of Parent Class  \n";
    cout<<"Enter Program number";
    cin>>j;
    switch(j)
    {
    		case 1:{
			
		system("cls");
     	Child obj1,obj2('@',100);
     	cout<<"Object as follow 1:";
	    obj1.show();
	    obj1.display();
		cout<<"Object as follow 2:";
     	obj2.show();
	    obj2.display();
		break;}
    	
	}
          	cout<<"\n\nWhat Are you choose";
             cout<<"\n\n1:Main Menu"<<endl;
                cout<<"\n\n2:Program Menu"<<endl;
                 cout<<"\n\n3:Last Menu"<<endl;
                  cin>>rpt;
                  if(rpt==1){
                 	goto label;
                    }
                     if (rpt==2){
                  	goto logic;
                     }
                     if(rpt==3)
                      {
					  goto j;
                       }
                 else{
                    cout<<"Invalid Option choose";}

k:
	system("cls");
    cout <<"      Function Overriding		\n"<<endl;
    cout<<"1.   Function Overiding  \n";
    cout<<"2. Function Overiding with add/ sub/ mul  \n";
    cout<<"Enter Program number";
    cin>>k;
    switch(k)
    {
    		case 1:{
		
		system("cls");
		Child1 obj('@',100);
     	obj.show();
		break;}
		
			case 2:
		system("cls");
		Large obj;
	obj.add();
	obj.in();
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
	break;
	}
	       cout<<"\n\nWhat Are you choose";
             cout<<"\n\n1:Main Menu"<<endl;
              cout<<"\n\n2:Program Menu"<<endl;
                cout<<"\n\n3:Last Menu"<<endl;
                cin>>rpt;
                   if(rpt==1){
                   	goto label;
                    }
                   if (rpt==2){
                	goto logic;
                    }
                    if(rpt==3)
                   {
				   goto k;
                    }
                else{
                     cout<<"Invalid Option choose";}
l:
	system("cls");
    cout <<"     Type of Inheritence 		\n"<<endl;
    cout<<"1. Public Inheritance  \n";
    cout<<"2. Private Inheritance  \n";
    cout<<"3. Protected Inheritance \n";
    cout<<"Enter Program number";
    cin>>l;
    switch(l)
    {
    		case 1:
		system("cls");
	Studying obj;
	obj.in();
	obj.out();
		break;
    	
    	case 2:
		system("cls");
			Studying1 obj1;
	obj.in();
	obj.out();
	break;
	case 3:
		system("cls");
			Studying2 obj2;
	obj.in();
	obj.out();
		break;	
	}
            	cout<<"\n\nWhat Are you choose";
                cout<<"\n\n1:Main Menu"<<endl;
                cout<<"\n\n2:Program Menu"<<endl;
                cout<<"\n\n3:Last Menu"<<endl;
                cin>>rpt;
               if(rpt==1){
	             goto label;
                  }
                if (rpt==2){
                	goto logic;
                 }
                  if(rpt==3)
                {
				goto l;
                  }
                 else{
                   cout<<"Invalid Option choose";}
m:
	system("cls");
    cout <<"      Multilevel Inheritance 		\n"<<endl;
    cout<<"1. Multilevel Inheritance \n";
    cout<<"2. Student Information  \n";
    cout<<"Enter Program number";
    cin>>m;
    switch(m)
    {
    		case 1:
		system("cls");
	Sami obj;
	obj.in();
	obj.out();
		break;
    	
    	case 2:
		system("cls");
		result5 t;
		t.getinfo();
		t.getinfo();
		t.show();
		t.show();
	break;	
	}
	        cout<<"\n\nWhat Are you choose";
             cout<<"\n\n1:Main Menu"<<endl;
              cout<<"\n\n2:Program Menu"<<endl;
                cout<<"\n\n3:Last Menu"<<endl;
                 cin>>rpt;
                  if(rpt==1){
                 	goto label;
                   }
                   if (rpt==2){
                  	goto logic;
                     }
                   if(rpt==3)
                    {
					goto m;
                    }
                   else{
                 cout<<"Invalid Option choose";}

                              
sami:
     	system("cls");
    cout <<"      Oprtator Overloading 		\n"<<endl;
    cout<<"1. Binary operator loading \n";
    cout<<"2. Operator Overloading  \n";
    cout<<"3. Operator Overloading with Return Value \n";
    cout<<"4. Overloading with Postfix Increment \n";
    cout<<"5. Arthmetic Operator \n";
    cout<<"6. Value Of Arthmetic Operator \n";
    cout<<"Enter your choice"<<endl;
    cin>>hp;
    switch(hp)
{
    	case 1:{
    		system("cls");
    		Complex complex1, complex2, result;
    cout << "Enter first complex number:\n";
    complex1.input();
    cout << "Enter second complex number:\n";
    complex2.input();
    result = complex1 + complex2;
    result.output();
    		break;}
    case 2:{
    		system("cls");
    			Samii obj;
	obj.show();
	obj.operator ++();
	obj.show();
    		break;}
	case 3:{
    		system("cls");
    		Samiu a,b;
	a.show();
	b.show();
	b=++a;
	a.show();
	b.show();
    		break;}
	case 4:{
    		system("cls");
    		Samiul a;
	a.show();
	++a;
	a++;
	a.show();
    		break;}
	case 5:{
    		system("cls");
    		Add x,y,z;
	x.in();
	y.in();
	z=x+y;
	x.show();
	y.show();
	z.show();
    		break;}
	case 6:{
    		system("cls");
    		String s1,s2,s3;
s1.in();
s2.in();
cout<<"S1=";
s1.show();
cout<<"S2=";
s2.show();
cout<<"S3=";
s3.show();
cout<<"Result s1,s2,s3";
s3=s1+s2;
cout<<"S3=";
s3.show();
    		break;}
    
	     cout<<"\n\nWhat Are you choose";
          cout<<"\n\n1:Main Menu"<<endl;
           cout<<"\n\n2:Program Menu"<<endl;
            cout<<"\n\n3:Last Menu"<<endl;
             cin>>rpt;
              if(rpt==1){
                	goto label;
                }
              if (rpt==2){
               	goto start;
                }
                if(rpt==3)
                {
				goto sami;
                }
                 else{
                cout<<"Invalid Option choose"; 
			}
       }
}

