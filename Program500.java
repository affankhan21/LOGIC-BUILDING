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

class DBMS
{
    public LinkedList <Student> lobj;

    public DBMS()
    {
        lobj = new LinkedList();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous Customised DBMS started succesfully...");
    }

    // All SQL queries should be implemented here

    // insert into student values(_____, _____);
    public void Insert(String str, int no)
    {
        Student sobj = new Student(str,no);
        lobj.add(sobj);
    }

    // select * from student;
    public void DisplayAll()
    {
        for(Student sref : lobj)
        {
            sref.Display();
        }
    } 

    // Select * from stundet where Rollno = 3
    public void DisplaySpecific(int Value)
    {
        for(Student sref : lobj)
        {
            if(sref.Rollno == Value)
            {
                sref.Display();
                break;
            }
        }
    }

    // Select * from student where Name = 'Rutuja';
    public void DisplaySpecific(String str)
    {
        for(Student sref : lobj)
        {
            if(str.equals(sref.Sname))
            {
                sref.Display();
                break;
            }
        }
    }

    // delete from student where Rollno = 3;
    public void Delete(int no)
    {
        int index = 0;

        for(Student sref : lobj)
        {
            if(sref.Rollno == no)
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    // delete from student where Sname = 'Ram';
    public void Delete(String str)
    {
        int index = 0;

        for(Student sref : lobj)
        {
            if(str.equals(sref.Sname))
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    public void Sum()
    {
        int iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + (sref.Marks);
        }

        System.out.println("Summation of marks : "+iSum);
    }

    public void Avg()
    {
        int iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + (sref.Marks);
        }

        System.out.println("Average of marks : "+(iSum / lobj.size()));
    }

    public void Max()
    {
        int iMax = 0;

        for(Student sref : lobj)
        {
            if(iMax < sref.Marks)
            {
                iMax = sref.Marks;
            }
        }

        System.out.println("Maximum marks are : "+iMax);
    }

    public void Min()
    {
        Student s = lobj.get(0);

        int iMin = s.Marks;

        for(Student sref : lobj)
        {
            if(iMin > sref.Marks)
            {
                iMin = sref.Marks;
            }
        }

        System.out.println("Minimum marks are : "+iMin);
    }

}

class Program500
{
    public static void main(String Arg[])
    {
        DBMS dobj = new DBMS();

        dobj.StartDBMS();

        dobj.Insert("Kartik",90);
        dobj.Insert("Rutuja",96);
        dobj.Insert("Ankit",80);
        dobj.Insert("Pooja",67);
        dobj.Insert("Ram",91);

        dobj.DisplayAll();

        dobj.DisplaySpecific(3);
        dobj.DisplaySpecific("Rutuja");

        dobj.Delete(3);
        dobj.Delete("Ram");

        System.out.println("Final data");

        dobj.DisplayAll();

        dobj.Sum();
        dobj.Max();
        dobj.Min();
        dobj.Avg();
    }
}