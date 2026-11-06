import java.util.Scanner;

class program61
{
        public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;

        Iteration iteration = new Iteration();

        System.out.println("Enter the frequency: ");
        iValue = scanner.nextInt();

         iteration.Display(iValue);
       

    }
}

class Iteration
{
public void Display(int iNo)
    {
        int iCnt = 0;
        
        
        for(iCnt = 1;iCnt <=iNo; iCnt++)
        {
        System.out.println("-------------");        //static line
        System.out.println(iCnt);                  //Dynamic line (like output will change 1,2,3,4,5.....)
        System.out.println("-------------");
        }
        
    }

}