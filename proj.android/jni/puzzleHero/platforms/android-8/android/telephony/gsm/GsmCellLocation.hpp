/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.telephony.gsm.GsmCellLocation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace telephony { class CellLocation; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Bundle.hpp>
#include <android/telephony/CellLocation.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace telephony { namespace gsm {

	class GsmCellLocation;
	class GsmCellLocation
		: public object<GsmCellLocation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)

		explicit GsmCellLocation(jobject jobj)
		: object<GsmCellLocation>(jobj)
		{
		}

		operator local_ref<android::telephony::CellLocation>() const;
		operator local_ref<java::lang::Object>() const;


		GsmCellLocation();
		GsmCellLocation(local_ref< android::os::Bundle > const&);
		jint getLac();
		jint getCid();
		void setStateInvalid();
		void setLacAndCid(jint, jint);
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
		void fillInNotifierBundle(local_ref< android::os::Bundle >  const&);
	}; //class GsmCellLocation

} //namespace gsm
} //namespace telephony
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_IMPL

namespace j2cpp {



android::telephony::gsm::GsmCellLocation::operator local_ref<android::telephony::CellLocation>() const
{
	return local_ref<android::telephony::CellLocation>(get_jobject());
}

android::telephony::gsm::GsmCellLocation::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::telephony::gsm::GsmCellLocation::GsmCellLocation()
: object<android::telephony::gsm::GsmCellLocation>(
	call_new_object<
		android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME,
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(0),
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::telephony::gsm::GsmCellLocation::GsmCellLocation(local_ref< android::os::Bundle > const &a0)
: object<android::telephony::gsm::GsmCellLocation>(
	call_new_object<
		android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME,
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(1),
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint android::telephony::gsm::GsmCellLocation::getLac()
{
	return call_method<
		android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME,
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(2),
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint android::telephony::gsm::GsmCellLocation::getCid()
{
	return call_method<
		android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME,
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(3),
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

void android::telephony::gsm::GsmCellLocation::setStateInvalid()
{
	return call_method<
		android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME,
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(4),
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void android::telephony::gsm::GsmCellLocation::setLacAndCid(jint a0, jint a1)
{
	return call_method<
		android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME,
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(5),
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1);
}

jint android::telephony::gsm::GsmCellLocation::hashCode()
{
	return call_method<
		android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME,
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(6),
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jboolean android::telephony::gsm::GsmCellLocation::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME,
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(7),
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::telephony::gsm::GsmCellLocation::toString()
{
	return call_method<
		android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME,
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(8),
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void android::telephony::gsm::GsmCellLocation::fillInNotifierBundle(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME,
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(9),
		android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::telephony::gsm::GsmCellLocation,"android/telephony/gsm/GsmCellLocation")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,1,"<init>","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,2,"getLac","()I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,3,"getCid","()I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,4,"setStateInvalid","()V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,5,"setLacAndCid","(II)V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,6,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,7,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,8,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,9,"fillInNotifierBundle","(Landroid/os/Bundle;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION