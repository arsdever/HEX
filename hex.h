#ifndef hex_h
#define hex_h

const char hexChars[] = "0123456789ABCDEF";

String hex(const byte& num){
	return String(hexChars[num>>4])+String(hexChars[num&0x0f]);
}

String hex(const int& num){
	return hex((byte)((num>>8) & 0xff)) + hex((byte)(num & 0xff));
}

String hex(const long& num){
	return hex((int)((num>>16) & 0xffff)) + hex((int)(num & 0xffff));
}

String bin(const byte& num){
	String tmp = "";
	for(int i=0; i<8; ++i)
		tmp += String(hexChars[num&(1<<(7-i))]);
	return tmp;
}

String bin(const int& num){
	return bin((byte)((num>>8)&0xff))+bin((byte)(num&0xff));
}

String bin(const long& num){
	return bin((int)((num>>16)&0xffff))+bin((int)(num&0xffff));
}

#endif