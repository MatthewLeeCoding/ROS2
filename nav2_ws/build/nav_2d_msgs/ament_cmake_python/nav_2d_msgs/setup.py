from setuptools import find_packages
from setuptools import setup

setup(
    name='nav_2d_msgs',
    version='1.2.10',
    packages=find_packages(
        include=('nav_2d_msgs', 'nav_2d_msgs.*')),
)
