#pragma once

#include "MeterWnd.h"

class MeterWndClone {
public:
    MeterWndClone(LPCWSTR className, LPCWSTR title, HINSTANCE hInstance = NULL);

    void Show();
    void Hide();

    void Update(Gdiplus::Bitmap *composite);
    void Transparency(byte transparency);
    void GlassMask(Gdiplus::Bitmap *mask);

private:
    MeterWnd _mWnd;
};