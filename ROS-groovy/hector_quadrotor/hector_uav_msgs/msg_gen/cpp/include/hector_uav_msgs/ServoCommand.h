/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-groovy-hector-quadrotor-0.2.3/debian/ros-groovy-hector-quadrotor/opt/ros/groovy/stacks/hector_quadrotor/hector_uav_msgs/msg/ServoCommand.msg */
#ifndef HECTOR_UAV_MSGS_MESSAGE_SERVOCOMMAND_H
#define HECTOR_UAV_MSGS_MESSAGE_SERVOCOMMAND_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace hector_uav_msgs
{
template <class ContainerAllocator>
struct ServoCommand_ {
  typedef ServoCommand_<ContainerAllocator> Type;

  ServoCommand_()
  : header()
  , value()
  {
  }

  ServoCommand_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , value(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _value_type;
  std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  value;


  typedef boost::shared_ptr< ::hector_uav_msgs::ServoCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_uav_msgs::ServoCommand_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ServoCommand
typedef  ::hector_uav_msgs::ServoCommand_<std::allocator<void> > ServoCommand;

typedef boost::shared_ptr< ::hector_uav_msgs::ServoCommand> ServoCommandPtr;
typedef boost::shared_ptr< ::hector_uav_msgs::ServoCommand const> ServoCommandConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hector_uav_msgs::ServoCommand_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hector_uav_msgs::ServoCommand_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hector_uav_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hector_uav_msgs::ServoCommand_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hector_uav_msgs::ServoCommand_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hector_uav_msgs::ServoCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d60ef35d4e3412dc6686b189be2523d0";
  }

  static const char* value(const  ::hector_uav_msgs::ServoCommand_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd60ef35d4e3412dcULL;
  static const uint64_t static_value2 = 0x6686b189be2523d0ULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_uav_msgs::ServoCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_uav_msgs/ServoCommand";
  }

  static const char* value(const  ::hector_uav_msgs::ServoCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hector_uav_msgs::ServoCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
uint16[] value\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::hector_uav_msgs::ServoCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::hector_uav_msgs::ServoCommand_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::hector_uav_msgs::ServoCommand_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hector_uav_msgs::ServoCommand_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ServoCommand_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hector_uav_msgs::ServoCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hector_uav_msgs::ServoCommand_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "value[]" << std::endl;
    for (size_t i = 0; i < v.value.size(); ++i)
    {
      s << indent << "  value[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.value[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // HECTOR_UAV_MSGS_MESSAGE_SERVOCOMMAND_H

