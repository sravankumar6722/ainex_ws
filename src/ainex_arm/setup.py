from setuptools import find_packages, setup

package_name = 'ainex_arm'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='vgi',
    maintainer_email='vgi@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'hand_node = ainex_arm.hand_node:main',
            'wave_node = ainex_arm.wave_node:main',
            'salute_node = ainex_arm.salute_node:main',
            'left_hand_wave = ainex_arm.left_hand_wave_node:main',
            'left_hand_salute = ainex_arm.left_hand_salute_node:main',
        ],
    },
)
