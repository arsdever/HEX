#ifndef hex_h
#define hex_h

const char hexChars[] = "0123456789ABCDEF";

String hex(const byte& num){
	return String(hexChars[num>>4])+String(hexChars[num&0x0f]);
}

String hex(const int& num){
    return hex((byte)((num>>8) & 0xff)) + hex((byte)(num & 0xff));
}

String hex(const unsigned int& num){
    return hex((byte)((num>>8) & 0xff)) + hex((byte)(num & 0xff));
}

String hex(const long& num){
    return hex((int)((num>>16) & 0xffff)) + hex((int)(num & 0xffff));
}

String hex(const unsigned long& num){
    return hex((int)((num>>16) & 0xffff)) + hex((int)(num & 0xffff));
}

String bin(const byte& num){
	String tmp = "";
	for(int i=0; i<8; ++i)
		tmp += String(hexChars[(num&(1<<(7-i)))?1:0]);
	return tmp;
}

String bin(const int& num){
	return bin((byte)((num>>8)&0xff))+bin((byte)(num&0xff));
}

String bin(const long& num){
	return bin((int)((num>>16)&0xffff))+bin((int)(num&0xffff));
}

char charToByte(const char& by){
    switch(by){
        case '0':return 0;break;
        case '1':return 1;break;
        case '2':return 2;break;
        case '3':return 3;break;
        case '4':return 4;break;
        case '5':return 5;break;
        case '6':return 6;break;
        case '7':return 7;break;
        case '8':return 8;break;
        case '9':return 9;break;
        case 'A':return 0xA;break;
        case 'B':return 0xB;break;
        case 'C':return 0xC;break;
        case 'D':return 0xD;break;
        case 'E':return 0xE;break;
        case 'F':return 0xF;break;
    }
}

void fromString(const String& str,byte* ret){
    *ret = charToByte(str[0])<<4+charToByte(str[1]);
}

#endif