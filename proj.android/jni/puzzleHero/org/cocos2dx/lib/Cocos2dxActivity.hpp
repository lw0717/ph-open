/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.cocos2dx.lib.Cocos2dxActivity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_COCOS2DX_LIB_COCOS2DXACTIVITY_HPP_DECL
#define J2CPP_ORG_COCOS2DX_LIB_COCOS2DXACTIVITY_HPP_DECL


namespace j2cpp { namespace android { namespace view { namespace View_ { class OnCreateContextMenuListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace LayoutInflater_ { class Factory; } } } }
namespace j2cpp { namespace android { namespace view { class ContextThemeWrapper; } } }
namespace j2cpp { namespace android { namespace view { namespace Window_ { class Callback; } } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace content { class ComponentCallbacks; } } }
namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace cocos2dx { namespace lib { class Cocos2dxGLSurfaceView; } } } }
namespace j2cpp { namespace org { namespace cocos2dx { namespace lib { namespace Cocos2dxHelper_ { class Cocos2dxHelperListener; } } } } }


#include <android/app/Activity.hpp>
#include <android/content/ComponentCallbacks.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/view/ContextThemeWrapper.hpp>
#include <android/view/LayoutInflater.hpp>
#include <android/view/View.hpp>
#include <android/view/Window.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/String.hpp>
#include <org/cocos2dx/lib/Cocos2dxGLSurfaceView.hpp>
#include <org/cocos2dx/lib/Cocos2dxHelper.hpp>


namespace j2cpp {

namespace org { namespace cocos2dx { namespace lib {

	class Cocos2dxActivity;
	class Cocos2dxActivity
		: public object<Cocos2dxActivity>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit Cocos2dxActivity(jobject jobj)
		: object<Cocos2dxActivity>(jobj)
		{
		}

		operator local_ref<android::view::View_::OnCreateContextMenuListener>() const;
		operator local_ref<android::view::LayoutInflater_::Factory>() const;
		operator local_ref<android::view::ContextThemeWrapper>() const;
		operator local_ref<android::view::Window_::Callback>() const;
		operator local_ref<android::app::Activity>() const;
		operator local_ref<android::content::ComponentCallbacks>() const;
		operator local_ref<android::content::ContextWrapper>() const;
		operator local_ref<android::content::Context>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::cocos2dx::lib::Cocos2dxHelper_::Cocos2dxHelperListener>() const;


		Cocos2dxActivity();
		void showDialog(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void showEditTextDialog(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, jint, jint, jint, jint);
		void runOnGLThread(local_ref< java::lang::Runnable >  const&);
		void init();
		local_ref< org::cocos2dx::lib::Cocos2dxGLSurfaceView > onCreateGLSurfaceView();

	}; //class Cocos2dxActivity

} //namespace lib
} //namespace cocos2dx
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_COCOS2DX_LIB_COCOS2DXACTIVITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_COCOS2DX_LIB_COCOS2DXACTIVITY_HPP_IMPL
#define J2CPP_ORG_COCOS2DX_LIB_COCOS2DXACTIVITY_HPP_IMPL

namespace j2cpp {



org::cocos2dx::lib::Cocos2dxActivity::operator local_ref<android::view::View_::OnCreateContextMenuListener>() const
{
	return local_ref<android::view::View_::OnCreateContextMenuListener>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxActivity::operator local_ref<android::view::LayoutInflater_::Factory>() const
{
	return local_ref<android::view::LayoutInflater_::Factory>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxActivity::operator local_ref<android::view::ContextThemeWrapper>() const
{
	return local_ref<android::view::ContextThemeWrapper>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxActivity::operator local_ref<android::view::Window_::Callback>() const
{
	return local_ref<android::view::Window_::Callback>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxActivity::operator local_ref<android::app::Activity>() const
{
	return local_ref<android::app::Activity>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxActivity::operator local_ref<android::content::ComponentCallbacks>() const
{
	return local_ref<android::content::ComponentCallbacks>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxActivity::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxActivity::operator local_ref<android::content::Context>() const
{
	return local_ref<android::content::Context>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxActivity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxActivity::operator local_ref<org::cocos2dx::lib::Cocos2dxHelper_::Cocos2dxHelperListener>() const
{
	return local_ref<org::cocos2dx::lib::Cocos2dxHelper_::Cocos2dxHelperListener>(get_jobject());
}


org::cocos2dx::lib::Cocos2dxActivity::Cocos2dxActivity()
: object<org::cocos2dx::lib::Cocos2dxActivity>(
	call_new_object<
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_NAME(0),
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}





void org::cocos2dx::lib::Cocos2dxActivity::showDialog(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_NAME(4),
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

void org::cocos2dx::lib::Cocos2dxActivity::showEditTextDialog(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2, jint a3, jint a4, jint a5)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_NAME(5),
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void org::cocos2dx::lib::Cocos2dxActivity::runOnGLThread(local_ref< java::lang::Runnable > const &a0)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_NAME(6),
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void org::cocos2dx::lib::Cocos2dxActivity::init()
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_NAME(7),
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

local_ref< org::cocos2dx::lib::Cocos2dxGLSurfaceView > org::cocos2dx::lib::Cocos2dxActivity::onCreateGLSurfaceView()
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_NAME(8),
		org::cocos2dx::lib::Cocos2dxActivity::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::cocos2dx::lib::Cocos2dxGLSurfaceView >
	>(get_jobject());
}




J2CPP_DEFINE_CLASS(org::cocos2dx::lib::Cocos2dxActivity,"org/cocos2dx/lib/Cocos2dxActivity")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxActivity,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxActivity,1,"onCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxActivity,2,"onResume","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxActivity,3,"onPause","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxActivity,4,"showDialog","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxActivity,5,"showEditTextDialog","(Ljava/lang/String;Ljava/lang/String;IIII)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxActivity,6,"runOnGLThread","(Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxActivity,7,"init","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxActivity,8,"onCreateGLSurfaceView","()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxActivity,9,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxActivity,0,"TAG","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxActivity,1,"mGLSurefaceView","Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxActivity,2,"mHandler","Lorg/cocos2dx/lib/Cocos2dxHandler;")

} //namespace j2cpp

#endif //J2CPP_ORG_COCOS2DX_LIB_COCOS2DXACTIVITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION