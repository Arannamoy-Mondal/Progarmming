import java.util.*;//for whole packages
//import bank;
class Pen{
    String color;
    String type;
    public void write()
    {
        System.out.println("writing something");
    }
    public void printcolor()
    {
        System.out.println(this.color);
    }
}
class Student{
    String name;
    int age;
    public void pname(){
        System.out.println(this.name);
        System.out.println(this.age);
    }
    /*Polymorphism start*/
    public void printinfo(String s)
    {System.out.println(s);}
    public void printinfo(int age){
        System.out.println(age);
    }
    public void printinfo()
    {
        System.out.println(this.name+" "+this.age);
    }
    Student(String name,int age)
    {
        this.name=name;
        this.age=age;
    }
    /*Polymorphism end*/
    Student(Student s2)//copy constructor 
    {
        this.name=s2.name;
        this.age=s2.age;
    }
}
/*Inheritance start */
class Shape{
    String color;
    public void area()
    {
        System.out.println("display area");
    }
}
class trinagle extends Shape//inherit class Shape.single level inheritance
{
    public void area(int l,int h)
    {
        System.out.println((1/2)*l*h);
    }
    public void printinfo()
    {
        System.out.println(this.color);
    }
}
class Equilateral extends trinagle//multilevel inheritance
{
    public void area(int l,int h)
    {
        System.out.println((1/2)*l*h);
    }
}
class Circle extends Shape//hierarchial inheritance
{
    public void area(int r)
    {
        System.out.println(3.14*r*r);
    }
}
/*Inheritance Start*/
/*Abstraction: It's like abstract noun. Like Blueprint or mind game.*/
abstract class Animal
{
    abstract void walk();
    Animal()
    {System.out.println("You are creating a new animal");}
    public void eat()
    {
        System.out.println("Leaf");
    }
}
class Horse extends Animal
{
    Horse()
    {
        System.out.println("You create a horse.");
    }
    public void walk()
    {
        System.out.println("Walks on 4 legs");
    }
}
class Chicken extends Animal
{
    public void walk()
    {
        System.out.println("Walks on 2 legs");
    }
}
/*Abstraction*/
public class oops {
   public static void main(String args[])
   {
    Scanner sc=new Scanner(System.in);
    Pen pen1=new Pen();
    //String x=sc.nextLine();
    //pen1.color=x;
    pen1.type="Ballpoint";
    pen1.printcolor();
    Pen pen2=new Pen();
    pen2.color="Green";
    pen2.type="Ballpoint";
    pen2.printcolor();
    Student st2=new Student("Abc",22);
    // st1.name="Abc";
    // st1.age=22;
    st2.pname();
    st2.printinfo();
    /*inheritance */
    trinagle t1=new trinagle();
    t1.color="red";
    t1.printinfo();
    Horse horse=new Horse();
    horse.walk();
    //Animal animal=new Animal();
   }
}
/* 
Abstraction:
1. Show important thing and do not show important thing.This give compliation error.
2. 
------------------------------------------
Inheritance:
Transform properties from one class to another class.
Give Class ===> Base Class
Taken Class ===> Chile Class
4 types in java,5 types in java
Single level of inheritance: Base Class ---> Derived Class
Multilevel inheritance: Base Class ----> Derived Class ----> Deriverd Class
Hierarchial inheriatnce: Base Class ----> ( Derived Class + Deriverd Class )
Hybrid inheritance: Combine of all 3 heritance
----------------------------------------------
Encapsulation:
Cover the class & objects. Encapsulation means Data hiding & showing.
----------------------------------------------
Polymorphism  Poly means many, 
morphism forms.One work by many path. 
1Function Overloading(Different Different 
function in same name.),
2.
Access Modifiers:
4 types in java,3 types in C++.
(a) Public type
(b) Private type
(c) Protected type
(d) Default type
*/