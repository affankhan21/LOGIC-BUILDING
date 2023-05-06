import java.util.*;
import java.io.*;

class Program404
{
    public static void main(String Ar[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            System.out.println("File size if : "+fobj.length());
        }
        else
        {
            System.out.println("There is no such file");
        }

    }
}