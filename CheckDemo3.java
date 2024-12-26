  
/*
    cWrite java Program which accepts N Number from user and accept one another number
    as No, return index of last occarance of that No:

    Input: 
         N = 5
         No = 66
         Elements: 10 55 66 55 66

    
    Output: 4
*/

import java.util.*;

class CheckClass
{
    public int LastChk(int Brr[],int iNo)
    {
        int iCnt = 0;
        int iIndexOcc = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                iIndexOcc = iCnt;
            
            }
            else
            {
                iIndexOcc = -1;
            }
        }
        return iIndexOcc;
       
    }
}


class CheckDemo3
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

        System.out.println("Enter the number that you want to search:");
        iCheckNo = sobj.nextInt();

        CheckClass obj = new CheckClass();
        iRet = obj.LastChk(Arr, iCheckNo);

        if(iRet == -1)
        {
            System.out.println("There is no Such element is present");
        }
        else
        {
            System.out.print("Element is occars  at index: "+iRet);
        }
    }
}



