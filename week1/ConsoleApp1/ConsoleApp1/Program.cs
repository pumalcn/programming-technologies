using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Student
    {
        string name;
        int age;
        float gpa;
        public Student()
        {
            name = "KBTU";
            age = 18;
            gpa = 4;
        }
        public Student(string name, int age, float gpa)
        {
            name = "puma";
            age = 18;
            gpa = 3.5F;
        }
        public override string ToString()
        {
            return name + " " + age + " " + gpa;
        }
    }
    
    class Program
    {
        static void Main(string[] args)
        {
            Student s = new Student();
            Console.WriteLine(s);
            Console.ReadKey();
        }
    }
}
