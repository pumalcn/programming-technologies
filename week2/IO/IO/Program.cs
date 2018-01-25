using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace IO
{
    public class Prime
    {
        public static bool Is_prime(int a)
        {
            if (a == 1)
            {
                return false;
            }
            for (int i = 2; i <= Math.Sqrt(a); i++)
            {
                if (a % i == 0)
                    return false;

            }
            return true;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            string readPath = @"C:\Users\HP\Desktop\programmig technologies\week2\IO\IO\input.txt";
            string writePath = @"C:\Users\HP\Desktop\programmig technologies\week2\IO\IO\output.txt";
            string s;
            int mi = 0;
            bool ok = false;
            try
            {
                using (StreamReader sr = new StreamReader(readPath, System.Text.Encoding.Default))
                {
                    s = sr.ReadToEnd();
                }
                string[] a = s.Split();

                for (int i = 0; i < a.Length; i++)
                {
                    if (Prime.Is_prime(int.Parse(a[i])))
                    {
                        mi = int.Parse(a[i]);
                        ok = true;
                        break;

                    }
                }

                if (mi != 0)
                {
                    for (int i = 0; i < a.Length; i++)
                    {
                        if (Prime.Is_prime(int.Parse(a[i])))
                        {
                            if (int.Parse(a[i]) < mi)
                            {
                                mi = int.Parse(a[i]);
                                ok = true;
                            }
                        }
                    }
                }
                using (StreamWriter sw = new StreamWriter(writePath, false, System.Text.Encoding.Default))
                {
                    if (ok)
                        sw.WriteLine("Minimal prime is " + mi);
                    else
                        sw.WriteLine("No primes");
                }

            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }

            Console.ReadKey();
        }
    }
}