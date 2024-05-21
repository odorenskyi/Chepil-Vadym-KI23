#ifndef MODULESCHEPIL_H_INCLUDED
#define MODULESCHEPIL_H_INCLUDED

class ClassLab12_Chepil
{
private:
    float length;
    float width;
    float height;

    void valid(float value) {
        if (value <= 0) {
            throw std::invalid_argument("Значення має бути позитивним.");
        }
    }

public:
    ClassLab12_Chepil(float len, float wid, float hei) {
        valid(len);
        valid(wid);
        valid(hei);
        length = len;
        width = wid;
        height = hei;
    }

    float getLength() const {
        return length;
    }

    float getWidth() const {
        return width;
    }

    float getHeight() const {
        return height;
    }

    void setLength(float len) {
        valid(len);
        length = len;
    }

    void setWidth(float wid) {
        valid(wid);
        width = wid;
    }

    void setHeight(float hei) {
        valid(hei);
        height = hei;
    }

    float getVolume() const {
        return length * width * height;
    }
};

#endif // MODULESCHEPIL_H_INCLUDED
