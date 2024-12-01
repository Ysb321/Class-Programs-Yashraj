using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CardDetails;

namespace CardData
{
    internal class Program
    {
        static void Main(string[] args)
        {
            cardDetail obj = new cardDetail();
            RoomServices roomServices = new RoomServices();
            string services = roomServices.Services();
            Console.WriteLine(services);
            Console.ReadLine();
        }
    }
}
