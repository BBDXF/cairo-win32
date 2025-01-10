project('demo1', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

# 查找Cairo库
cairo_options = {
  'glib' : 'disabled',
  'tests' : 'disabled'
}
cairo_dep = dependency('cairo', default_options: cairo_options)

# 使用预编译好的dll
#cairo_inc = 'C:\cairo-1.18.2\include'
#cairo_lib = 'C:\cairo-1.18.2\lib'
#cairo_dep = meson.get_compiler('c').find_library('cairo', dirs : cairo_lib)

# output
executable('demo1', 'demo1.c', dependencies: cairo_dep, install: true )