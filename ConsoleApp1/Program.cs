using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] s = new string[7] { "星期一", "星期二", "星期三", "星期四", "星期五", "星期六", "星期日" };
            for (int i = 0; i<7; i++)
            {
                Console.WriteLine(s[i]);
            }
            int g = 0;
            string a = "2025022570";
            foreach (char i in a)
            {
                if (i == '0')
                {
                    g = g+1;
                }

            }Console.WriteLine("我学号里有{0}个0",g);
            int x;
            x=int.Parse(Console.ReadLine());
            int y=int.Parse(Console.ReadLine());
            Console.WriteLine(x + y);
        }
    }
}
