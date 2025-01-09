# cairo win32 build
Current Version 1.18.2，x86_x64

## cairo config
- vs2022
- cairo-1.18.2
- meson configure
	- `meson ./build --buildtype=release  -Dglib=disabled`
	- `cd build`
	- `meson compile`
	- `meson install --prefix=C:/cairo-1.18.2`

```bash
cairo 1.18.2

  Surface Backends
    Image                   : YES
    Recording               : YES
    Observer                : YES
    Mime                    : YES
    Tee                     : YES
    Xlib                    : NO
    Xlib Xrender            : NO
    Quartz                  : NO
    Quartz-image            : NO
    XCB                     : NO
    Win32                   : YES
    CairoScript             : YES
    PostScript              : YES
    PDF                     : YES
    SVG                     : YES

  Font Backends
    User                    : YES
    FreeType                : NO
    Fontconfig              : NO
    Win32                   : YES
    Win32 DWrite            : YES
    Quartz                  : NO

  Functions
    PNG functions           : YES
    X11-xcb                 : NO
    XCB-shm                 : NO

  Features and Utilities
    cairo-trace:            : NO
    cairo-script-interpreter: YES
    API reference           : NO

  Subprojects
    libpng                  : YES
    pixman                  : YES
    zlib                    : YES

  User defined options
    buildtype               : release
    glib                    : disabled

```

output:
```bash
│  README.md
│
├─bin
│      cairo-2.dll
│      cairo-script-interpreter-2.dll
│      pixman-1-0.dll
│      png16-16.dll
│      z-1.dll
│
├─include
│  │  zconf.h
│  │  zlib.h
│  │
│  ├─cairo
│  │      cairo-deprecated.h
│  │      cairo-dwrite.h
│  │      cairo-features.h
│  │      cairo-pdf.h
│  │      cairo-ps.h
│  │      cairo-script-interpreter.h
│  │      cairo-script.h
│  │      cairo-svg.h
│  │      cairo-tee.h
│  │      cairo-version.h
│  │      cairo-win32.h
│  │      cairo.h
│  │
│  ├─libpng16
│  │      png.h
│  │      pngconf.h
│  │      pnglibconf.h
│  │
│  └─pixman-1
│          pixman-version.h
│          pixman.h
│
└─lib
    │  cairo-script-interpreter.lib
    │  cairo.lib
    │  pixman-1.lib
    │  png16.lib
    │  z.lib
    │
    └─pkgconfig
            cairo-dwrite-font.pc
            cairo-pdf.pc
            cairo-png.pc
            cairo-ps.pc
            cairo-script-interpreter.pc
            cairo-script.pc
            cairo-svg.pc
            cairo-tee.pc
            cairo-win32-font.pc
            cairo-win32.pc
            cairo.pc
            libpng.pc
            libpng16.pc
            pixman-1.pc
            zlib.pc
```

## test
```bash
cd test
meson ./build --buildtype=release
cd build
meson compile
meson install --prefix=C:/cairo-1.18.2/bin
cd C:/cairo-1.18.2/bin
demo1.exe
```

