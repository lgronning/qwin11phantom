> And some say it's still using desktop computers, even to this day 👻

![phantom screenshot light](https://raw.githubusercontent.com/wiki/randrew/phantomstyle/images/phantom_demo_1x_light_3.png)

![phantom screenshot dark](https://raw.githubusercontent.com/wiki/randrew/phantomstyle/images/phantom_demo_1x_dark_3.png)

## Phantom Style

QWin11Phantom is a Windows 11 QStyle for Qt which is built on PhantomStyle.

* [Usage](#usage)
* [Compatibility](#compatibility)
* [License](#license)
* [TODO](#todo)

## Usage

### Built into an application

Add `src/style/style.pri` to your qmake .pro file for your project. There
are no additional dependencies. It's also safe to construct a QWin11PhantomStyle
object before instantiating a QApplication, because it doesn't interact with
the environment or anything else.

### As a QStylePlugin

A style plugin is available: [qwin11phantomstyleplugin.pro](src/styleplugin/qwin11phantomstyleplugin.pro)

## Compatibility

Tested on Qt 5.15 and later, but should work on earlier versions as well. Builds
with MSVC (tested with 2017), GCC and clang.

Uses `auto` from C++11, so C++11 is needed. C++14 and later are not needed.

## License

LGPL 2.1.

I would prefer to give it a more permissive license, or the same license that
the official code Qt has, which allows commercial projects to use the code
without LGPL restrictions if they have a Qt license. However, I don't know how
to do this, and I don't have time at the moment to figure it out. Please
contact me or open a ticket if you can help with this. The PhantomStyle code
originally started as a copy-and-paste of the Fusion code, but nearly none of
the Fusion code remains at this point (just some stuff for drawing MDI window
decorations and QDial.)

## TODO

* More screenshots
* Several things haven't been fully tested (MDI windows, tick marks on sliders,
  a few more I can't think of.)
* Probably lots of bugs

```
QWin11Phantom Style
Copyright (C) 2023 lgronning

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU Library General Public
License along with this library; if not, write to the
Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
Boston, MA  02110-1301, USA.
```
