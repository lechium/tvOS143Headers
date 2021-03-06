/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, TVRMSPairingServerDelegate;
#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSObject, NSString;

@interface TVRMSPairingServer : NSObject {

	CFDictionaryRef _HTTPServerConnections;
	CFHTTPServerRef _HTTPServer;
	NSObject*<OS_dispatch_queue> _HTTPServerQueue;
	NSString* _expectedPasscodeHash;
	NSString* _successfulPairingGUID;
	NSString* _successfulPairingServiceName;
	NSString* _advertisedDeviceName;
	NSString* _advertisedDeviceModel;
	unsigned short _port;
	id<TVRMSPairingServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRMSPairingServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                       //@synthesize port=_port - In the implementation block
-(id<TVRMSPairingServerDelegate>)delegate;
-(void)setDelegate:(id<TVRMSPairingServerDelegate>)arg1 ;
-(unsigned short)port;
-(void)stopServer;
-(id)_parsedQueryParametersWithQueryString:(id)arg1 ;
-(BOOL)startServerWithExpectedPasscodeHash:(id)arg1 advertisedDeviceName:(id)arg2 advertisedDeviceModel:(id)arg3 ;
-(void)handleHTTPServerInvalidated;
-(void)handleHTTPServerDidReceiveError:(CFErrorRef)arg1 ;
-(void)handleHTTPServerDidOpenConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)handleHTTPServerDidCloseConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)handleHTTPServerConnectionInvalidated;
-(void)handleHTTPServerConnectionDidReceiveError:(CFErrorRef)arg1 ;
-(void)handleHTTPServerConnectionDidReceiveRequest:(CFHTTPServerRequestRef)arg1 ;
-(void)handleHTTPServerConnectionDidReplyToRequest:(CFHTTPServerRequestRef)arg1 withResponse:(CFHTTPServerResponseRef)arg2 ;
-(void)handleHTTPServerConnectionDidFailToReplyToRequest:(CFHTTPServerRequestRef)arg1 withResponse:(CFHTTPServerResponseRef)arg2 ;
@end

