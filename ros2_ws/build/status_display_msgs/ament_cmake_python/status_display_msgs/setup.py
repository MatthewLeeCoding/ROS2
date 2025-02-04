from setuptools import find_packages
from setuptools import setup

setup(
    name='status_display_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('status_display_msgs', 'status_display_msgs.*')),
)
