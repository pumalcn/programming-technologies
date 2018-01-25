using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Circle
{
    class CCircle
    {
        public int R;
        public double area;
        public double diameter;
        public double circumference;

        public CCircle(int R)
        {
            this.R = R;
        }
        public double F1(int R)
        {
            return area = Math.PI * R * R;
        }


        public double F2(int R)
        {
            return diameter = 2 * R;
        }
        public double F3(int R)
        {
            return circumference = 2 * Math.PI * R;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int R;
            R = int.Parse(Console.ReadLine());

            CCircle circ = new CCircle(R);
            double arrea, ddiameter, ccircumference;
            arrea = circ.F1(R);
            ddiameter = circ.F2(R);
            ccircumference = circ.F3(R);
            Console.Write("Area:");
            Console.WriteLine(arrea);

            Console.Write("Diameter:");
            Console.WriteLine(ddiameter);

            Console.Write("Circumference:");
            Console.WriteLine(ccircumference);

        }
    }
}
