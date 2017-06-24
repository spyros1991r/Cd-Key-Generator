
#include "Objbase.h"
#include "iostream"

int main()
{
	HRESULT res;
	HRESULT res2;
	GUID newGuid;
	GUID newGuid2;
	res = CoCreateGuid(&newGuid);
	res2 = CoCreateGuid(&newGuid2);

	if (res == S_OK && res2 == S_OK)
	{
		OLECHAR* guidString;
		OLECHAR* guidString2;
		res = StringFromCLSID(newGuid, &guidString);
		res2 = StringFromCLSID(newGuid2, &guidString2);

		if (res == S_OK && res2 == S_OK)
		{
			std::cout << "Guid is " << guidString << std::endl;
			std::cout << "Guid2 is " << guidString2 << std::endl;
		}

	}
	getchar();
}