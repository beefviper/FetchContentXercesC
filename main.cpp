#include <xercesc/dom/DOM.hpp>
#include <xercesc/parsers/XercesDOMParser.hpp>

int main()
{
	xercesc::XMLPlatformUtils::Initialize("en_US");
	auto domParser = new xercesc::XercesDOMParser();

	delete domParser;
	xercesc::XMLPlatformUtils::Terminate();

	return 0;
}
