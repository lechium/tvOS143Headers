/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCIPCEndpointClient.h>
#import <libobjc.A.dylib/GCDeviceLightComponent.h>
#import <libobjc.A.dylib/GCLightXPCProxyRemoteClientEndpointInterface.h>

@protocol GCLightXPCProxyRemoteServerEndpointInterface, NSObjectNSCopyingNSSecureCoding;
@class GCDeviceLight, GCController, NSString;

@interface GCLightXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCDeviceLightComponent, GCLightXPCProxyRemoteClientEndpointInterface> {

	GCController* _controller;
	id<GCLightXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCDeviceLight* _light;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GCDeviceLight * light;                                 //@synthesize light=_light - In the implementation block
-(id)init;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setController:(id)arg1 ;
-(void)invalidateConnection;
-(GCDeviceLight *)light;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)setRemoteEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)observeChangesForLight:(id)arg1 ;
-(void)refreshLight;
-(void)newLight:(id)arg1 ;
-(void)stopObservingChangesForLight:(id)arg1 ;
-(void)_remoteEndpointHasSetLight:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialLight:(id)arg2 ;
@end
