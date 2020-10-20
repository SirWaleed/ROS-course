// Generated by gencpp from file robot_t/num_wordsRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_T_MESSAGE_NUM_WORDSREQUEST_H
#define ROBOT_T_MESSAGE_NUM_WORDSREQUEST_H


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
struct num_wordsRequest_
{
  typedef num_wordsRequest_<ContainerAllocator> Type;

  num_wordsRequest_()
    : mystring()  {
    }
  num_wordsRequest_(const ContainerAllocator& _alloc)
    : mystring(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mystring_type;
  _mystring_type mystring;





  typedef boost::shared_ptr< ::robot_t::num_wordsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_t::num_wordsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct num_wordsRequest_

typedef ::robot_t::num_wordsRequest_<std::allocator<void> > num_wordsRequest;

typedef boost::shared_ptr< ::robot_t::num_wordsRequest > num_wordsRequestPtr;
typedef boost::shared_ptr< ::robot_t::num_wordsRequest const> num_wordsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_t::num_wordsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_t::num_wordsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_t::num_wordsRequest_<ContainerAllocator1> & lhs, const ::robot_t::num_wordsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.mystring == rhs.mystring;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_t::num_wordsRequest_<ContainerAllocator1> & lhs, const ::robot_t::num_wordsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_t

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robot_t::num_wordsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_t::num_wordsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_t::num_wordsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_t::num_wordsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_t::num_wordsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_t::num_wordsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_t::num_wordsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8054fff057e825e73968032a7c26bc8";
  }

  static const char* value(const ::robot_t::num_wordsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8054fff057e825eULL;
  static const uint64_t static_value2 = 0x73968032a7c26bc8ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_t::num_wordsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_t/num_wordsRequest";
  }

  static const char* value(const ::robot_t::num_wordsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_t::num_wordsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string mystring\n"
"\n"
;
  }

  static const char* value(const ::robot_t::num_wordsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_t::num_wordsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mystring);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct num_wordsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_t::num_wordsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_t::num_wordsRequest_<ContainerAllocator>& v)
  {
    s << indent << "mystring: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mystring);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_T_MESSAGE_NUM_WORDSREQUEST_H
