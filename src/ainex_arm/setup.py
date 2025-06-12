from setuptools import find_packages, setup
import os

package_name = 'ainex_arm'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # Install all launch files
        ('share/' + package_name + '/launch', [
            os.path.join('launch', f) for f in os.listdir('launch') if f.endswith('.launch.xml') or f.endswith('.launch.py')
        ]),
        # Install all urdf files
        ('share/' + package_name + '/urdf', [
            os.path.join('urdf', f) for f in os.listdir('urdf') if f.endswith('.urdf') or f.endswith('.xacro')
        ]),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sravanedigi',
    maintainer_email='sravanedigi123@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'hand_node = ainex_arm.hand_node:main',
        ],
    },
)