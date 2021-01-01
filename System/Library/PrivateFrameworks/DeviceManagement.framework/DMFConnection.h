/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CATTaskClientDelegate.h>
#import <libobjc.A.dylib/DMFTransportProvider.h>

@protocol DMFTransportProvider;
@class CATTaskClient, CATOperationQueue, NSString;

@interface DMFConnection : NSObject <CATTaskClientDelegate, DMFTransportProvider> {

	BOOL _isSystemConnection;
	id<DMFTransportProvider> _transportProvider;
	CATTaskClient* _taskClient;
	CATOperationQueue* _operationQueue;
	unsigned long long _connectionState;

}

@property (nonatomic,__weak,readonly) id<DMFTransportProvider> transportProvider;              //@synthesize transportProvider=_transportProvider - In the implementation block
@property (nonatomic,readonly) CATTaskClient * taskClient;                                     //@synthesize taskClient=_taskClient - In the implementation block
@property (nonatomic,readonly) CATOperationQueue * operationQueue;                             //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) unsigned long long connectionState;                               //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) BOOL isSystemConnection;                                          //@synthesize isSystemConnection=_isSystemConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
+(id)systemConnection;
+(id)connectionForUID:(unsigned)arg1 ;
+(id)currentUserConnection;
+(id)connectionForAppleID:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(CATOperationQueue *)operationQueue;
-(void)performRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)connectionState;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(id)initWithUserInfo:(id)arg1 ;
-(void)clientDidConnect:(id)arg1 ;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)clientDidInvalidate:(id)arg1 ;
-(id)prepareOperationForRequest:(id)arg1 ;
-(void)setIsSystemConnection:(BOOL)arg1 ;
-(id)initWithTransportProvider:(id)arg1 userInfo:(id)arg2 ;
-(void)_reconnectTaskClient;
-(CATTaskClient *)taskClient;
-(void)_operationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<DMFTransportProvider>)transportProvider;
-(id)makeNewTransport;
-(id)batchOperationToPerformOperations:(id)arg1 ;
-(BOOL)isSystemConnection;
@end

