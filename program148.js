function DisplayFactor(iNo)
{
   let iCnt = 0;

   console.log("Factor of: ",iNo);

   for(iCnt = 1; iCnt <= iNo/2; iCnt++)
   {
      if((iNo % iCnt) == 0)
      {
         console.log("Factor is: ",iCnt);
      }
   }
}

function main()
{
   DisplayFactor(12);
}

main()