import java.util.*;
import java.io.*;

class Program406
{
    public static void main(String Ar[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            FileInputStream fiobj = new FileInputStream(fobj);

            byte Buffer[] = new byte[100];
            int ret = 0;
        
            while((ret = fiobj.read(Buffer)) != -1)
            {
                System.out.println(Buffer);
            }

        }
        else
        {
            System.out.println("There is no such file");
        }

    }
}