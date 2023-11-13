# PageRank
<!-- ABOUT THE PROJECT -->
## About The Project

This repository contains an implementation of the PageRank algorithm for my COP3503 class at the University of Florida. The PageRank algorithm is a widely known approach to ranking web pages in search engine results, using an adjacency list graph structure. The project is designed to demonstrate the efficiency of the PageRank algorithm when applied to a graph-based representation of a network, particularly the web.

### Key Features:
* **Graph Representation**: The project uses an adjacency list representation for the graph, which is efficient for sparse graphs like web pages.
* **PageRank Algorithm**: Implements the PageRank calculation, an iterative algorithm that assigns a numerical weighting to each element of a linked set of objects.
* **Scalability**: Designed to handle a considerable number of web pages and links, making it suitable for large datasets.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Built With

* ![C++]

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Getting Started

### Prerequisites

In order to run the program through the python file you must install
* GCC/G++ compiler (or any C++ compiler)
* Basic knowledge of C++ command line operations

### Installation and Compilation

1. Clone the repo
   ```sh
   git clone https://github.com/d-dovale/PageRank
   ```
3. Navigate to the project directory
   ```sh
   cd PageRank
   ```
4. To compile the project, use the following command in the terminal:
   ```sh
   g++ -o pagerank main.cpp graph.cpp
   ```
5. Execute the compiled program:
   ```sh
   ./pagerank
   ```
6. Input the websites that are linked (Example):
    ```C++
    7 2
    google.com gmail.com
    google.com maps.com
    facebook.com ufl.edu
    ufl.edu google.com
    ufl.edu gmail.com
    maps.com facebook.com
    gmail.com maps.com
    ```
    
    _This input represents a graph with 7 edges and requests 2 iterations of the PageRank algorithm._

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Contact

Daniel Dovale - ddovale2004@gmail.com

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/othneildrew
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[Python]: https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white
[C++]: https://img.shields.io/badge/C++-3776AB?style=for-the-badge&logo=c++&logoColor=white
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com 
