from setuptools import Extension, setup

setup(
    ext_modules = [
        Extension(
            name = "ufo",
            sources = [
                "ufo.c"
            ],
        )
    ]
)