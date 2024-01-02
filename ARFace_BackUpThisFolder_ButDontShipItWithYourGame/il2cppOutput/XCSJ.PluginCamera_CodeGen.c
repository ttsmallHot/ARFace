#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Collections.Generic.List`1<XCSJ.Scripts.Script> XCSJ.PluginCamera.CameraManager::GetScripts()
extern void CameraManager_GetScripts_mDD17072ACE08F34BF45F5A645566D2D32C6EFF16 (void);
// 0x00000002 XCSJ.Algorithms.ReturnValue XCSJ.PluginCamera.CameraManager::ExecuteScript(System.Int32,XCSJ.Scripts.ScriptParamList)
extern void CameraManager_ExecuteScript_m053A94AF9CAC6D1D422549C4A1058D0E197D3345 (void);
// 0x00000003 XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider XCSJ.PluginCamera.CameraManager::get_cameraManagerProvider()
extern void CameraManager_get_cameraManagerProvider_m237B8307AC74EFFD5B44130306197F9C407328E7 (void);
// 0x00000004 System.Void XCSJ.PluginCamera.CameraManager::.ctor()
extern void CameraManager__ctor_m1C07A270E47DE4F5DCA9393559AA1C15E88329C1 (void);
// 0x00000005 XCSJ.PluginCamera.Kernel.ICameraHandler XCSJ.PluginCamera.Kernel.CameraHandler::get_handler()
extern void CameraHandler_get_handler_m05393EAF7E208951C038EEE591C269C59FC0D998 (void);
// 0x00000006 System.Void XCSJ.PluginCamera.Kernel.CameraHandler::set_handler(XCSJ.PluginCamera.Kernel.ICameraHandler)
extern void CameraHandler_set_handler_m454BCFE3C84E58611DEE0EE274D865BD5549A0E4 (void);
// 0x00000007 System.Collections.Generic.List`1<XCSJ.Scripts.Script> XCSJ.PluginCamera.Kernel.CameraHandler::GetScripts(XCSJ.PluginCamera.CameraManager)
extern void CameraHandler_GetScripts_mCB929CE5B7251BA57B1EAFAFA71630819D8E0955 (void);
// 0x00000008 XCSJ.Algorithms.ReturnValue XCSJ.PluginCamera.Kernel.CameraHandler::RunScript(XCSJ.PluginCamera.CameraManager,System.Int32,XCSJ.Scripts.ScriptParamList)
extern void CameraHandler_RunScript_mD6C071F3D925BE7D436FCAD5F9CA0A748A1EE529 (void);
// 0x00000009 XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider XCSJ.PluginCamera.Kernel.CameraHandler::GetCameraManagerProvider(XCSJ.PluginCamera.CameraManager)
extern void CameraHandler_GetCameraManagerProvider_m4EEEB9BF25BBF796EB1410F2665E9C2BD120073A (void);
// 0x0000000A XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider XCSJ.PluginCamera.Kernel.ICameraHandler::GetCameraManagerProvider(XCSJ.PluginCamera.CameraManager)
// 0x0000000B System.Void XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider::.ctor()
extern void BaseCameraManagerProvider__ctor_m02D9BD7EE7AAB253DBB5DDFA5A3A18DD683D4563 (void);
// 0x0000000C System.Void XCSJ.PluginCamera.Base.BaseCameraProvider::.ctor()
extern void BaseCameraProvider__ctor_mB7AE1717937EE26F3F4AF09DAAA8B34F3464F263 (void);
static Il2CppMethodPointer s_methodPointers[12] = 
{
	CameraManager_GetScripts_mDD17072ACE08F34BF45F5A645566D2D32C6EFF16,
	CameraManager_ExecuteScript_m053A94AF9CAC6D1D422549C4A1058D0E197D3345,
	CameraManager_get_cameraManagerProvider_m237B8307AC74EFFD5B44130306197F9C407328E7,
	CameraManager__ctor_m1C07A270E47DE4F5DCA9393559AA1C15E88329C1,
	CameraHandler_get_handler_m05393EAF7E208951C038EEE591C269C59FC0D998,
	CameraHandler_set_handler_m454BCFE3C84E58611DEE0EE274D865BD5549A0E4,
	CameraHandler_GetScripts_mCB929CE5B7251BA57B1EAFAFA71630819D8E0955,
	CameraHandler_RunScript_mD6C071F3D925BE7D436FCAD5F9CA0A748A1EE529,
	CameraHandler_GetCameraManagerProvider_m4EEEB9BF25BBF796EB1410F2665E9C2BD120073A,
	NULL,
	BaseCameraManagerProvider__ctor_m02D9BD7EE7AAB253DBB5DDFA5A3A18DD683D4563,
	BaseCameraProvider__ctor_mB7AE1717937EE26F3F4AF09DAAA8B34F3464F263,
};
static const int32_t s_InvokerIndices[12] = 
{
	6402,
	2446,
	6402,
	6512,
	10352,
	10231,
	9988,
	8298,
	9988,
	0,
	6512,
	6512,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_XCSJ_PluginCamera_CodeGenModule;
const Il2CppCodeGenModule g_XCSJ_PluginCamera_CodeGenModule = 
{
	"XCSJ.PluginCamera.dll",
	12,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
