import java.util.*;

class Numbers
{
    public void EvenFactorsDisplay(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo/2); iCnt+=2) // iCnt = iCnt + 2
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println("Even factor is : "+iCnt);
            }
        }

    }
}

class Program253
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.EvenFactorsDisplay(iNo);
    }
}