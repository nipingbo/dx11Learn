#include "NirException.h"
#include <sstream>

NirException::NirException(int line, const char* file) noexcept
	:line(line), file(file)
{
}

const char * NirException::what() const noexcept
{
	std::ostringstream oss;
	oss << GetType() << std::endl << GetOriginString();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char * NirException::GetType() const noexcept
{
	return "NIR Exception";
}

int NirException::GetLine() const noexcept
{
	return line;
}

const std::string & NirException::GetFile() const noexcept
{
	return file;
}

std::string NirException::GetOriginString() const noexcept
{
	std::ostringstream oss;
	oss << "[File]" << file << std::endl << "[LIne]" << line;
	return oss.str();
}


