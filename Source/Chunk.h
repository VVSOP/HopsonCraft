#ifndef CHUNK_H
#define CHUNK_H

#include <vector>

#include "OpenGL/GLEW/glew.h"
#include "../Loader.h"

#include "Height_Generator.h"
#include "Perlin.h"

class Block;

class Chunk
{
    public:
        Chunk   ( Loader& loader, int x, int z, Height_Generator& generator );
        ~Chunk  ();

        Block& getBlock( int x, int y, int z );

        constexpr static int HEIGHT = 128;//128
        constexpr static int WIDTH  = 16;//16

        static Block air;

        MeshPtr tempMesh;

    private:
        void makeBlock ( GLfloat x, GLfloat y, GLfloat z, const Block& block );

        void makeBack   (   GLfloat x, GLfloat y, GLfloat z, const Block& block );
        void makeTop    (   GLfloat x, GLfloat y, GLfloat z, const Block& block );
        void makeLeft   (   GLfloat x, GLfloat y, GLfloat z, const Block& block );
        void makeRight  (   GLfloat x, GLfloat y, GLfloat z, const Block& block );
        void makeFront  (   GLfloat x, GLfloat y, GLfloat z, const Block& block );
        void makeBottom (   GLfloat x, GLfloat y, GLfloat z, const Block& block );


        int m_xPos;
        int m_zPos;

        std::vector<Block*> m_blocks;

        std::vector<GLfloat>    m_vertexList;
        std::vector<GLfloat>    m_textureList;
};

#endif // CHUNK_H
