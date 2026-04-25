#include "PowerPC_EABI_Support/Runtime/New.h"

namespace std
{
class exception
{
public:
	exception() {}
	virtual ~exception() {}
	virtual const char* what() const;
};

__declspec(weak) const char* exception::what() const
{
	return "exception";
}
}

extern "C" {
void free(void*);
}

__declspec(weak) void operator delete(void* arg0) throw()
{
	if (arg0 != 0) {
		free(arg0);
	}
}
