import java.io.BufferedReader;
import java.util.*;
import java.io.IOException;
import java.io.InputStreamReader;
class Triangle{
    int a,b,c;
    public double getArea(){
      double s = (a+b+c)/2.0;
      return Math.pow((s*(s-a)*(s-b)*(s-c)),.5);
    }
    public double getPerimeter(){
      return (a+b+c)/2.0;
    }
  }
  class Vehicle {
    void run() {
      System.out.println("Vehicle is running.");
    }
  }
  
  class Car extends Vehicle {
    void run() {
      System.out.println("Car is running.");
    }
  }
  class Demo{
    int a;
    Demo(int i) { a = i; }
    Demo incrByTen()
    {
        Demo temp = new Demo(a + 10);
        return temp;
    }
}
class Rectangle{
    int length;
    int breadth;
    public Rectangle(int l, int b){
      length = l;
      breadth = b;
    }
    public int getArea(){
      return length*breadth;
    }
    public int getPerimeter(){
      return 2*(length+breadth);
    }
  }
  class Pclass{
    public void pmethod(){
      System.out.println("This is parent class");
    }
  }
  
  class Cclass extends Pclass{
    public void cmethod(){
      System.out.println("This is child class");
    }
  }
  class Company {
    String name;
  
    // public constructor
    public Company() {
      name = "Samiullah";
    }
  }
  class Complex{
    int real;
    int imag;
    public Complex(int r, int i){
      real = r;
      imag = i;
    }
  
    public static Complex add(Complex a, Complex b){
      return new Complex((a.real+b.real),(a.imag+b.imag));
    }
  
    public static Complex diff(Complex a, Complex b){
      return new Complex((a.real-b.real),(a.imag-b.imag));
    }
  
    public static Complex product(Complex a, Complex b){
      return new Complex(((a.real*b.real)-(a.imag*b.imag)),((a.real*b.imag)+(a.imag*b.real)));
    }
  
    public void printComplex(){
      if(real == 0 && imag!=0){
        System.out.println(imag+"i");
      }
      else if(imag == 0 && real!=0){
        System.out.println(real);
      }
      else{
        System.out.println(real+"+"+imag+"i");
      }
    }
  
  }
  class AreaOfCircle {
    private float radius = 0.0f;
    private float area = 0.0f;
    private float perimeter = 0.0f;
    public void readRadius() {
      try (Scanner scc = new Scanner(System.in)) {
        System.out.print("Enter radius:");
        radius = scc.nextFloat();
      }
    }
    public float getArea() {
      area = (float)Math.PI*radius*radius;
      return area;
    }
    public float getPerimeter() {
      perimeter = 2 * (float)Math.PI * radius;
      return perimeter;
    }
  }
    class Area{
       int length;
       int breadth;
    public Area(int l, int e){
        length = l;
        breadth = e;
    }
    public int getArea(){
      return length*breadth;
    }
  }
    class Student{
       String name;
       int rollno;
  }
     class Animal {
        public void eat() {
        System.out.println("I can eat");
    }
  }
      class Dog extends Animal {
        public void eat() {
        super.eat();
        System.out.println("I eat dog food");
    }
    public void bark() {
      System.out.println("I can bark");
    }
  }
     class Base {
         void BaseMethod() {
         System.out.println("Samiullah");
    }
  }
      class Derived extends Base {
          void DerivedMethod() {
          System.out.println("Sami.");
    }
  }
      class A {
         protected void MethodA() {
         System.out.println("MethodA called");
    }
  }
  
     class B extends A {
          protected void MethodB() {
          System.out.println("MethodB called");
    }
  }
     
      class C extends B {
          protected void MethodC() {
          System.out.println("MethodC called");
    }
  }
      class Member{
         String name;
         int age;
         String number;
          String address;
         int salary;
  
       public void printSalary(){
          System.out.println(salary);
    }
  
  }
  
      class Employee extends Member{
          String specialization;
  }
  
       class Manager extends Member{
           String department;
           public String specialization;
  }

       class one {
           public void print_geek()
    {
           System.out.println("java  ");
    }
}
  
     class two extends one {
          public void print_for() { System.out.println("for"); }
}
     class Shape {
          public void display() {
          System.out.println("Inside display");
  }
}
     class Rectang extends Shape {
         public void area() {
         System.out.println("Inside area");
  }
}
      class Cube extends Rectang {
          public void volume() {
          System.out.println("Inside volume");
  }
}

       class Bicycle {
            public int gear;
            public int speed;
            public Bicycle(int gear, int speed)
  {
            this.gear = gear;
            this.speed = speed;
  }
         public void applyBrake(int decrement)
  {
              speed -= decrement;
  }
              public void speedUp(int increment)
  {
              speed += increment;
  }
        public String toString()
  {
              return ("No of gears are " + gear + "\n"
              + "speed of bicycle is " + speed);
  }
}
        class MountainBike extends Bicycle {
              public int seatHeight;
              public MountainBike(int gear, int speed,
                      int startHeight)
  {
             super(gear, speed);
             seatHeight = startHeight;
  }
        public void setHeight(int newValue)
  {
               seatHeight = newValue;
  }
        @Override public String toString()
  {
         return (super.toString() + "\nseat height is "
              + seatHeight);
  }
} 


  public class javaproject  {
    public static int calculator(int a, int b)
    { 
        int sum = a + b;
        return sum;
    }
        public static void main (String args[]) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int loop_option = 0;
       
    do
{
  
    System.out.println("\t\t|~~~~~~~~~~~~~~~~~~~~~~~~|");
    System.out.println("\t\t|*Its my Third Project*  |");
    System.out.println("\t\t|Samiullah Java Project  |");
    System.out.println("\t\t|  2021-ag-9411          |");
    System.out.println("\t\t| Welcome To Java Project|");
    System.out.println("\t\t|________________________|");
    System.out.println("1.Program about two number");
    System.out.println("2.Class About Triangle");
    System.out.println("3.Class about Vechile");
    System.out.println("4.Class  about Returning");
    System.out.println("5.Class about Rectangle");
    System.out.println("6.inheritence a program");
    System.out.println("7.Class in imaginary or real");
    System.out.println("8.Class area of Circle");
    System.out.println("9.Circle class");
    System.out.println("10.Table of 5");
    System.out.println("11.Student class");
    System.out.println("12.Inheritence a group of animals");
    System.out.println("13.Mulilevel program 2");
    System.out.println("14.Multilevel inheritence");
    System.out.println("15.Employe data in inheritence");
    System.out.println("16.Mutilevel inheritence");
    System.out.println("17.Disply sides");
    System.out.println("18.Bike gear in iheritence");
    System.out.println("19.Adding two number");
    int option = Integer.parseInt( br.readLine());
    switch(option)
  {
      case 1:
           Scanner sc = new Scanner(System.in);
           System.out.println("Enter Two number");
           int a = sc.nextInt();
           int b = sc.nextInt();
           int sum = calculator(a,b);
        System.out.println("Sum of two number:"+sum);
        break;


      case 2:
            Triangle t = new Triangle();
            t.a = 2;
            t.b = 5;
            t.c = 6;
            System.out.println(t.getArea());
            System.out.println(t.getPerimeter());
         break;


      case 3:
          Vehicle obj1 = new Car();
          obj1.run();
          Vehicle obj2 = new Vehicle();
          obj2.run();
         break;


      case 4:
          Demo ob1 = new Demo(2);
          Demo ob2;
          ob2 = ob1.incrByTen();
          System.out.println("1: " + ob1.a);
          System.out.println("2: " + ob2.a);
         break;


      case 5:{
          Rectangle c = new Rectangle(4,5);
          Rectangle d = new Rectangle(5,8);
          System.out.println("Area : "+c.getArea()+" Perimeter is "+c.getPerimeter());
          System.out.println("Area : "+d.getArea()+" Perimeter is "+d.getPerimeter());}
         break;


      case 6:
          Pclass m = new Pclass();
          Cclass n = new Cclass();
          m.pmethod();
          n.cmethod();
          n.pmethod();
         break;


      case 7:
           Company obj = new Company();
           System.out.println("Company name = " + obj.name);
         break;


      case 8:
           Complex c = new Complex(4,5);
           Complex d = new Complex(9,4);
           Complex e = Complex.add(c,d);
           Complex f = Complex.diff(c,d);
           Complex g = Complex.product(c,d);
           e.printComplex();
           f.printComplex();
           g.printComplex();
         break;


      case 9:
           AreaOfCircle area = new AreaOfCircle();
           area.readRadius();
           System.out.println("Area of circle:" + area.getArea());
           System.out.println("Perimeter of circle:" + area.getPerimeter());
         break;

      case 10:
      
            int num = 5;
            for(int i = 1; i <= 10; ++i)
            {
               System.out.printf("%d * %d = %d \n", num, i, num * i);
            }
         break;


      case 11:
          Student s = new Student();
          s.name = "John";
          s.rollno = 2;
          System.out.println("Name is "+s.name+" and roll number is "+s.rollno);
         break;

      case 12:
           Dog labrador = new Dog();
           labrador.eat();
           labrador.bark();
         break;

      case 13:
           Derived objj= new Derived();
           objj.BaseMethod();
           objj.DerivedMethod();
         break;

      case 14:
           C objs = new C();
           objs.MethodA();
           objs.MethodB();
           objs.MethodC();
         break;


      case 15:
           Employee h = new Employee();
           h.name = "xyz";
           h.age = 23;
           h.number = "986****";
           h.address = "xyzxyz";
           h.salary = 1231;
           h.specialization = "xyzxyz";
           Manager i = new Manager();
           i.name = "xyz";
           i.age = 23;
           i.number = "986****";
           i.address = "xyzxyz";
           i.salary = 1231;
           i.specialization = "xyzxyz";
         break;
      
      case 16:
           two j = new two();
           j.print_geek();
           j.print_for();
           j.print_geek();
         break;


      case 17:
           Cube st = new Cube();
           st.display();
           st.area();
           st.volume();
         break;


      case 18:
           MountainBike mb = new MountainBike(3, 100, 25);
           System.out.println(mb.toString());
        break;


      case 19:
           int p=10;    
           int q=10;    
           int r=p+q;    
           System.out.println(r); 
         break;

              default:
                    System.out.println("Please choose the valid option");
                    break;
        }
             System.out.println("if U want 2 use further press 1 to continue...");
             loop_option=Integer.parseInt(br.readLine());
             System.out.println("\033[H\033[2J");
          }

             while (loop_option == 1);
            System.out.println("The STUDENT program is terminating now.");
 System.out.println("\033[H\033[2J");
        }
          }