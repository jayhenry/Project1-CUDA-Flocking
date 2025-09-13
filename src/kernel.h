#pragma once

namespace Boids {
    void initSimulation(int N);
    void stepSimulationNaive(float dt, int frame);
    void stepSimulationScatteredGrid(float dt);
    void stepSimulationCoherentGrid(float dt);
    void copyBoidsToVBO(float *vbodptr_positions, float *vbodptr_velocities);

    void endSimulation();
    void unitTest();
}
