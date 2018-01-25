﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace FileReadWrite 
{
    class Program
    {
        static void Main(string[] args)
        {
            string readPath = @"C:\Users\HP\Desktop\programmig technologies\week2\MM.txt";
            string text = "";
            try
            {
                using (StreamReader sr = new StreamReader(readPath, System.Text.Encoding.Default))
                {
                    text = sr.ReadToEnd();
                }
                string[] arr = text.Split(' ');
                int mi = int.Parse(arr[0]), ma = int.Parse(arr[0]);
                for (int i = 1; i < arr.Length; i++)
                {
                    if (int.Parse(arr[i]) < mi)
                    {
                        mi = int.Parse(arr[i]);
                    }
                    if (int.Parse(arr[i]) > ma)
                    {
                        ma = int.Parse(arr[i]);
                    }
                }

                Console.WriteLine("max = " + ma + "\nmin = " + mi);
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
            Console.ReadKey();
        }
    }
}