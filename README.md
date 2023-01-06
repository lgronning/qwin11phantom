> And some say it's still using desktop computers, even to this day 👻

![light mode](https://user-images.githubusercontent.com/31950538/210968770-80d5bee2-7cc7-42bf-8b37-c9961b871cf3.png)

![dark mode](https://user-images.githubusercontent.com/31950538/210969022-ea569ed8-864a-4b8e-9dcd-d13fd1fa4720.png)

## Phantom Style

QWin11Phantom is a Windows 11 QStyle for Qt which is built on PhantomStyle https://github.com/randrew/phantomstyle.

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

## TODO

* A few things still needs to be done. Any cotribution is very welcome

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
