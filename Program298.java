import java.util.*;

/*
    Input : Hello

    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o  

*/

class Pattern
{
    public void Display(String str)
    {
        int i = 0, j = 0;

        for(i = 0; i< str.length(); i++)
        {
            for(j = 0; j < str.length(); j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }
            System.out.println();
        }      
    }
}

class Program298
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String s = sobj.nextLine();
        
        pobj.Display(s);
    }
}