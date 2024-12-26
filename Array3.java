/*
   Write a java program which accept N Numbers from user and display
   such elements which are even and divisible by 5:

   Example: 
        Input: 5
        Elements: 10 20  44 38 25
        OutPut:  10 20 
*/

import java.util.*;

class ArrayDemo
{ 
    public void Display(int Arr[])
    {
        int iCnt = 0;
        System.out.print("Elements are even & Divisible by 5 are: ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 5 == 0 && Arr[iCnt] % 2 == 0)
            {
                System.out.print(Arr[iCnt]+" ");
            }
        }
           
    }
}

class Array3
{
    public static void main(String Arg[])
    {
        int Arrlen = 0;
        int iCnt = 0;
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
        obj.Display(ArrayList);
    }
}