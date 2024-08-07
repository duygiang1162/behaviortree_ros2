from setuptools import find_packages
from setuptools import setup

setup(
    name='behaviortree_ros2',
    version='0.0.1',
    packages=find_packages(
        include=('behaviortree_ros2', 'behaviortree_ros2.*')),
)
