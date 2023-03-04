# -*- coding: utf-8 -*-
"""
Created on Sat Feb 25 17:05:56 2023

@author: ryanc
"""

import angr
from angrutils import *

p = angr.Project("fauxware", load_options={'auto_load_libs': False})

cfg = p.analyses.CFGEmulated(keep_state=True)

print("This is the graph:", cfg.graph)
print("It has %d nodes and %d edges" % (len(cfg.graph.nodes()), len(cfg.graph.edges())))

plot_cfg(cfg, "cfg")  