import java.util.*;

class Program504
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        HashMap <Character, Integer> hobj = new HashMap();
        int Frequency = 0;

        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch);
                hobj.put(ch,Frequency+1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }

        Set <Character> setobj = hobj.keySet();

        int iMax = 0;
        char CMax = ' ';

        for(char value : setobj)
        {
            if(iMax < hobj.get(value))
            {
                iMax = hobj.get(value);
                CMax = value;
            }
        }

        System.out.println("Maximum times occured character is : "+CMax+" with frequency "+iMax);
    }
}