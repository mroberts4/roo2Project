#ifndef LAYERS_BN_H
#define LAYERS_BN_H

#include "convLayer2.h"
#include "batchnormalLayer2.h"
#include "reluLayer.h"
#include <vector>
#include <iostream>
#include <string>

class Layers_Bn
{
public:
    //Layers_Bn(int nInputNum, int nOutputNum, int nInputWidth, int nStride, const char *pcConvDwWname, const char *pcDwBnMname, const char *pcDwBnVname, const char *pcDwBnFname, const char *pcDwBnBname);
    Layers_Bn(int nInputNum, int nOutputNum, int nInputWidth, int nStride, int fileNum);
    ~Layers_Bn();
    void forward(float *pfInput);
    float *GetOutput();

private:
    ConvLayer *m_ConvlayerDw, *m_ConvlayerSep;
    BatchNormalLayer *m_ConvDwBN;
    ReluLayer *m_RelulayerDw;
};


#endif
