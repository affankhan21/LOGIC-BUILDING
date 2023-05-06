import java.util.*;

class Student
{
    public String Sname;
    public int Marks;
    public int Rollno;

    public static int Generator;

    static
    {
        Generator = 0;
    }

    public Student(String str, int no)
    {
        this.Sname = str;
        this.Marks = no;
        Generator++;
        this.Rollno = Generator;
    }

    public void Display()
    {
        System.out.println("Roll No : "+Rollno+" Name : "+Sname+" Marks : "+Marks);
    } 
}

class Program490
{
    public static void main(String Arg[])
    {
        Student obj1 = new Student("Kartik",89);
        Student obj2 = new Student("Rutuja",91);
        Student obj3 = new Student("Ankit",80);

        obj1.Display();
        obj2.Display();
        obj3.Display();

    }
}