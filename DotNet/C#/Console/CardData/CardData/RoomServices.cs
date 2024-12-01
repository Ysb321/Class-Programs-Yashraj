using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CardData
{
    internal class RoomServices
    {
        public string paintingServices() {
            return "Paint";
        }

        private string CleaningServices()
        {
            return "clean";
        }

        public string Services()
        {
            return CleaningServices();
        }
    }
}
