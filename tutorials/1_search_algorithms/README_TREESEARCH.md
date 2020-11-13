Tutorials on Tree Search Algorithms
============
This is a short guide on how to use the search algorithms in `GSMP/motion_planner/search_algorithms` for lectures and tutorials.

Set up
============
For using the code, you have to install the tools as described in the README in the root folder. For using the code in
Pycharm, open a new project in the repository's root directory `graph-search-planner` and set the 
`commonroad-search/GSMP` folder as *Source Root*, to avoid path issues.

# Documentation
For running the search algorithms, you can currently specify three different configurations which mainly influence the
visualization of the search and are defined in `GSMP/motion_planner/PlotConfig.py`:

### Default: 

* This configuration should only be used in the jupyter notebook tutorial
(`step_1_tutorial_notebooks/step_1_1_cr_uninformed_search_tutorial.ipynb` and
`step_1_tutorial_notebooks/step_1_2_cr_informed_search_tutorial.ipynb`). 
It first runs the algorithm and stores the state of each motion primitive, 
i.e., explored/frontier/currently exploring etc., for each step. 
Then it plots these steps using
*ipywidgets*, so the student can step through the search in the jupyter notebook. 

* The color code for plotting is taken from the AIMA tutorial, but can be changed 
 in `GSMP/motion_planner/PlotConfig.py`. 

* By setting PLOT_LEGEND to True, a legend with all states of
motion primitives (see `MotionPrimitiveStatus` in `GSMP/motion_planner/PlotHelper.py`) is plotted. 

* To reduce the number of steps, you can turn off that motion primitives with collisions are plotted one
 after the other by setting PLOT_COLLISION_STEPS to False.

### StudentScript: 

This configuration uses the same parameters as the Default configuration, but it can be run in Pycharm,
e.g. when executing `main.py`. It plots the different steps while executing the search algorithm. It should help
students to easily go through the code.

# How to run

It is advised to add the directory `1_basics-tree_search_algorithms` to your python interpreter as *Source Root*.
It fixes the Unresolved References error messages in PyCharm.

It can be run in two different ways:

###Jupyter Notebook

Start a Jupyter Server, then navigate to the directory `step_1_tutorial_notebooks`, open up the notebooks and follow
instructions.

###Python script

Simply run the `main.py` from the directory `1_basics-tree_search_algorithms`. In PyCharm it can be achieved with a
right click on the file `main.py` and then *Run*.