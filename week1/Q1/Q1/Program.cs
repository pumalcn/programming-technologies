using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Q1
{
    class Program
    {
        static void Main(string[] args)
        {
            string l = Console.ReadLine(); // Считываем данные
            string[] arr = l.Split(' ');
            for (int i = 0; i < arr.Length; i++)
            {
                bool temp = true;
                if (int.Parse(arr[i]) == 1)
                {
                    continue;
                }
                else for (int j = 2; j < Math.Sqrt(int.Parse(arr[i])); i++)
                    {
                        if (x % i == 0)
                        {
                            temp = false;
                            break;
                        }
                        if (temp = true)
                        {
                            Console.Write(arr[i] + " ");
                        }

                    }
            }
            Console.ReadKey();

        }
    }
}
    

