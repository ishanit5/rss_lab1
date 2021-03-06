// Generated by gencpp from file ros_exercises/OpenSpace.msg
// DO NOT EDIT!


#ifndef ROS_EXERCISES_MESSAGE_OPENSPACE_H
#define ROS_EXERCISES_MESSAGE_OPENSPACE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_exercises
{
template <class ContainerAllocator>
struct OpenSpace_
{
  typedef OpenSpace_<ContainerAllocator> Type;

  OpenSpace_()
    : distance(0.0)
    , angle(0.0)  {
    }
  OpenSpace_(const ContainerAllocator& _alloc)
    : distance(0.0)
    , angle(0.0)  {
  (void)_alloc;
    }



   typedef float _distance_type;
  _distance_type distance;

   typedef float _angle_type;
  _angle_type angle;





  typedef boost::shared_ptr< ::ros_exercises::OpenSpace_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_exercises::OpenSpace_<ContainerAllocator> const> ConstPtr;

}; // struct OpenSpace_

typedef ::ros_exercises::OpenSpace_<std::allocator<void> > OpenSpace;

typedef boost::shared_ptr< ::ros_exercises::OpenSpace > OpenSpacePtr;
typedef boost::shared_ptr< ::ros_exercises::OpenSpace const> OpenSpaceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_exercises::OpenSpace_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_exercises::OpenSpace_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_exercises

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ros_exercises': ['/home/racecar/Desktop/lab1/rss_lab1/src/ros_exercises/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_exercises::OpenSpace_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_exercises::OpenSpace_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_exercises::OpenSpace_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_exercises::OpenSpace_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_exercises::OpenSpace_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_exercises::OpenSpace_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_exercises::OpenSpace_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ec24e737ddaa2f1769f4aa74f864401d";
  }

  static const char* value(const ::ros_exercises::OpenSpace_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xec24e737ddaa2f17ULL;
  static const uint64_t static_value2 = 0x69f4aa74f864401dULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_exercises::OpenSpace_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_exercises/OpenSpace";
  }

  static const char* value(const ::ros_exercises::OpenSpace_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_exercises::OpenSpace_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 distance\n\
float32 angle\n\
";
  }

  static const char* value(const ::ros_exercises::OpenSpace_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_exercises::OpenSpace_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance);
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OpenSpace_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_exercises::OpenSpace_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_exercises::OpenSpace_<ContainerAllocator>& v)
  {
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_EXERCISES_MESSAGE_OPENSPACE_H
