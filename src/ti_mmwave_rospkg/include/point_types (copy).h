/** \file
 *
 *  Customized Point Cloud Library point structures for mmWave1843Boost data.
 *
 *  @author Claude
 */
#ifndef PCL_NO_PRECOMPILE
#define PCL_NO_PRECOMPILE

#include <pcl/point_types.h>

/*customized structure X, Y, Z, Intensity, Velocity, Range*/
namespace radar_pcl {
struct PointXYZIVR {
  PCL_ADD_POINT4D;
  float intensity;
  float velocity;                  // velocity in cartesian
  float range;                     // range in cartesian
  EIGEN_MAKE_ALIGNED_OPERATOR_NEW     // ensure proper alignment
} EIGEN_ALIGN16;
} // namespace radar_pcl

POINT_CLOUD_REGISTER_POINT_STRUCT(radar_pcl::PointXYZIVR,
                                  (float, x, x)
                                  (float, y, y)
                                  (float, z, z)
                                  (float, intensity, intensity)
                                  (float, velocity, velocity)
                                  (float, range, range))

#endif //TI_MMWAVE_ROSPKG_SRC_TI_MMWAVE_ROSPKG_INCLUDE_POINT_TYPES_H_
