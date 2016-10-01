#include "Dirt_Block.h"

Dirt_Block :: Dirt_Block()
:   Block ( Block_Type::Dirt )
{
    //ctor
}
















//Texture/ OpenGL stuff:
std::vector<GLfloat> Dirt_Block :: getSideTxrCoords () const
{
    static const std::vector<GLfloat> sideTextures =
    {
        0.75,   0,
        0.75,   1,
        0.5,    1,

        0.5,    0,
        0.75,   0,
        0.5,    1
    };

    return sideTextures;
}
std::vector<GLfloat> Dirt_Block :: getTopTxrCoords() const
{
    static const std::vector<GLfloat> topTextures =
    {
        0.75,   0,
        0.75,   1,
        0.5,    1,

        0.5,    0,
        0.75,   0,
        0.5,    1
    };

    return topTextures;
}

std::vector<GLfloat> Dirt_Block :: getBottomTxrCoords() const
{
    static const std::vector<GLfloat> bottomTextures =
    {
        0.75,   0,
        0.75,   1,
        0.5,    1,

        0.5,    0,
        0.75,   0,
        0.5,    1
    };

    return bottomTextures;
}
