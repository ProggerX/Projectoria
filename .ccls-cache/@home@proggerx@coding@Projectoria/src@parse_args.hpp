#include <argh.h>
#include <map>

using namespace std;

class ArgsParser {
private:
    argh::parser* parser;
public:
    ArgsParser(char* argv[]) {
        parser = new argh::parser(argv);
    }
    map<string, string> params() {
        return parser->params();
    }
    ~ArgsParser() {
        delete parser;
    }
};
