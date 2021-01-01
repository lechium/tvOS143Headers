/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class CADisplay, NSObject, BSAtomicSignal, FBSDisplayMonitor, FBSDisplayConfiguration, NSString;

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding> {

	CADisplay* _display;
	BOOL _isMain;
	unsigned _displayID;
	unsigned _instanceID;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	BOOL _observing;
	BOOL _initialized;
	BSAtomicSignal* _invalidated;
	os_unfair_lock_s _lock;
	FBSDisplayMonitor* _lock_monitor;
	FBSDisplayConfiguration* _lock_configuration;
	BOOL _lock_allowsUnknown;
	int _lock_attachment;
	unsigned _lock_debounceToken;
	FBSDisplayConfiguration* _lock_reportedConfiguration;
	os_unfair_lock_s _externallyVisibleLock;
	int _evlock_attachment;
	FBSDisplayConfiguration* _evlock_configuration;
	FBSDisplayConfiguration* _evlock_reportedConfiguration;

}

@property (nonatomic,readonly) unsigned displayID;                                                 //@synthesize displayID=_displayID - In the implementation block
@property (assign,nonatomic) BOOL allowsUnknown; 
@property (nonatomic,copy,readonly) FBSDisplayConfiguration * connectedConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(unsigned)displayID;
-(id)initWithMainDisplay:(id)arg1 monitor:(id)arg2 ;
-(id)initWithNonMainDisplay:(id)arg1 monitor:(id)arg2 ;
-(void)setAllowsUnknown:(BOOL)arg1 ;
-(FBSDisplayConfiguration *)connectedConfiguration;
-(id)_initWithDisplay:(id)arg1 monitor:(id)arg2 isMain:(BOOL)arg3 ;
-(void)_lock_update;
-(void)_lock_setConfiguration:(id)arg1 ;
-(void)_lock_noteConnected;
-(void)_lock_noteUpdated;
-(void)_lock_noteDisconnecting;
-(void)_lock_setAttachment:(int)arg1 ;
-(id)_lock_setReportedConfiguration:(id)arg1 ;
-(BOOL)allowsUnknown;
@end

