#include <iostream>
#include <vector>
#include <map>
#include <set>
#include "parse_args.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    ArgsParser args_parser(argv);
	auto pos_args = args_parser.pos_args();
	auto flags = args_parser.flags();
	auto params = args_parser.params();

}
