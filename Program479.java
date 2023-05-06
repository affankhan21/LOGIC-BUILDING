import java.util.*;

class Program479
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        System.out.println(str.length());
        System.out.println(Arr.length);

        int Count = 0;

        for(char Ch : Arr)
        {
            if((Ch >= 'a') && (Ch <= 'z'))
            {
                Count++;
            }
        }

        System.out.println("Small characters are : "+Count);
    }
}