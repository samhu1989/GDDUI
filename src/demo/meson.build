inc = include_directories('../../include')
executable(
    'demo', 
    'main.cpp',
    include_directories : inc,
    link_with : libutil,
    install : true,
    install_dir : meson.project_source_root() + '/bin/')