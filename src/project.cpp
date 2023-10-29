#include "xmake.cpp"

class ProjectManager {
	Xmake xmake;
	string path;
public:
	ProjectManager(string path) {
		this->path = path;
	}
	bool CreateProject(string lsp) {
		if (xmake.IsXmakeProject(path)) return 0;
		xmake.CreateXmakeProject(path);
		xmake.CreateCompileCommands(path, lsp);
		return 1;
	}
	bool CreateProject() {	
		if (xmake.IsXmakeProject(path)) return 0;
		xmake.CreateXmakeProject(path);
		return 1;
	}
	void CreateCompileCommands(string lsp) {

	}
};
