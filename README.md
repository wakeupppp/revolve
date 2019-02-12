# Revolve - Robot evolution framework

**Revolve** is an open source software framework for robot evolution providing C++ and Python libraries to create,
simulate and manage robots in the Gazebo general-purpose robot simulator. Given a specification, a robot body can be constructed by Revolve from a tree structure, starting with a root node extending to other body parts through its attachment slots. Revolve also ships with some simple generator classes, which can generate arbitrary robot bodies from scratch given a set of constraints.

Revolve was originally developed and is maintained by researchers and engineers working at the Computational Intelligence Group within Vrije Universiteit Amsterdam for the purposes of conducting robot body and brain evolutionary-related research. The system is general enough to be applicable in a wide variety of other domains, as well.

## Installation

The current system is supported  for Linux and Mac OS X platforms.
If all pre-requirements are satisfied, to install the current release run:

```bash
git clone https://github.com/ci-group/revolve.git
cd ./revolve
mkdir -p build && cd build
cmake ..
make -j4
```

Within the `revolve` root directory create Python virtual environment:

```bash
virtualenv --python python3 .venv
source .venv/bin/activate
pip install -r requirements.txt
```

To verify the build:
```bash
./revolve.py
```

*See [Installation Instructions for Revolve](https://github.com/ci-group/revolve/wiki/Installation-Instructions-for-Revolve)
for detailed instructions, and how to build from source.*

## Contribution guidelines

If you want to contribute to Revolve, be sure to review the [contribution
guidelines](CONTRIBUTING.md).By participating, you are expected to
uphold this code.

We use [GitHub issues](https://github.com/ci-group/revolve/issues) for
tracking requests and bugs.

The Revolve project strives to abide by generally accepted best practices in open-source software development:
[![CII Best Practices](https://bestpractices.coreinfrastructure.org/projects/2520/badge)](https://bestpractices.coreinfrastructure.org/projects/2520)

## Contributors

We would like to thank all contributors of Revolve project!

Special thanks to [Elte Hupkes](https://github.com/ElteHupkes/) who designed the codebase and professor [Gusz Eiben](https://www.cs.vu.nl/~gusz/) whose energy is pusshing the project forward.
Many thanks to [Milan Jelisavcic](https://github.com/milanjelisavcic/) and [Matteo De Carlo](https://github.com/portaloffreedom/) for redesigning and simplifying the codebase.
For the complete list of contributors see [AUTHORS](AUTHORS).

## For more information

* [EvoSphere Website](https://evosphere.eu/)
* [CIGroup Website](https://www.cs.vu.nl/ci/)

## License

[Apache License 2.0](LICENSE)
