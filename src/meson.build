mybible_reader_sources = [
  'main.c',
  'mybible_reader-window.c',
]

mybible_reader_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

mybible_reader_sources += gnome.compile_resources('mybible_reader-resources',
  'mybible_reader.gresource.xml',
  c_name: 'mybible_reader'
)

executable('mybible_reader', mybible_reader_sources,
  dependencies: mybible_reader_deps,
  install: true,
)
