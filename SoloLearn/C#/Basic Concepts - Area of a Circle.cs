using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            const double pi = 3.14;
            double radius;
            
            //your code goes here
            radius = Double.Parse(Console.ReadLine());
            double area = pi * radius*radius;
    
            Console.WriteLine(area);           
            
        }
    }
}