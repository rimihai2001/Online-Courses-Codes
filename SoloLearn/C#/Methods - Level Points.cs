using System;
using System.Collections.Generic;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int levels = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine(Points(levels));
        }

        
        static int Points(int levels)
        {
            //your code goes here
            int sum=0;
            for(int i=1; i<=levels; i++)
                sum=sum+i;
            return sum;
        }

    }

}