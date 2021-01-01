/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBSProcessIdentifier.h>

@protocol RBJetsamBandProviding, OS_dispatch_source, RBBundleProperties;
@class RBSProcessIdentity, RBSProcessHandle, NSString, RBProcessState, NSObject, RBSProcessIdentifier, RBSProcessInstance, RBSProcessExitContext, RBSProcessExitStatus, RBSAuditToken;

@interface RBProcess : NSObject <RBSProcessIdentifier> {

	int _pid;
	RBSProcessIdentity* _identity;
	RBSProcessHandle* _handle;
	NSString* _shortDescription;
	id<RBJetsamBandProviding> _jetsamProvider;
	RBProcess* _hostProcess;
	os_unfair_lock_s _lock;
	os_unfair_lock_s _dataLock;
	RBProcessState* _lock_appliedState;
	RBProcessState* _lock_state;
	int _appliedJetsamPriority;
	BOOL _platformBinary;
	BOOL _usesSocketMonitoring;
	BOOL _systemPreventsIdleSleep;
	BOOL _diagnosticsStarted;
	BOOL _diagnosticsComplete;
	int _appNapEligible;
	int _isTestApp;
	unsigned char _manageFlags;
	NSObject*<OS_dispatch_source> _procSource;
	double _cachedProcessStartTime;
	BOOL _systemShell;
	BOOL _terminating;
	BOOL _suspended;
	int _requestedJetsamPriority;
	RBSProcessIdentifier* _identifier;
	RBSProcessInstance* _instance;
	RBSProcessExitContext* _lastExitContext;
	RBSProcessExitStatus* _intendedExitStatus;
	id<RBBundleProperties> _bundleProperties;
	RBSAuditToken* _auditToken;
	NSString* _underlyingAssertion;
	double _processStartTime;
	NSString* _homeDirectory;
	NSString* _tmpDirectory;

}

@property (nonatomic,copy,readonly) RBSProcessIdentifier * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessHandle * handle;                               //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity;                           //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessInstance * instance;                           //@synthesize instance=_instance - In the implementation block
@property (nonatomic,copy) RBSAuditToken * auditToken;                                       //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) id<RBBundleProperties> bundleProperties;                      //@synthesize bundleProperties=_bundleProperties - In the implementation block
@property (nonatomic,readonly) RBProcess * hostProcess;                                      //@synthesize hostProcess=_hostProcess - In the implementation block
@property (assign,getter=isTerminating,nonatomic) BOOL terminating;                          //@synthesize terminating=_terminating - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription;                                  //@synthesize shortDescription=_shortDescription - In the implementation block
@property (nonatomic,copy) RBSProcessExitStatus * intendedExitStatus;                        //@synthesize intendedExitStatus=_intendedExitStatus - In the implementation block
@property (nonatomic,retain) RBSProcessExitContext * lastExitContext;                        //@synthesize lastExitContext=_lastExitContext - In the implementation block
@property (getter=isBeingPtraced,nonatomic,readonly) BOOL beingPtraced; 
@property (getter=isLifecycleManaged,nonatomic,readonly) BOOL lifecycleManaged; 
@property (getter=isReported,nonatomic,readonly) BOOL reported; 
@property (getter=isPlatformBinary,nonatomic,readonly) BOOL platformBinary;                  //@synthesize platformBinary=_platformBinary - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended;                            //@synthesize suspended=_suspended - In the implementation block
@property (getter=isTestApp,nonatomic,readonly) BOOL testApp; 
@property (nonatomic,readonly) int currentJetsamPriority; 
@property (nonatomic,readonly) int requestedJetsamPriority;                                  //@synthesize requestedJetsamPriority=_requestedJetsamPriority - In the implementation block
@property (getter=isSystemShell,nonatomic,readonly) BOOL systemShell;                        //@synthesize systemShell=_systemShell - In the implementation block
@property (nonatomic,readonly) NSString * underlyingAssertion;                               //@synthesize underlyingAssertion=_underlyingAssertion - In the implementation block
@property (nonatomic,readonly) double processStartTime;                                      //@synthesize processStartTime=_processStartTime - In the implementation block
@property (nonatomic,readonly) NSString * homeDirectory;                                     //@synthesize homeDirectory=_homeDirectory - In the implementation block
@property (nonatomic,readonly) NSString * tmpDirectory;                                      //@synthesize tmpDirectory=_tmpDirectory - In the implementation block
@property (getter=isContainerized,nonatomic,readonly) BOOL containerized; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)testProcessWithPid:(int)arg1 ;
-(NSString *)description;
-(id)init;
-(RBSProcessHandle *)handle;
-(void)invalidate;
-(RBSProcessIdentifier *)identifier;
-(RBSProcessIdentity *)identity;
-(RBSAuditToken *)auditToken;
-(BOOL)isSuspended;
-(RBSProcessInstance *)instance;
-(NSString *)shortDescription;
-(RBSProcessExitContext *)lastExitContext;
-(BOOL)matchesProcess:(id)arg1 ;
-(int)rbs_pid;
-(RBProcess *)hostProcess;
-(void)setTerminating:(BOOL)arg1 ;
-(BOOL)isContainerized;
-(double)processStartTime;
-(NSString *)homeDirectory;
-(void)setAuditToken:(RBSAuditToken *)arg1 ;
-(BOOL)isPlatformBinary;
-(id)processPredicate;
-(void)_applyState:(id)arg1 ;
-(int)requestedJetsamPriority;
-(BOOL)isLifecycleManaged;
-(BOOL)isReported;
-(NSString *)underlyingAssertion;
-(BOOL)isTerminating;
-(BOOL)isTestApp;
-(void)invokeHandlerOnProcessDeath:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(NSString *)tmpDirectory;
-(void)setLastExitContext:(RBSProcessExitContext *)arg1 ;
-(id)_initWithInstance:(id)arg1 auditToken:(id)arg2 bundleProperties:(id)arg3 jetsamBandProvider:(id)arg4 initialState:(id)arg5 hostProcess:(id)arg6 properties:(id)arg7 systemPreventsIdleSleep:(BOOL)arg8 ;
-(BOOL)isSystemShell;
-(BOOL)_sendSignal:(int)arg1 ;
-(BOOL)isBeingPtraced;
-(void)_systemPreventIdleSleepStateDidChange:(BOOL)arg1 ;
-(int)currentJetsamPriority;
-(void)collectDiagnostic:(unsigned long long)arg1 description:(id)arg2 code:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)terminateWithContext:(id)arg1 ;
-(RBSProcessExitStatus *)intendedExitStatus;
-(void)setIntendedExitStatus:(RBSProcessExitStatus *)arg1 ;
-(id<RBBundleProperties>)bundleProperties;
@end

