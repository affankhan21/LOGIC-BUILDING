import java.util.*;

class Program482
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i=0; i< Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i]<= 'Z'))
            {
                Arr[i] = (char)(Arr[i] + 32);
            }
        }

    }
}