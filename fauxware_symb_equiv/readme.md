# Fauxware<a name="Fauxware"></a>

## Contents<a name="contents"></a>

<!-- mdformat-toc start --slug=github --maxlevel=6 --minlevel=1 -->

- [Fauxware](#Fauxware)
  - [Contents](#contents)
  - [Overview](#overview)
  - [Problems](#problems)
  - [Future](#future)

<!-- mdformat-toc end -->

## Introduction<a name="introduction"></a>

 - Assigment was to explore Angr and test for IO Equivalence for Authentication function with cases:
   - Auth1 and Auth2 are identical so equiv is established
   - Auth1 and Auth2 are functionally equiv so equiv is established
   - Auth1 and Auth2 are different and some testcases where difference is established will be printed

## Overview<a name="overview"></a>

  - Extension to Fauxware manual equiv
  - Insetad of manual equiv, we pass two different symbolic into two different states respectively and add constraints from both states constraint to a solver
  - If constraints from both program states are added to a solver, two symbolic variable set to equal, and the solver yeilds a solution (i.e. satisfiable), then the two program states should be the same in theory
  - If a solution cannot be found, then we can set the two variables ad different and solve for the constraint. In principle, it should give an example when the two functions don't match

## Problems<a name="problems"></a>
 - A real function will have a lot of terminating states. To establish true equivilence, we must examine each state and compare it to every other state. Could be an Interesting future project.

## Future<a name="future"></a>
 - Look into v-spells darpa

