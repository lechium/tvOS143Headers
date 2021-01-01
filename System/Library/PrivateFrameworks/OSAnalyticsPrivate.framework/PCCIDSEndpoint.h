/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OSAnalyticsPrivate/PCCEndpoint.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSMutableDictionary, NSString;

@interface PCCIDSEndpoint : PCCEndpoint <IDSServiceDelegate> {

	IDSService* _pairedWatchService;
	IDSService* _homeDeviceService;
	NSMutableDictionary* _serviceByDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
-(void)runWithDelegate:(id)arg1 ;
-(BOOL)isDeviceNearby:(id)arg1 ;
-(id)send:(id)arg1 message:(id)arg2 error:(id*)arg3 ;
-(id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(id)deviceIds;
-(id)startService:(id)arg1 ;
-(id)serviceByDeviceID:(id)arg1 ;
@end

