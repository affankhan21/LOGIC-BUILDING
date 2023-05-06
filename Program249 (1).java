import java.util.*;

class Arithematic
{
    public int iValue1;     // Chracteristics
    public int iValue2;     // Chracteristics

    public Arithematic(int i, int j)    // Parametrised constructor
    {
        iValue1 = i;
        iValue2 = j;
    }

    public int Addition()       // Behaviour
    {
        int Sum = 0;
        Sum = iValue1 + iValue2;
        return Sum;
    }
}

class Program249
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iNo2 = 0, iAns = 0;
        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1,iNo2);
        iAns = aobj.Addition();

        System.out.println("Addition is : "+iAns);
    } 
}