#ifndef H_DECRYPT_ERROR
#define H_DECRYPT_ERROR

enum class EDecryptError
{
	VERSION_NOT_SUPPORTED,
	INVALID_HEADER,
	INFLATE_FAILED,
	NONE
};

#endif // H_DECRYPT_ERROR
