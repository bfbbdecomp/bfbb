#include "PowerPC_EABI_Support/Runtime/New.h"

extern "C" {
void free(void*);
}

__declspec(weak) void operator delete(void* arg0) throw()
{
	if (arg0 != 0) {
		free(arg0);
	}
}

namespace std
{
class exception
{
public:
	exception() {}
	virtual ~exception() {}
	virtual const char* what() const { return "exception"; }
};
}

static void unused()
{
	throw std::exception();
}
