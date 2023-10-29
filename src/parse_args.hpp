#include <argh.h>
#include <set>
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
	vector<string> pos_args() {
		return parser->pos_args();
	}
	multiset<string> flags() {
		return parser->flags();
	}
    ~ArgsParser() {
        delete parser;
    }
};
