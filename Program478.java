import java.util.*;

class Program478
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

        for(int i=0; i< Arr.length; i++)
        {
            if((Arr[i] >= 'a') && (Arr[i]<= 'z'))
            {
                Count++;
            }
        }

        System.out.println("Small characters are : "+Count);
    }
}