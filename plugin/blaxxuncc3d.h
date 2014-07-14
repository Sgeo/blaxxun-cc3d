#if !defined(AFX_BLAXXUNCC3D_H__FCDD0FE2_5246_11D2_8761_00A0C9B63CC9__INCLUDED_)
#define AFX_BLAXXUNCC3D_H__FCDD0FE2_5246_11D2_8761_00A0C9B63CC9__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CblaxxunCC3D wrapper class

class CblaxxunCC3D : public CWnd
{
protected:
	DECLARE_DYNCREATE(CblaxxunCC3D)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x4b6e3013, 0x6e45, 0x11d0, { 0x93, 0x9, 0x0, 0x20, 0xaf, 0xe0, 0x5c, 0xc8 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	long GetReadyState();
	CString GetUrl();
	void SetUrl(LPCTSTR);
	CString GetRenderMode();
	void SetRenderMode(LPCTSTR);
	CString GetNavigationMode();
	void SetNavigationMode(LPCTSTR);
	short GetHeadlight();
	void SetHeadlight(short);
	float GetWalkSpeed();
	void SetWalkSpeed(float);
	BOOL GetAnimateAllViewpoints();
	void SetAnimateAllViewpoints(BOOL);
	CString GetViewpoint();
	void SetViewpoint(LPCTSTR);
	CString GetDescription();
	void SetDescription(LPCTSTR);
	CString GetWorld();
	void SetWorld(LPCTSTR);
	BOOL GetCollisionDetection();
	void SetCollisionDetection(BOOL);
	float GetAvatarHeight();
	void SetAvatarHeight(float);
	float GetCollisionDistance();
	void SetCollisionDistance(float);
	float GetVisibilityLimit();
	void SetVisibilityLimit(float);
	BOOL GetGravity();
	void SetGravity(BOOL);

// Operations
public:
	void OnNextViewpoint();
	void OnPrevViewpoint();
	CString getName();
	CString getVersion();
	float getCurrentSpeed();
	float getCurrentFrameRate();
	CString getWorldURL();
	void replaceWorld(LPUNKNOWN nodes);
	void loadURL(LPCTSTR url, LPCTSTR parameter);
	void setDescription(LPCTSTR description);
	LPUNKNOWN createVrmlFromString(LPCTSTR vrmlSyntax);
	void createVrmlFromURL(LPCTSTR url, LPDISPATCH node, LPCTSTR event);
	LPUNKNOWN getNode(LPCTSTR name);
	void addRoute(LPUNKNOWN fromNode, LPCTSTR fromEventOut, LPUNKNOWN toNode, LPCTSTR toEventIn);
	void deleteRoute(LPUNKNOWN fromNode, LPCTSTR fromEventOut, LPUNKNOWN toNode, LPCTSTR toEventIn);
	LPUNKNOWN createNode(LPCTSTR nodeclass);
	void addNode(LPUNKNOWN node);
	LPDISPATCH getWorld();
	void beginUpdate();
	void endUpdate();
	long setTimerInterval(long interval);
	BOOL isSceneLoaded();
	void setNodeName(LPUNKNOWN node, LPCTSTR name);
	CString getNodeName(LPUNKNOWN node);
	LPUNKNOWN getEventOut(LPCTSTR eventOutName);
	LPUNKNOWN getEventIn(LPCTSTR eventInName);
	CString getControlPathname();
	BOOL saveWorld(LPCTSTR fileName);
	void saveViewpoint(LPCTSTR viewpointName);
	BOOL setFullscreen(BOOL mode);
	BOOL removeNode(LPUNKNOWN node);
	BOOL setObserver(LPUNKNOWN observer, long flags);
	BOOL loadURLfromFile(LPCTSTR url, LPCTSTR mimeType, LPCTSTR fileName);
	void onUrlNotify(LPCTSTR url, LPCTSTR mimeType, LPCTSTR fileName, long reason);
	BOOL setObserverWnd(long hwndHandle);
	long getUiMode();
	void setUiMode(long newMode);
	void openPreferences(long flags);
	void playSound(LPCTSTR soundFilename);
	BOOL loadURLfromFile2(LPCTSTR url, LPCTSTR mimeType, long lastModified, long size, LPCTSTR fileName);
	void onUrlNotify2(LPCTSTR url, LPCTSTR mimeType, long lastModified, long size, LPCTSTR fileName, long reason);
	void print(LPCTSTR message);
	void setViewpointByValue(float positionX, float positionY, float positionZ, float orientationX, float orientationY, float orientationZ, float orientationAngle, long mode);
	void getViewpointByValue(float* positionX, float* positionY, float* positionZ, float* orientationX, float* orientationY, float* orientationZ, float* orientationAngle, long mode);
	BOOL getNodeBoundingBox(LPUNKNOWN node, long mode, float* xmin, float* ymin, float* zmin, float* xmax, float* ymax, float* zmax);
	void setUrl2(LPCTSTR url, long lastModified, long mode);
	long getInterfaceVersion();
	void setThirdPersonView(BOOL mode);
	BOOL getThirdPersonView();
	LPUNKNOWN computeRayHit(LPUNKNOWN startNode, float startx, float starty, float startz, float endx, float endy, float endz, long mode);
	void setMyAvatarNode(LPUNKNOWN node);
	LPUNKNOWN getMyAvatarNode();
	void setMyAvatarURL(LPCTSTR url);
	CString getMyAvatarURL();
	BOOL setViewpointFollow(LPUNKNOWN node, float refX, float refY, float refZ, long mode);
	BOOL setNodeEventIn(LPCTSTR nodeName, LPCTSTR eventInName, LPCTSTR value);
	CString getNodeEventOut(LPCTSTR nodeName, LPCTSTR eventOutName);
	LPUNKNOWN getObject(long objectId);
	void setNavigationPanel(BOOL mode);
	BOOL getNavigationPanel();
	void AboutBox();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BLAXXUNCC3D_H__FCDD0FE2_5246_11D2_8761_00A0C9B63CC9__INCLUDED_)