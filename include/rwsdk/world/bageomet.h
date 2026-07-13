#ifndef BAGEOMET_H
#define BAGEOMET_H

#define RpGeometryGetTriangles(_geometry) RpGeometryGetTrianglesMacro(_geometry)

#define RpGeometryGetTrianglesMacro(_geometry) ((_geometry)->triangles)

#define RpGeometryGetNumVertices(_geometry) ((_geometry)->numVertices)

#define RpMorphTargetGetVertices(_mt) RpMorphTargetGetVerticesMacro(_mt)

#define RpMorphTargetGetVerticesMacro(_mt) ((_mt)->verts)

#define RpGeometryGetMorphTarget(_geometry, _index) RpGeometryGetMorphTargetMacro(_geometry, _index)

#define RpGeometryGetMorphTargetMacro(_geometry, _index) (&((_geometry)->morphTarget[(_index)]))

#define RpMorphTargetGetVertexNormals(_mt) RpMorphTargetGetVertexNormalsMacro(_mt)

#define RpMorphTargetGetVertexNormalsMacro(_mt) ((_mt)->normals)

#endif
