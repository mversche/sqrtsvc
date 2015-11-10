#include <bsl_iostream.h>
#include <bdlt_currenttime.h>

using namespace BloombergLP;

int main()
{
    bsl::cout << "Hello world: " << bdlt::CurrentTime::local() << bsl::endl;
}
