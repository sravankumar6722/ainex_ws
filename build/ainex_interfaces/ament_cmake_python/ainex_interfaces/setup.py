from setuptools import find_packages
from setuptools import setup

setup(
    name='ainex_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('ainex_interfaces', 'ainex_interfaces.*')),
)
