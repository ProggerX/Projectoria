#include <string>
using namespace std;

class Xmake {
public:
	void CreateXmakeProject(string path) {
		system(string("xmake create -P " + path + "").c_str());
	}
	void CreateCompileCommands(string path, string lsp) {
		system(string("xmake project -P " + path + "-k compile_commands --lsp=" + lsp).c_str());
	}
	bool IsXmakeProject(string path) {
		return system("[ -e xmake.lua ]");
	}
};
