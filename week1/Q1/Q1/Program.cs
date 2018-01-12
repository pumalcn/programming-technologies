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
                foreach(string s in args) 
            {
                int x = int.Parse(s);// 
                bool temp = true;
                for (int i = 2; i* i<x; i++){
                    if(x % i == 0)// Проверка на простоту
                    {
                        temp = false;
                        break;
                    }
                    if(temp && x != 1)//Удовлетворение условию задачи
                    {
                        Console.WriteLine(x);// Вывод данных 
                    }
                }
                Console.ReadKey();
            }
         }
    }
}
