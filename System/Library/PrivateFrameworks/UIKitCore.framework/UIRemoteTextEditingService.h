/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIRemoteTextEditing.h>

@class NSXPCConnection, NSMutableDictionary, NSMutableSet, CADisplay, NSString;

@interface UIRemoteTextEditingService : NSObject <UIRemoteTextEditing> {

	BOOL _observedDisplayAllowsEditing;
	BOOL _applicationIsActive;
	BOOL _viewServiceHostIsActive;
	NSXPCConnection* _connection;
	NSXPCConnection* _legacyConnection;
	NSXPCConnection* _sharingConnection;
	NSMutableDictionary* _activeSessions;
	NSMutableSet* _begunSessionIDs;
	NSMutableSet* _allowanceRequestors;
	CADisplay* _observedDisplay;

}

@property (nonatomic,retain) NSXPCConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSXPCConnection * legacyConnection;                //@synthesize legacyConnection=_legacyConnection - In the implementation block
@property (nonatomic,retain) NSXPCConnection * sharingConnection;               //@synthesize sharingConnection=_sharingConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeSessions;              //@synthesize activeSessions=_activeSessions - In the implementation block
@property (nonatomic,retain) NSMutableSet * begunSessionIDs;                    //@synthesize begunSessionIDs=_begunSessionIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * allowanceRequestors;                //@synthesize allowanceRequestors=_allowanceRequestors - In the implementation block
@property (nonatomic,retain) CADisplay * observedDisplay;                       //@synthesize observedDisplay=_observedDisplay - In the implementation block
@property (assign,nonatomic) BOOL observedDisplayAllowsEditing;                 //@synthesize observedDisplayAllowsEditing=_observedDisplayAllowsEditing - In the implementation block
@property (assign,nonatomic) BOOL applicationIsActive;                          //@synthesize applicationIsActive=_applicationIsActive - In the implementation block
@property (assign,nonatomic) BOOL viewServiceHostIsActive;                      //@synthesize viewServiceHostIsActive=_viewServiceHostIsActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_service;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(NSMutableDictionary *)activeSessions;
-(NSXPCConnection *)sharingConnection;
-(BOOL)_remoteTextEditingIsAllowed;
-(NSMutableSet *)begunSessionIDs;
-(void)_beginAllActiveSessions;
-(void)_endAllActiveSessions;
-(void)_updateTextForSessionWithID:(id)arg1 ;
-(void)_updateAttributesForSessionWithID:(id)arg1 ;
-(void)setActiveSessions:(NSMutableDictionary *)arg1 ;
-(void)setBegunSessionIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)allowanceRequestors;
-(void)setAllowanceRequestors:(NSMutableSet *)arg1 ;
-(BOOL)_isRunningInViewService;
-(void)beginAllowingRemoteTextEditing:(id)arg1 ;
-(void)endAllowingRemoteTextEditing:(id)arg1 ;
-(void)beginRemoteTextEditingSessionWithID:(id)arg1 attributes:(id)arg2 initialText:(id)arg3 ;
-(void)remoteTextEditingSessionWithID:(id)arg1 textDidChange:(id)arg2 ;
-(void)endRemoteTextEditingSessionWithID:(id)arg1 ;
-(void)remoteTextEditingSessionWithID:(id)arg1 attributesDidChange:(id)arg2 ;
-(void)_viewServiceHostDidBecomeActive:(id)arg1 ;
-(void)_viewServiceHostWillResignActive:(id)arg1 ;
-(void)_evaluateDisplayMode:(id)arg1 ;
-(void)_modifyTextEditingAllowedForReason:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_applicationStateIsValidForServiceProxy;
-(id)_legacyService;
-(id)_sharingService;
-(void)_beginSessionWithID:(id)arg1 ;
-(void)_endSessionWithID:(id)arg1 ;
-(void)setApplicationIsActive:(BOOL)arg1 ;
-(void)setViewServiceHostIsActive:(BOOL)arg1 ;
-(void)setObservedDisplayAllowsEditing:(BOOL)arg1 ;
-(BOOL)_shouldCreateServiceProxies;
-(NSXPCConnection *)legacyConnection;
-(void)setLegacyConnection:(NSXPCConnection *)arg1 ;
-(void)setSharingConnection:(NSXPCConnection *)arg1 ;
-(CADisplay *)observedDisplay;
-(void)setObservedDisplay:(CADisplay *)arg1 ;
-(BOOL)observedDisplayAllowsEditing;
-(BOOL)applicationIsActive;
-(BOOL)viewServiceHostIsActive;
@end

