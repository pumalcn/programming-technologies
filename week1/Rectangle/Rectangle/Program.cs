using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Globalization;

namespace Rectangle
{

    class RRectangle
    {
        public double len;
        public double wid;
        public double diag;
        public double area;
        public double perim;

        public RRectangle(double len, double wid)
        {
            this.len = len;
            this.wid = wid;
        }

        public double findArea(double len, double wid)
        {
            return area = len * wid;
        }

        public double findPer(double len, double wid)
        {
            return perim = 2 * (len + wid);
        }

        public double findDiag(double len, double wid)
        {
            return diag = Math.Sqrt(Math.Pow(len, 2) + Math.Pow(wid, 2));
        }
    }



    class Program
    {
        static void Main(string[] args)
        {
            double a, b;
            a = double.Parse(Console.ReadLine());
            b = double.Parse(Console.ReadLine());

            RRectangle rec = new RRectangle(a, b);

            double arrea, diagg, perr;
            arrea = rec.findArea(a, b);
            diagg = rec.findDiag(a, b);
            perr = rec.findPer(a, b);

            Console.Write("Area:");
            Console.WriteLine(arrea);

            Console.Write("Perimeter:");
            Console.WriteLine(perr);

            Console.Write("Diagonal:");
            Console.WriteLine(diagg);
        }
    }
}