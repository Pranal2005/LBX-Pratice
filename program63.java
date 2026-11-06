class program63
{
        public static void main(String A[])
    {
        Iteration iteration = new Iteration();

        iteration.Display();
       

    }
}

class Iteration
{
public void Display()
    {
        int iCnt = 0;
        
        for(iCnt = 6;iCnt <= 6; iCnt--)     //Infinite loop (control+c) to stop loop
        {
        System.out.println("Jay Ganesh...");
        }
        
    }

}