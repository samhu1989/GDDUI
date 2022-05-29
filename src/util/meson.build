inc = include_directories('../../include')
deps = [dependency('glfw3')]
src = [
    'window.cpp',
    'app.cpp'
]
libutil = library(
    'util',
    src,
    include_directories : inc,
    dependencies : deps,
    install : true,
    install_dir : meson.project_source_root() + '/bin/'
    )