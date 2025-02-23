#include <string>

int main()
{
	int n1 = 10;	
	int n2 = 010;	
	int n3 = 0x10;
	int n4 = 0b10;	

	std::string    s1 = "hello";
	std::wstring   s2 = L"hello";
	std::u8string  s3 = u8"hello";
	std::u16string s4 = u"hello";
	std::u32string s5 = U"hello";
}
