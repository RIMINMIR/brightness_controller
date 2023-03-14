from conans import ConanFile, CMake


class BrightnessController(ConanFile):
    name = "main"
    version = "1.0"
    generators = "cmake"
    exports_sources = "src/*"
    requires = (
        "libgd/2.3.0"
        
    )
    default_options = {"libgd:with_png": True}
    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
