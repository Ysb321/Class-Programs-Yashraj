using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace For_Loop
{
    internal class Program
    {
        static void Main(string[] args)
        {
            ArrayList arrayList = new ArrayList();
            arrayList.Add("new");
            arrayList.Add(234);
            foreach(var items in arrayList)
            {
                Console.WriteLine(items);
            }
                
            }
        }
    }
}
