/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.platformtools.MAlarmHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MALARMHANDLER_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MALARMHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace com { namespace tencent { namespace mm { namespace sdk { namespace platformtools { namespace MAlarmHandler_ { class IBumper; } } } } } } }
namespace j2cpp { namespace com { namespace tencent { namespace mm { namespace sdk { namespace platformtools { namespace MAlarmHandler_ { class CallBack; } } } } } } }


#include <com/tencent/mm/sdk/platformtools/MAlarmHandler.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace platformtools {

	class MAlarmHandler;
	namespace MAlarmHandler_ {

		class CallBack;
		class CallBack
			: public object<CallBack>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit CallBack(jobject jobj)
			: object<CallBack>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean onTimerExpired();
		}; //class CallBack

		class IBumper;
		class IBumper
			: public object<IBumper>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit IBumper(jobject jobj)
			: object<IBumper>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void prepare();
			void cancel();
		}; //class IBumper

	} //namespace MAlarmHandler_

	class MAlarmHandler
		: public object<MAlarmHandler>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)

		typedef MAlarmHandler_::CallBack CallBack;
		typedef MAlarmHandler_::IBumper IBumper;

		explicit MAlarmHandler(jobject jobj)
		: object<MAlarmHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static void initAlarmBumper(local_ref< com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper >  const&);
		MAlarmHandler(local_ref< com::tencent::mm::sdk::platformtools::MAlarmHandler_::CallBack > const&, jboolean);
		static jlong fire();
		void startTimer(jlong);
		void stopTimer();
		jboolean stopped();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jlong > NEXT_FIRE_INTERVAL;
	}; //class MAlarmHandler

} //namespace platformtools
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MALARMHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MALARMHANDLER_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MALARMHANDLER_HPP_IMPL

namespace j2cpp {




com::tencent::mm::sdk::platformtools::MAlarmHandler_::CallBack::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean com::tencent::mm::sdk::platformtools::MAlarmHandler_::CallBack::onTimerExpired()
{
	return call_method<
		com::tencent::mm::sdk::platformtools::MAlarmHandler_::CallBack::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MAlarmHandler_::CallBack::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::platformtools::MAlarmHandler_::CallBack::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::platformtools::MAlarmHandler_::CallBack,"com/tencent/mm/sdk/platformtools/MAlarmHandler$CallBack")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler_::CallBack,0,"onTimerExpired","()Z")


com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper::prepare()
{
	return call_method<
		com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}

void com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper::cancel()
{
	return call_method<
		com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper,"com/tencent/mm/sdk/platformtools/MAlarmHandler$IBumper")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper,0,"prepare","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper,1,"cancel","()V")



com::tencent::mm::sdk::platformtools::MAlarmHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void com::tencent::mm::sdk::platformtools::MAlarmHandler::initAlarmBumper(local_ref< com::tencent::mm::sdk::platformtools::MAlarmHandler_::IBumper > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(a0);
}



com::tencent::mm::sdk::platformtools::MAlarmHandler::MAlarmHandler(local_ref< com::tencent::mm::sdk::platformtools::MAlarmHandler_::CallBack > const &a0, jboolean a1)
: object<com::tencent::mm::sdk::platformtools::MAlarmHandler>(
	call_new_object<
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}


jlong com::tencent::mm::sdk::platformtools::MAlarmHandler::fire()
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>();
}

void com::tencent::mm::sdk::platformtools::MAlarmHandler::startTimer(jlong a0)
{
	return call_method<
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_NAME(4),
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void com::tencent::mm::sdk::platformtools::MAlarmHandler::stopTimer()
{
	return call_method<
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_NAME(5),
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

jboolean com::tencent::mm::sdk::platformtools::MAlarmHandler::stopped()
{
	return call_method<
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_NAME(6),
		com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}



static_field<
	com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_FIELD_NAME(9),
	com::tencent::mm::sdk::platformtools::MAlarmHandler::J2CPP_FIELD_SIGNATURE(9),
	jlong
> com::tencent::mm::sdk::platformtools::MAlarmHandler::NEXT_FIRE_INTERVAL;


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::platformtools::MAlarmHandler,"com/tencent/mm/sdk/platformtools/MAlarmHandler")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler,0,"initAlarmBumper","(Lcom/tencent/mm/sdk/platformtools/MAlarmHandler$IBumper;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler,1,"finalize","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler,2,"<init>","(Lcom/tencent/mm/sdk/platformtools/MAlarmHandler$CallBack;Z)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler,3,"fire","()J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler,4,"startTimer","(J)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler,5,"stopTimer","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler,6,"stopped","()Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::MAlarmHandler,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MAlarmHandler,0,"av","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MAlarmHandler,1,"aw","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MAlarmHandler,2,"ax","Z")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MAlarmHandler,3,"ay","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MAlarmHandler,4,"az","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MAlarmHandler,5,"aA","Ljava/util/Map;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MAlarmHandler,6,"aB","Lcom/tencent/mm/sdk/platformtools/MAlarmHandler$CallBack;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MAlarmHandler,7,"aC","Lcom/tencent/mm/sdk/platformtools/MAlarmHandler$IBumper;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MAlarmHandler,8,"aD","Z")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::MAlarmHandler,9,"NEXT_FIRE_INTERVAL","J")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_MALARMHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
