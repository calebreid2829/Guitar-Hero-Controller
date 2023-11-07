/*
 *  Project     Arduino XInput Library
 *  @author     David Madison
 *  @link       github.com/dmadison/ArduinoXInput
 *  @license    MIT - Copyright (c) 2019 David Madison
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *  Example:      Blink
 *  Description:  Using XInput, presses and then releases the "A" button
 *                every two seconds. Good for testing that the XInput
 *                library is working correctly.
 */

#include <XInput.h>

const uint8_t pin_a = 2;
const uint8_t pin_b = 3;
const uint8_t pin_y = 4;
const uint8_t pin_x = 5;
const uint8_t pin_lb = 6;
const uint8_t pin_rb = 7;
const uint8_t pin_start = 8;
const uint8_t pin_select = 9;
const uint8_t pin_up = 10;
const uint8_t pin_down = 11;
const uint8_t pin_left = 12;
const uint8_t pin_right = 13;
const uint8_t pin_l3 = 14;
const uint8_t pin_r3 = 15;
const uint8_t pin_jlx = A0;
const uint8_t pin_jly = A1;
const uint8_t pin_jrx = A2;
const uint8_t pin_jry = A3;
const uint8_t pin_lt = A4;
const uint8_t pin_rt = A5;
const int analog_read_max = 1023;

void setup() {
  pinMode(pin_a, INPUT_PULLUP);
  pinMode(pin_b, INPUT_PULLUP);
  pinMode(pin_y, INPUT_PULLUP);
  pinMode(pin_x, INPUT_PULLUP);
  pinMode(pin_lb, INPUT_PULLUP);
  pinMode(pin_rb, INPUT_PULLUP);
  pinMode(pin_start, INPUT_PULLUP);
  pinMode(pin_select, INPUT_PULLUP);
  pinMode(pin_up, INPUT_PULLUP);
  pinMode(pin_down, INPUT_PULLUP);
  pinMode(pin_left, INPUT_PULLUP);
  pinMode(pin_right, INPUT_PULLUP);
  pinMode(pin_l3, INPUT_PULLUP);
  pinMode(pin_r3, INPUT_PULLUP);
  XInput.setJoystickRange(0,analog_read_max);
  XInput.setAutoSend(true);
  XInput.begin();

}

void loop() {
	boolean btn_a = !digitalRead(2);
  boolean btn_b = !digitalRead(3);
  boolean btn_y = !digitalRead(4);
  boolean btn_x = !digitalRead(5);
  boolean btn_lb = !digitalRead(6);
  boolean btn_rb = !digitalRead(7);
  boolean btn_start = !digitalRead(8);
  boolean btn_select = !digitalRead(9);
  boolean btn_up = !digitalRead(10);
  boolean btn_down = !digitalRead(11);
  boolean btn_left = !digitalRead(12);
  boolean btn_right = !digitalRead(13);
  boolean btn_l3 = !digitalRead(14);
  boolean btn_r3 = !digitalRead(15);
  int jlx = analogRead(pin_jlx);
  //int jly = analogRead(pin_jly);
  //int jrx = analogRead(pin_jrx);
  //int jry = analogRead(pin_jry);
  //int lt = analogRead(pin_lt);
  //int rt = analogRead(pin_rt);    
  XInput.setButton(BUTTON_A, btn_a);
  XInput.setButton(BUTTON_B, btn_b);
  XInput.setButton(BUTTON_Y, btn_y);
  XInput.setButton(BUTTON_X, btn_x);
  XInput.setButton(BUTTON_LB, btn_lb);
  XInput.setButton(BUTTON_RB, btn_rb);
  XInput.setButton(BUTTON_START, btn_start);
  XInput.setButton(BUTTON_BACK, btn_select);
  XInput.setDpad(DPAD_UP, btn_up);
  XInput.setDpad(DPAD_DOWN, btn_down);
  XInput.setDpad(DPAD_LEFT, btn_left);
  XInput.setDpad(DPAD_RIGHT, btn_right);
  XInput.setButton(BUTTON_L3, btn_l3);
  XInput.setButton(BUTTON_R3, btn_r3);
  XInput.setJoystickX(JOY_LEFT,jlx,true);
  //XInput.setJoystickY(JOY_LEFT,jly,true);  
  //XInput.setJoystickX(JOY_RIGHT, jrx);
  //XInput.setJoystick(JOY_RIGHT,jrx,jry);
  //XInput.setTrigger(TRIGGER_LEFT, lt);
  //XInput.setTrigger(TRIGGER_RIGHT,rt);
  }
