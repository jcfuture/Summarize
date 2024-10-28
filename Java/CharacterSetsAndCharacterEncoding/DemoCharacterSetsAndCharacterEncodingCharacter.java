package Summarize.CharacterSetsAndCharacterEncoding;

public class DemoCharacterSetsAndCharacterEncodingCharacter {
    /*字符集：
      字符集CharSet：也叫编码表，是一支持所有字符的集合，包括国家文字，标点符号，图形符号，数字等，计算机要准确的存储和识别
    各种字符符号，需要进行字符编码，一套字符必须至少有一套字符编码，常见字符集有ASCII字符集，GBK字符集，Uncicode字符集等
    ASCII字符集              GBK字符集                                        Uncicode
    ASCII编码                 GBK编码                                UTF-8编码    UTF-16编码   UTF-32编码
    1、ASCII（American Standard Code for Information Interchange）,美国信息交换便准代码，是基于拉丁字母的一套电编程
     ，用于显示现代英语，主要包含控制字符（回车，退格，换行）和可显示字符（英文大小写字符，阿拉伯数字和西文符号）
      基本的ASCII字符集，使用7位（bits）表示一个字符，ASCII扩展字符集使用8位（bits）表示一个字符，共256字符，方便支持欧洲常用
     字符
    2、ISO-8859-1字符集
      拉丁码表：别名Lantin-1，用于显示欧洲使用的语言，包括荷兰，丹麦，德语，意大利，西班牙语等
      ISO-8859-1使用单字节编码，兼容ASCII
    3、GBXXX字符集:
      GB就是国标的意思，是为了显示中文而设计的一套字符集
      GB2312：简体中文码表，一个小于127的字符的意义和原来相同，但两个大于127的字符拼接在一起时，就表示一个汉字，这样大约可以组合包含7000
      多个简体汉字，此外数字符号，罗马希腊的字母，日文的假名们都编进去了，连载ASCII里本来就有的数字，标点，字母，都统统重新编了两个字节长的
      编码，这就是常说的“全角”符号，而原来在127号以下的那些就叫“半角”字符了
      GBK：最常用的中文码表，是在GB2312标准基础上的扩展规范，使用了双字节编码方案，共收录了21003个汉字，完全兼容GB2312标准，同时支持繁体
      汉字以及日韩汉字等
      GB18030：最新的中文码表，收录汉字70244个，采用多字节编码，每个字可以有1个，2个，或4个字节组成。支持中国国内少数民族的汉字，同时支持
      繁体汉字以及日韩汉字等
    4、Uncicode字符集
      Uncicode：编码系统为表达任意语言的任意字符而设计，是业界的一种标准，也称为统一码，标准万国码
      他最多使用4个字节的数字表达每个字母，符号或者文字，有三种编码方案，UTF-8，UTF-16和UTF-32，最为常见的UTF-8编码
      UTF-8编码，可以用来表示Uncicode标准中任何字符，它是电子邮件，网页以及其他存储或传递字节的应用中优先采用的编码，互联网工程工作小组（IETF）
      要求所有互联网协议都必须支持UTF-8编码，所以，我们开发web应用，也要使用UTF-8编码，它使用一至四个字节为每个字符编码，编码规则：
         1、128个US-ASCII字符
         2、拉丁文等字符，需要一个字节编码
         3、大部分常用字（中文），使用三个字节编码
         4、其他极少使用的Uncicode辅助字符，使用四个字节编码
     转换流出现的问题
         1、FileReader可以读取IDEA默认编码格式（UTF-8）的文件
         2、FileReader地区系统默认编码（中文（GBK））会产生乱码
      */
}