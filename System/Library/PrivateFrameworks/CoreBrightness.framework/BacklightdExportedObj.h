/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BacklightdXPCProtocol.h>

@class BrightnessSystemInternal, NSXPCConnection, NSString;

@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol> {

	unsigned long long _clientID;
	BOOL _clientIDSet;
	BrightnessSystemInternal* _server;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic) BrightnessSystemInternal * server;              //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BrightnessSystemInternal *)server;
-(void)setServer:(BrightnessSystemInternal *)arg1 ;
-(void)reconnect;
-(void)clientSetPropertyWithKey:(id)arg1 property:(id)arg2 ;
-(void)clientCopyPropertyWithKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)registerNotificationForProperties:(id)arg1 ;
-(id)copyClientID;
@end

