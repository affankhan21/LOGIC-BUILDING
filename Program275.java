import java.util.*;

class Program275
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please string : ");
        String str = sobj.nextLine();
        
        char Arr[] = str.toCharArray();

        for(int i=0; i< Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}