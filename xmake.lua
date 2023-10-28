add_rules("mode.debug", "mode.release")

add_requires("argh")

target("Projectoria")
    set_kind("binary")
    add_packages("argh")
    add_files("src/*.cpp")
