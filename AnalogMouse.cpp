//#include <Windows.h>
//#include <iostream>
//
//void pressF5()
//{
//    INPUT input;
//    input.type = INPUT_KEYBOARD;
//    ////////////////////////////////////////
//    input.ki.wVk = VK_F5; // 指定按下的键为*****(虚拟键码)******
//    ////////////////////////////////////////
//    input.ki.wScan = 0;
//    input.ki.dwFlags = 0;
//    input.ki.time = 0;
//    input.ki.dwExtraInfo = 0;
//
//    SendInput(1, &input, sizeof(INPUT));
//}
//void click(int x, int y, int screenWidth, int screenHeight)
//{
//    INPUT input;
//    input.type = INPUT_MOUSE;
//    input.mi.dx = x * (65535.0f / screenWidth); // 将x坐标映射到绝对坐标范围内
//    input.mi.dy = y * (65535.0f / screenHeight); // 将y坐标映射到绝对坐标范围内
//    input.mi.mouseData = 0;
//    input.mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE | MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
//    input.mi.time = 0;
//    input.mi.dwExtraInfo = 0;
//
//    SendInput(1, &input, sizeof(INPUT));
//}
//
//int main()//实现主函数//
//{
//    Sleep(7000); // 等待7秒
//    POINT cursorPos;
//    long i = 0;
//    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
//    int screenHeight = GetSystemMetrics(SM_CYSCREEN);
//    while (true)
//    {
//        SetCursorPos(1062, 492);
//        Sleep(10);
//        click(1062, 492, screenWidth, screenHeight);
//        Sleep(1500);
//        click(983, 578, screenWidth, screenHeight);
//        Sleep(1500);
//        click(705, 529, screenWidth, screenHeight);
//        i++;
//        if (i % 4 == 0) {
//            pressF5();
//        }
//        Sleep(1500);
//        if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
//            break; // 如果检测到空格键被按下，退出循环
//        }
//        if (GetAsyncKeyState(VK_RBUTTON) & 0x8000) {
//            break; // 如果检测到鼠标右键被按下，退出循环
//        }
//    }
//
//    return 0;
//}
//
