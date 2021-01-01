/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCIPCEndpointClient.h>
#import <libobjc.A.dylib/GCControllerSettingsComponent.h>
#import <libobjc.A.dylib/GCSettingsXPCProxyRemoteClientEndpointInterface.h>

@protocol GCSettingsXPCProxyRemoteServerEndpointInterface, NSObjectNSCopyingNSSecureCoding;
@class GCControllerSettings, GCController, NSString;

@interface GCSettingsXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerSettingsComponent, GCSettingsXPCProxyRemoteClientEndpointInterface> {

	GCController* _controller;
	id<GCSettingsXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCControllerSettings* _settingsDefault;
	GCControllerSettings* _settingsForBundleID;
	/*^block*/id _changedHandler;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id changedHandler;                                           //@synthesize changedHandler=_changedHandler - In the implementation block
@property (nonatomic,readonly) GCControllerSettings * settingsForBundleID;              //@synthesize settingsForBundleID=_settingsForBundleID - In the implementation block
@property (nonatomic,readonly) GCControllerSettings * settingsDefault;                  //@synthesize settingsDefault=_settingsDefault - In the implementation block
-(id)init;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setController:(id)arg1 ;
-(void)invalidateConnection;
-(id)changedHandler;
-(void)setChangedHandler:(id)arg1 ;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)setRemoteEndpoint:(id)arg1 connection:(id)arg2 ;
-(GCControllerSettings *)settingsForBundleID;
-(GCControllerSettings *)settingsDefault;
-(id)initWithIdentifier:(id)arg1 initialValueForBundleID:(id)arg2 defaultSettings:(id)arg3 ;
-(void)refreshSettings;
-(void)_remoteEndpointHasSetSettingsForBundleID:(id)arg1 defaultSettings:(id)arg2 ;
-(void)newSettingsForBundleID:(id)arg1 defaultSettings:(id)arg2 ;
-(void)observeChangesForSettings:(id)arg1 ;
-(void)stopObservingChangesForSettings:(id)arg1 ;
@end

