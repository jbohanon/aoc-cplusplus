#include <fstream>
namespace aoc {
    class worker {
        public:
            static int doBadWork();
            static int doGoodWork();
            static int calculateFloor(std::fstream& f);
    };
}
