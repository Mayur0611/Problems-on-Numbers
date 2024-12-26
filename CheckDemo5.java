  
/*
    Write java Program which accepts N Number from user and return product
    of all numbers:

    Input: 
         N = 5
         Elements: 1 2 3 4 5
    
    Output: 120
*/

import java.util.*;

class CheckClass
{
    public int ProductX(int Brr[])
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 0; iCnt < Brr.length; iCnt++);
        {
            iMult = iMult * Brr[iCnt];
        } 

        return iMult;  
    }

}

class CheckDemo5
{
    public static void main(String Arg[])
    {
        int iArrlen= 0;
        int iCnt = 0;
        int iCheckNo = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the count of elements:");
        iArrlen = sobj.nextInt();


        int Arr[] = new int[iArrlen];
    
        System.out.println("Enter the elements:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        CheckClass obj = new CheckClass();
        iRet = obj.ProductX(Arr);

        System.out.println("Product of all elements is "+iRet);

  
    }
}



