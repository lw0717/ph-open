/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.ConnectionReleaseTrigger
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONRELEASETRIGGER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONRELEASETRIGGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class ConnectionReleaseTrigger;
	class ConnectionReleaseTrigger
		: public object<ConnectionReleaseTrigger>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ConnectionReleaseTrigger(jobject jobj)
		: object<ConnectionReleaseTrigger>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void releaseConnection();
		void abortConnection();
	}; //class ConnectionReleaseTrigger

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONRELEASETRIGGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONRELEASETRIGGER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONRELEASETRIGGER_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::ConnectionReleaseTrigger::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void org::apache::http::conn::ConnectionReleaseTrigger::releaseConnection()
{
	return call_method<
		org::apache::http::conn::ConnectionReleaseTrigger::J2CPP_CLASS_NAME,
		org::apache::http::conn::ConnectionReleaseTrigger::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::ConnectionReleaseTrigger::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}

void org::apache::http::conn::ConnectionReleaseTrigger::abortConnection()
{
	return call_method<
		org::apache::http::conn::ConnectionReleaseTrigger::J2CPP_CLASS_NAME,
		org::apache::http::conn::ConnectionReleaseTrigger::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::ConnectionReleaseTrigger::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::ConnectionReleaseTrigger,"org/apache/http/conn/ConnectionReleaseTrigger")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ConnectionReleaseTrigger,0,"releaseConnection","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ConnectionReleaseTrigger,1,"abortConnection","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONRELEASETRIGGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
