# 🌈 RGB LED Static Color

> **Arduino Project #06** — ضبط لون RGB LED على لون ثابت محدد باستخدام PWM

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

يضبط LED RGB على لون ثابت عند التشغيل باستخدام **PWM** — في هذا المثال اللون هو **Cyan** (أزرق فاتح) الناتج عن مزج الأخضر (255) والأزرق (255) مع إيقاف الأحمر (0). لا يوجد أي كود في `loop()` لأن اللون يُضبط مرة واحدة فقط في `setup()`.

---

## 🔌 Circuit

```
Arduino UNO
┌─────────────────┐
│             9 ●─┼──[220Ω]──🟢 RGB Green pin
│            10 ●─┼──[220Ω]──🔵 RGB Blue pin
│            11 ●─┼──[220Ω]──🔴 RGB Red pin
│           GND ●─┼──────────⚫ RGB Common Cathode (-)
└─────────────────┘
```

- 🌈 RGB LED من نوع **Common Cathode**
- مقاومة 220Ω لكل pin
- Pin 9 → أخضر | Pin 10 → أزرق | Pin 11 → أحمر

---

## 💡 Concepts Used

- `analogWrite()` — التحكم في شدة كل لون عبر PWM (0-255)
- **RGB Color Mixing** — خلط الألوان الثلاثة للحصول على أي لون
- **setup() only** — الكود ينفذ مرة واحدة فقط عند التشغيل
- **PWM Pins** — استخدام Pins تدعم PWM (9, 10, 11)

---

## 📊 Color Mixing Table

| اللون | R (Pin 11) | G (Pin 9) | B (Pin 10) |
|-------|-----------|----------|-----------|
| 🔴 أحمر | 255 | 0 | 0 |
| 🟢 أخضر | 0 | 255 | 0 |
| 🔵 أزرق | 0 | 0 | 255 |
| 🟡 أصفر | 255 | 255 | 0 |
| 🟣 بنفسجي | 255 | 0 | 255 |
| 🩵 **Cyan (الكود الحالي)** | **0** | **255** | **255** |
| ⚪ أبيض | 255 | 255 | 255 |
| ⚫ مطفي | 0 | 0 | 0 |

---

## 🔗 Code

```cpp
int R = 0;
int G = 255;
int B = 255;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  analogWrite(9, G);   // أخضر
  analogWrite(10, B);  // أزرق
  analogWrite(11, R);  // أحمر
}

void loop() {
  // لا يوجد كود — اللون ثابت لا يتغير
}
```
## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل الدائرة كما في الرسم
3. انسخ الكود والصقه
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. جرب تغيير قيم R و G و B لتجربة ألوان مختلفة

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
