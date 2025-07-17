/*
GitHub:https://github.com/sky-15keys
Info:
    15键键盘,基于QMK框架开发,支持Vial,支持自定义布局,支持NKRO全键无冲
    仅供学习参考
下载BootLoader方法:
    ATMega32u4请使用:Leonardo-prod-firmware-2012-04-26.hex
    每颗MCU首次使用必须刷BootLoader
    使用PORGISP2.0软件烧录，熔丝低位:FF 高位:D8 扩展位值:CB 加密值:FF，设置错误会导致单片机锁死！
    有详细教程:https://blog.csdn.net/qq_42250136/article/details/128315811
    烧录完成Bootloader，拔掉USB线
下载固件方法:
    插入USB线，会识别为COM串口，在/AVRDUDESS目录下打开cmd执行avrdude.exe  -p atmega32u4 -c avr109 -U flash:w:"固件位置":i -P COM设备管理器显示的端口号
    等待进度条完成
    或者用QMK ToolBox下载
现在程序已经占用MCU 99%空间了，不要再加功能了
*/