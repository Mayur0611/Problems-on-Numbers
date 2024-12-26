/*
   Write a java program which accept N Numbers from user and return
   difference between summation of even elements and summation of 
   odd elements:
*/

import java.util.*;

class ArrayDemo
{
    
    public int Difference (int Arr[])
    {
        int iCnt = 0;
        int iAddEven = 0;
        int iAddOdd = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iAddEven = iAddEven + Arr[iCnt];
            }
            else 
            {
                iAddOdd = iAddOdd + Arr[iCnt];
            }
        }
        return iAddEven - iAddOdd;   
    }
}

class Array
{
    public static void main(String Arg[])
    {
        int Arrlen = 0;
        int iCnt = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Count of elements: ");
        Arrlen = sobj.nextInt();

        int ArrayList[] = new int[Arrlen];

        System.out.println("Enter the elements: ");
        for(iCnt= 0; iCnt < ArrayList.length; iCnt++)
        {
            ArrayList[iCnt] = sobj.nextInt();
        }

        ArrayDemo obj = new ArrayDemo();
        iRet = obj.Difference(ArrayList);

        System.out.println("Difference is: "+iRet);

    }
}