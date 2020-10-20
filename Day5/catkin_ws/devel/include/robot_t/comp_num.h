// Generated by gencpp from file robot_t/comp_num.msg
// DO NOT EDIT!


#ifndef ROBOT_T_MESSAGE_COMP_NUM_H
#define ROBOT_T_MESSAGE_COMP_NUM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_t
{
template <class ContainerAllocator>
struct comp_num_
{
  typedef comp_num_<ContainerAllocator> Type;

  comp_num_()
    : real(0)
    , imaginary(0)  {
    }
  comp_num_(const ContainerAllocator& _alloc)
    : real(0)
    , imaginary(0)  {
  (void)_alloc;
    }



   typedef int32_t _real_type;
  _real_type real;

   typedef int32_t _imaginary_type;
  _imaginary_type imaginary;





  typedef boost::shared_ptr< ::robot_t::comp_num_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_t::comp_num_<ContainerAllocator> const> ConstPtr;

}; // struct comp_num_

typedef ::robot_t::comp_num_<std::allocator<void> > comp_num;

typedef boost::shared_ptr< ::robot_t::comp_num > comp_numPtr;
typedef boost::shared_ptr< ::robot_t::comp_num const> comp_numConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_t::comp_num_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_t::comp_num_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_t::comp_num_<ContainerAllocator1> & lhs, const ::robot_t::comp_num_<ContainerAllocator2> & rhs)
{
  return lhs.real == rhs.real &&
    lhs.imaginary == rhs.imaginary;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_t::comp_num_<ContainerAllocator1> & lhs, const ::robot_t::comp_num_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_t

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robot_t::comp_num_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_t::comp_num_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_t::comp_num_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_t::comp_num_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_t::comp_num_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_t::comp_num_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_t::comp_num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "29494601c99dbe58165af75a7e636359";
  }

  static const char* value(const ::robot_t::comp_num_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x29494601c99dbe58ULL;
  static const uint64_t static_value2 = 0x165af75a7e636359ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_t::comp_num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_t/comp_num";
  }

  static const char* value(const ::robot_t::comp_num_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_t::comp_num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 real\n"
"int32 imaginary\n"
;
  }

  static const char* value(const ::robot_t::comp_num_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_t::comp_num_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.real);
      stream.next(m.imaginary);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct comp_num_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_t::comp_num_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_t::comp_num_<ContainerAllocator>& v)
  {
    s << indent << "real: ";
    Printer<int32_t>::stream(s, indent + "  ", v.real);
    s << indent << "imaginary: ";
    Printer<int32_t>::stream(s, indent + "  ", v.imaginary);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_T_MESSAGE_COMP_NUM_H
