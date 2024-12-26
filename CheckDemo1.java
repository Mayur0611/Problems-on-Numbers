
 
/* 
    Write java Program which accepts N Number from User and Accept one another number
    as No, Chech Whether No is Present or Not:

    Example:    Input:
                      N = 6   Elements: 10 20 30 56 55
                      No = 30

                OutPut:  TRUE

*/

import java.util.*;

class CheckClass
{

    public boolean Check(int Brr[],int iNo)
    {
        boolean bFlag = false;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
}
class CheckDemo1
{
    public static void main(String Arg[])
    {
        int iArrlen= 0;
        int iCnt = 0;
        int iCheckNo = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the count of elements:");
        iArrlen = sobj.nextInt();


        int Arr[] = new int[iArrlen];
    
        System.out.println("Enter the elements:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the number that you want to search:");
        iCheckNo = sobj.nextInt();

        CheckClass obj = new CheckClass();
        bRet = obj.Check(Arr, iCheckNo);

        if(bRet == true)
        {
            System.out.println("Element is present");
        }
        else
        {
            System.out.println("Element is NOT present");
        }
    }
}



