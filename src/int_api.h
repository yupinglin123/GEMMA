/*
    Genome-wide Efficient Mixed Model Association API (GEMMA API)
    Copyright © 2018, Pjotr Prins

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "api.h"
#include "gemma_io.h"
#include "param.h"

// matching internal functions for GEMMA

void int_api_compute_bimbam_K(const string file_geno, const set<string> ksnps,
                              vector<int> &indicator_snp, const int k_mode,
                              const int display_pace, gsl_matrix *matrix_kin,
                              const bool test_nind);

void int_api_write_K(const PARAM *cPar, const gsl_matrix *G, bool is_centered);