/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jri.h"

/* Header for class java/lang/Throwable */

#ifndef _java_lang_Throwable_H_
#define _java_lang_Throwable_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct java_lang_Object;
struct java_lang_String;
struct java_io_PrintStream;
struct java_lang_Throwable;
struct java_lang_Class;

/*******************************************************************************
 * Class java/lang/Throwable
 ******************************************************************************/

typedef struct java_lang_Throwable java_lang_Throwable;

#define classname_java_lang_Throwable	"java/lang/Throwable"

#define class_java_lang_Throwable(env) \
	((struct java_lang_Class*)JRI_FindClass(env, classname_java_lang_Throwable))

/*******************************************************************************
 * Public Methods
 ******************************************************************************/

#ifdef DEBUG

/*** public <init> ()V ***/
extern JRI_PUBLIC_API(struct java_lang_Throwable*)
java_lang_Throwable_new(JRIEnv* env, struct java_lang_Class* clazz);

/*** public <init> (Ljava/lang/String;)V ***/
extern JRI_PUBLIC_API(struct java_lang_Throwable*)
java_lang_Throwable_new_1(JRIEnv* env, struct java_lang_Class* clazz, struct java_lang_String *a);

/*** public getMessage ()Ljava/lang/String; ***/
extern JRI_PUBLIC_API(struct java_lang_String *)
java_lang_Throwable_getMessage(JRIEnv* env, struct java_lang_Throwable* self);

/*** public toString ()Ljava/lang/String; ***/
extern JRI_PUBLIC_API(struct java_lang_String *)
java_lang_Throwable_toString(JRIEnv* env, struct java_lang_Throwable* self);

/*** public printStackTrace ()V ***/
extern JRI_PUBLIC_API(void)
java_lang_Throwable_printStackTrace(JRIEnv* env, struct java_lang_Throwable* self);

/*** public printStackTrace (Ljava/io/PrintStream;)V ***/
extern JRI_PUBLIC_API(void)
java_lang_Throwable_printStackTrace_1(JRIEnv* env, struct java_lang_Throwable* self, struct java_io_PrintStream *a);

/*** public native fillInStackTrace ()Ljava/lang/Throwable; ***/
extern JRI_PUBLIC_API(struct java_lang_Throwable *)
java_lang_Throwable_fillInStackTrace(JRIEnv* env, struct java_lang_Throwable* self);

#else /* !DEBUG */

/*** public <init> ()V ***/
#define java_lang_Throwable_new(env, clazz)	\
	((struct java_lang_Throwable*)JRI_NewObject(env)(env, JRI_NewObject_op, clazz, methodID_java_lang_Throwable_new))

/*** public <init> (Ljava/lang/String;)V ***/
#define java_lang_Throwable_new_1(env, clazz, a)	\
	((struct java_lang_Throwable*)JRI_NewObject(env)(env, JRI_NewObject_op, clazz, methodID_java_lang_Throwable_new_1, a))

/*** public getMessage ()Ljava/lang/String; ***/
#define java_lang_Throwable_getMessage(env, obj) \
	((struct java_lang_String *)JRI_CallMethod(env)(env, JRI_CallMethod_op, obj, methodID_java_lang_Throwable_getMessage))

/*** public toString ()Ljava/lang/String; ***/
#define java_lang_Throwable_toString(env, obj) \
	((struct java_lang_String *)JRI_CallMethod(env)(env, JRI_CallMethod_op, obj, methodID_java_lang_Throwable_toString))

/*** public printStackTrace ()V ***/
#define java_lang_Throwable_printStackTrace(env, obj) \
	((void)JRI_CallMethod(env)(env, JRI_CallMethod_op, obj, methodID_java_lang_Throwable_printStackTrace))

/*** public printStackTrace (Ljava/io/PrintStream;)V ***/
#define java_lang_Throwable_printStackTrace_1(env, obj, a) \
	((void)JRI_CallMethod(env)(env, JRI_CallMethod_op, obj, methodID_java_lang_Throwable_printStackTrace_1, a))

/*** public native fillInStackTrace ()Ljava/lang/Throwable; ***/
#define java_lang_Throwable_fillInStackTrace(env, obj) \
	((struct java_lang_Throwable *)JRI_CallMethod(env)(env, JRI_CallMethod_op, obj, methodID_java_lang_Throwable_fillInStackTrace))

#endif /* !DEBUG*/

/*** public <init> ()V ***/
extern JRIMethodID FAR methodID_java_lang_Throwable_new;
#define name_java_lang_Throwable_new	"<init>"
#define sig_java_lang_Throwable_new 	"()V"
#define use_java_lang_Throwable_new(env, clazz)	\
	(methodID_java_lang_Throwable_new =	\
		JRI_GetMethodID(env, clazz,	\
			name_java_lang_Throwable_new,	\
			sig_java_lang_Throwable_new))
#define unuse_java_lang_Throwable_new(env, clazz)	\
	(methodID_java_lang_Throwable_new = JRIUninitialized)

/*** public <init> (Ljava/lang/String;)V ***/
extern JRIMethodID FAR methodID_java_lang_Throwable_new_1;
#define name_java_lang_Throwable_new_1	"<init>"
#define sig_java_lang_Throwable_new_1 	"(Ljava/lang/String;)V"
#define use_java_lang_Throwable_new_1(env, clazz)	\
	(methodID_java_lang_Throwable_new_1 =	\
		JRI_GetMethodID(env, clazz,	\
			name_java_lang_Throwable_new_1,	\
			sig_java_lang_Throwable_new_1))
#define unuse_java_lang_Throwable_new_1(env, clazz)	\
	(methodID_java_lang_Throwable_new_1 = JRIUninitialized)

/*** public getMessage ()Ljava/lang/String; ***/
extern JRIMethodID FAR methodID_java_lang_Throwable_getMessage;
#define name_java_lang_Throwable_getMessage	"getMessage"
#define sig_java_lang_Throwable_getMessage 	"()Ljava/lang/String;"
#define use_java_lang_Throwable_getMessage(env, clazz)	\
	(methodID_java_lang_Throwable_getMessage =	\
		JRI_GetMethodID(env, clazz,	\
			name_java_lang_Throwable_getMessage,	\
			sig_java_lang_Throwable_getMessage))
#define unuse_java_lang_Throwable_getMessage(env, clazz)	\
	(methodID_java_lang_Throwable_getMessage = JRIUninitialized)

/*** public toString ()Ljava/lang/String; ***/
extern JRIMethodID FAR methodID_java_lang_Throwable_toString;
#define name_java_lang_Throwable_toString	"toString"
#define sig_java_lang_Throwable_toString 	"()Ljava/lang/String;"
#define use_java_lang_Throwable_toString(env, clazz)	\
	(methodID_java_lang_Throwable_toString =	\
		JRI_GetMethodID(env, clazz,	\
			name_java_lang_Throwable_toString,	\
			sig_java_lang_Throwable_toString))
#define unuse_java_lang_Throwable_toString(env, clazz)	\
	(methodID_java_lang_Throwable_toString = JRIUninitialized)

/*** public printStackTrace ()V ***/
extern JRIMethodID FAR methodID_java_lang_Throwable_printStackTrace;
#define name_java_lang_Throwable_printStackTrace	"printStackTrace"
#define sig_java_lang_Throwable_printStackTrace 	"()V"
#define use_java_lang_Throwable_printStackTrace(env, clazz)	\
	(methodID_java_lang_Throwable_printStackTrace =	\
		JRI_GetMethodID(env, clazz,	\
			name_java_lang_Throwable_printStackTrace,	\
			sig_java_lang_Throwable_printStackTrace))
#define unuse_java_lang_Throwable_printStackTrace(env, clazz)	\
	(methodID_java_lang_Throwable_printStackTrace = JRIUninitialized)

/*** public printStackTrace (Ljava/io/PrintStream;)V ***/
extern JRIMethodID FAR methodID_java_lang_Throwable_printStackTrace_1;
#define name_java_lang_Throwable_printStackTrace_1	"printStackTrace"
#define sig_java_lang_Throwable_printStackTrace_1 	"(Ljava/io/PrintStream;)V"
#define use_java_lang_Throwable_printStackTrace_1(env, clazz)	\
	(methodID_java_lang_Throwable_printStackTrace_1 =	\
		JRI_GetMethodID(env, clazz,	\
			name_java_lang_Throwable_printStackTrace_1,	\
			sig_java_lang_Throwable_printStackTrace_1))
#define unuse_java_lang_Throwable_printStackTrace_1(env, clazz)	\
	(methodID_java_lang_Throwable_printStackTrace_1 = JRIUninitialized)

/*** public native fillInStackTrace ()Ljava/lang/Throwable; ***/
extern JRIMethodID FAR methodID_java_lang_Throwable_fillInStackTrace;
#define name_java_lang_Throwable_fillInStackTrace	"fillInStackTrace"
#define sig_java_lang_Throwable_fillInStackTrace 	"()Ljava/lang/Throwable;"
#define use_java_lang_Throwable_fillInStackTrace(env, clazz)	\
	(methodID_java_lang_Throwable_fillInStackTrace =	\
		JRI_GetMethodID(env, clazz,	\
			name_java_lang_Throwable_fillInStackTrace,	\
			sig_java_lang_Throwable_fillInStackTrace))
#define unuse_java_lang_Throwable_fillInStackTrace(env, clazz)	\
	(methodID_java_lang_Throwable_fillInStackTrace = JRIUninitialized)

/*******************************************************************************
 * IMPLEMENTATION SECTION: 
 * Define the IMPLEMENT_java_lang_Throwable symbol 
 * if you intend to implement the native methods of this class. This 
 * symbol makes the private and protected methods available. You should 
 * also call the register_java_lang_Throwable routine 
 * to make your native methods available.
 ******************************************************************************/

extern JRI_PUBLIC_API(struct java_lang_Class*)
use_java_lang_Throwable(JRIEnv* env);

extern JRI_PUBLIC_API(void)
unuse_java_lang_Throwable(JRIEnv* env);

extern JRI_PUBLIC_API(struct java_lang_Class*)
register_java_lang_Throwable(JRIEnv* env);

extern JRI_PUBLIC_API(void)
unregister_java_lang_Throwable(JRIEnv* env);

#ifdef IMPLEMENT_java_lang_Throwable

/*******************************************************************************
 * Native Methods: 
 * These are the signatures of the native methods which you must implement.
 ******************************************************************************/

/*** private native printStackTrace0 (Ljava/io/PrintStream;)V ***/
extern JRI_PUBLIC_API(void)
native_java_lang_Throwable_printStackTrace0(JRIEnv* env, struct java_lang_Throwable* self, struct java_io_PrintStream *a);

/*** public native fillInStackTrace ()Ljava/lang/Throwable; ***/
extern JRI_PUBLIC_API(struct java_lang_Throwable *)
native_java_lang_Throwable_fillInStackTrace(JRIEnv* env, struct java_lang_Throwable* self);

/*******************************************************************************
 * Implementation Field Accessors: 
 * You should only use these from within the native method definitions.
 ******************************************************************************/

#ifdef DEBUG

/*** private backtrace Ljava/lang/Object; ***/
extern JRI_PUBLIC_API(struct java_lang_Object *)
get_java_lang_Throwable_backtrace(JRIEnv* env, java_lang_Throwable* obj);
extern JRI_PUBLIC_API(void)
set_java_lang_Throwable_backtrace(JRIEnv* env, java_lang_Throwable* obj, struct java_lang_Object * v);

/*** private detailMessage Ljava/lang/String; ***/
extern JRI_PUBLIC_API(struct java_lang_String *)
get_java_lang_Throwable_detailMessage(JRIEnv* env, java_lang_Throwable* obj);
extern JRI_PUBLIC_API(void)
set_java_lang_Throwable_detailMessage(JRIEnv* env, java_lang_Throwable* obj, struct java_lang_String * v);

#else /* !DEBUG */

/*** private backtrace Ljava/lang/Object; ***/
#define get_java_lang_Throwable_backtrace(env, obj) \
	((struct java_lang_Object *)JRI_GetField(env, obj, fieldID_java_lang_Throwable_backtrace))
#define set_java_lang_Throwable_backtrace(env, obj, v) \
	JRI_SetField(env, obj, fieldID_java_lang_Throwable_backtrace, v)

/*** private detailMessage Ljava/lang/String; ***/
#define get_java_lang_Throwable_detailMessage(env, obj) \
	((struct java_lang_String *)JRI_GetField(env, obj, fieldID_java_lang_Throwable_detailMessage))
#define set_java_lang_Throwable_detailMessage(env, obj, v) \
	JRI_SetField(env, obj, fieldID_java_lang_Throwable_detailMessage, v)

#endif /* !DEBUG*/

extern JRIFieldID FAR fieldID_java_lang_Throwable_backtrace;
#define name_java_lang_Throwable_backtrace	"backtrace"
#define sig_java_lang_Throwable_backtrace 	"Ljava/lang/Object;"
#define use_java_lang_Throwable_backtrace(env, clazz)	\
	(fieldID_java_lang_Throwable_backtrace =	\
		JRI_GetFieldID(env, clazz,	\
			name_java_lang_Throwable_backtrace,	\
			sig_java_lang_Throwable_backtrace))
#define unuse_java_lang_Throwable_backtrace(env, clazz)	\
		(fieldID_java_lang_Throwable_backtrace = JRIUninitialized)

extern JRIFieldID FAR fieldID_java_lang_Throwable_detailMessage;
#define name_java_lang_Throwable_detailMessage	"detailMessage"
#define sig_java_lang_Throwable_detailMessage 	"Ljava/lang/String;"
#define use_java_lang_Throwable_detailMessage(env, clazz)	\
	(fieldID_java_lang_Throwable_detailMessage =	\
		JRI_GetFieldID(env, clazz,	\
			name_java_lang_Throwable_detailMessage,	\
			sig_java_lang_Throwable_detailMessage))
#define unuse_java_lang_Throwable_detailMessage(env, clazz)	\
		(fieldID_java_lang_Throwable_detailMessage = JRIUninitialized)

/*******************************************************************************
 * Implementation Methods: 
 * You should only use these from within the native method definitions.
 ******************************************************************************/

#ifdef DEBUG

/*** private native printStackTrace0 (Ljava/io/PrintStream;)V ***/
extern JRI_PUBLIC_API(void)
java_lang_Throwable_printStackTrace0(JRIEnv* env, struct java_lang_Throwable* self, struct java_io_PrintStream *a);

#else /* !DEBUG */

/*** private native printStackTrace0 (Ljava/io/PrintStream;)V ***/
#define java_lang_Throwable_printStackTrace0(env, obj, a) \
	((void)JRI_CallMethod(env)(env, JRI_CallMethod_op, obj, methodID_java_lang_Throwable_printStackTrace0, a))

#endif /* !DEBUG*/

/*** private native printStackTrace0 (Ljava/io/PrintStream;)V ***/
extern JRIMethodID FAR methodID_java_lang_Throwable_printStackTrace0;
#define name_java_lang_Throwable_printStackTrace0	"printStackTrace0"
#define sig_java_lang_Throwable_printStackTrace0 	"(Ljava/io/PrintStream;)V"
#define use_java_lang_Throwable_printStackTrace0(env, clazz)	\
	(methodID_java_lang_Throwable_printStackTrace0 =	\
		JRI_GetMethodID(env, clazz,	\
			name_java_lang_Throwable_printStackTrace0,	\
			sig_java_lang_Throwable_printStackTrace0))
#define unuse_java_lang_Throwable_printStackTrace0(env, clazz)	\
	(methodID_java_lang_Throwable_printStackTrace0 = JRIUninitialized)

#endif /* IMPLEMENT_java_lang_Throwable */

#ifdef __cplusplus
} /* extern "C" */

/*******************************************************************************
 * C++ Definitions
 ******************************************************************************/

#include "java_lang_Object.h"

struct java_lang_Throwable : virtual public java_lang_Object {

	static struct java_lang_Class* _use(JRIEnv* env) {
		return use_java_lang_Throwable(env);
	}

	static void _unuse(JRIEnv* env) {
		unuse_java_lang_Throwable(env);
	}

	static struct java_lang_Class* _register(JRIEnv* env) {
		return register_java_lang_Throwable(env);
	}

	static void _unregister(JRIEnv* env) {
		unregister_java_lang_Throwable(env);
	}

	static struct java_lang_Class* _class(JRIEnv* env) {
		return class_java_lang_Throwable(env);
	}

	/* Public Methods */
	/*** public <init> ()V ***/
	static java_lang_Throwable* _new(JRIEnv* env, struct java_lang_Class* clazz) {
		return java_lang_Throwable_new(env, clazz);
	}

	/*** public <init> (Ljava/lang/String;)V ***/
	static java_lang_Throwable* _new(JRIEnv* env, struct java_lang_Class* clazz, struct java_lang_String *a) {
		return java_lang_Throwable_new_1(env, clazz, a);
	}

	/*** public getMessage ()Ljava/lang/String; ***/
	struct java_lang_String * getMessage(JRIEnv* env) {
		return java_lang_Throwable_getMessage(env, this);
	}

	/*** public toString ()Ljava/lang/String; ***/
	struct java_lang_String * toString(JRIEnv* env) {
		return java_lang_Throwable_toString(env, this);
	}

	/*** public printStackTrace ()V ***/
	void printStackTrace(JRIEnv* env) {
		java_lang_Throwable_printStackTrace(env, this);
	}

	/*** public printStackTrace (Ljava/io/PrintStream;)V ***/
	void printStackTrace(JRIEnv* env, struct java_io_PrintStream *a) {
		java_lang_Throwable_printStackTrace_1(env, this, a);
	}

	/*** public native fillInStackTrace ()Ljava/lang/Throwable; ***/
	struct java_lang_Throwable * fillInStackTrace(JRIEnv* env) {
		return java_lang_Throwable_fillInStackTrace(env, this);
	}

#ifdef IMPLEMENT_java_lang_Throwable

	/* Private Field Accessors */
	/*** private backtrace Ljava/lang/Object; ***/
	struct java_lang_Object * backtrace(JRIEnv* env) {
		return get_java_lang_Throwable_backtrace(env, this);
	}
	void backtrace(JRIEnv* env, struct java_lang_Object * v) {
		set_java_lang_Throwable_backtrace(env, this, v);
	}

	/*** private detailMessage Ljava/lang/String; ***/
	struct java_lang_String * detailMessage(JRIEnv* env) {
		return get_java_lang_Throwable_detailMessage(env, this);
	}
	void detailMessage(JRIEnv* env, struct java_lang_String * v) {
		set_java_lang_Throwable_detailMessage(env, this, v);
	}

	/* Private Methods */
	/*** private native printStackTrace0 (Ljava/io/PrintStream;)V ***/
	void printStackTrace0(JRIEnv* env, struct java_io_PrintStream *a) {
		java_lang_Throwable_printStackTrace0(env, this, a);
	}

#endif /* IMPLEMENT_java_lang_Throwable */
};

#endif /* __cplusplus */

#endif /* Class java/lang/Throwable */
