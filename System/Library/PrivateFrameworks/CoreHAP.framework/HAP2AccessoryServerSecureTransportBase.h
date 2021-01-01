/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2AccessoryServerTransportBase.h>
#import <libobjc.A.dylib/HAP2AccessoryServerTransportDelegate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerSecureTransport.h>

@protocol HAP2AccessoryServerSecureTransportDelegate, HAPEncryptedSession, HAP2AccessoryServerTransport;
@class NSString;

@interface HAP2AccessoryServerSecureTransportBase : HAP2AccessoryServerTransportBase <HAP2AccessoryServerTransportDelegate, HAP2AccessoryServerSecureTransport> {

	id<HAP2AccessoryServerSecureTransportDelegate> _delegate;
	id<HAPEncryptedSession> _encryptedSession;
	id<HAP2AccessoryServerTransport> _transport;

}

@property (nonatomic,retain) id<HAPEncryptedSession> encryptedSession;                                    //@synthesize encryptedSession=_encryptedSession - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerTransport> transport;                                //@synthesize transport=_transport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerSecureTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) double maxRequestTimeout; 
@property (nonatomic,readonly) id<HAP2AccessoryServerTransportCommon> underlyingTransport; 
+(id)defaultEncryptedSession;
-(id<HAP2AccessoryServerSecureTransportDelegate>)delegate;
-(void)setDelegate:(id<HAP2AccessoryServerSecureTransportDelegate>)arg1 ;
-(id<HAP2AccessoryServerTransport>)transport;
-(id)encryptData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)protocolFeaturesForVersion:(id)arg1 ;
-(id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 transport:(id)arg3 ;
-(void)setEncryptedSession:(id<HAPEncryptedSession>)arg1 ;
-(id)wellKnownEndpoint:(unsigned long long)arg1 ;
-(id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1 ;
-(void)transport:(id)arg1 didChangeState:(unsigned long long)arg2 error:(id)arg3 ;
-(void)transport:(id)arg1 didReceiveEvent:(id)arg2 ;
-(void)doOpenWithCompletion:(/*^block*/id)arg1 ;
-(void)doCloseWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doUpdateMaxRequestTimeout:(double)arg1 ;
-(void)didChangeStateWithError:(id)arg1 ;
-(void)doSendRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)endpointForCharacteristic:(id)arg1 ;
-(id)endpointForCharacteristics:(id)arg1 ;
-(id)mimeTypeForCharacteristicRequests;
-(BOOL)mergeWithNewTransport:(id)arg1 ;
-(id<HAP2AccessoryServerTransportCommon>)underlyingTransport;
-(id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 transport:(id)arg3 encryptedSession:(id)arg4 ;
-(void)_encryptRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<HAPEncryptedSession>)encryptedSession;
-(id)decryptData:(id)arg1 type:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_sendRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_decryptResponse:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

