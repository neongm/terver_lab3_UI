#pragma once
#include <msclr\marshal_cppstd.h>
#include "conv.h"

int conv::dec_to_int(const System::Decimal& _dec)
{
	// System::Decimal to int32
	return _dec.ToInt32(_dec);
}

std::string conv::s(System::String^ _str)
{
	// System::String to std::string
	return msclr::interop::marshal_as<std::string>(_str);
}

std::string conv::s(int _int)
{
	return std::to_string(_int);
}

std::string conv::s(size_t _size_t)
{
	return std::to_string(_size_t);
}

std::string conv::s(double _double)
{
	return std::to_string(_double);
}

std::string conv::s(float _float)
{
	return std::to_string(_float);
}

std::string conv::s(long double _long_double)
{
	return std::to_string(_long_double);
}

std::string conv::s(System::Decimal _dec)
{
	// System::Decimal to std::string
	return std::to_string(dec_to_int(_dec));
}

System::String^ conv::cs(std::string _str)
{
	// std::string to System::String
	return gcnew System::String(_str.c_str());
}

System::String^ conv::cs(double _double)
{
	//throw gcnew System::NotImplementedException();
	return cs(s(_double));
}

double conv::cs_to_double(System::String^ _string)
{
	return System::Convert::ToDouble(_string);
}
