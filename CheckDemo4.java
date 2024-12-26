  
/*
    cWrite java Program which accepts N Number from user and accept Range
   Display all element from that range:

   Example:
    Input: 
         N = 5
         RangeStart = 30
         RangeEnd = 50
         Elements: 12 31 55 52 46
    
    Output: 31 46
*/

import java.util.*;

class CheckClass
{
    public void DisplayElement(int Brr[], int iStart, int iEnd)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] > iStart && Brr[iCnt] < iEnd)
            {
                System.out.print(Brr[iCnt] + " ");
            }
           
        }
    }
   
}


class CheckDemo4
{
    public static void main(String Arg[])
    {
        int iArrlen= 0;
        int iCnt = 0;
        int iRangeStart = 0;
        int iRangeEnd = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the count of elements:");
        iArrlen = sobj.nextInt();


        int Arr[] = new int[iArrlen];
    
        System.out.println("Enter the elements:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the range of element that you want to search:"); 

        System.out.println("Range Start from:");
        iRangeStart = sobj.nextInt();

        System.out.println("Range End at:");
        iRangeStart = sobj.nextInt();

        CheckClass obj = new CheckClass();
        obj.DisplayElement(Arr, iRangeStart,iRangeEnd);

    }
}



