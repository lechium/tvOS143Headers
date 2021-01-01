/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol HAPBTLEControlOutputStreamDelegate, OS_dispatch_queue;
@class HAPBTLETransactionIdentifier, NSData, NSObject, NSOperationQueue;

@interface HAPBTLEControlOutputStream : HMFObject {

	unsigned char _type;
	BOOL _complete;
	BOOL _open;
	id<HAPBTLEControlOutputStreamDelegate> _delegate;
	HAPBTLETransactionIdentifier* _transactionIdentifier;
	NSData* _payload;
	unsigned long long _mtuLength;
	double _timeoutInterval;
	NSObject*<OS_dispatch_queue> _clientQueue;
	unsigned long long _controlPayloadWrittenLength;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,copy) id completionHandler; 
@property (assign,getter=isComplete,nonatomic) BOOL complete;                                     //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                                             //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) unsigned long long controlPayloadWrittenLength;                      //@synthesize controlPayloadWrittenLength=_controlPayloadWrittenLength - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (__weak) id<HAPBTLEControlOutputStreamDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned char type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HAPBTLETransactionIdentifier * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * payload;                                             //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned long long mtuLength;                                      //@synthesize mtuLength=_mtuLength - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                            //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
+(id)shortDescription;
-(id)debugDescription;
-(id)description;
-(id)init;
-(BOOL)open;
-(void)close;
-(id<HAPBTLEControlOutputStreamDelegate>)delegate;
-(void)setDelegate:(id<HAPBTLEControlOutputStreamDelegate>)arg1 ;
-(unsigned char)type;
-(double)timeoutInterval;
-(NSOperationQueue *)operationQueue;
-(BOOL)isOpen;
-(BOOL)isComplete;
-(NSData *)payload;
-(void)_complete;
-(id)shortDescription;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(unsigned long long)mtuLength;
-(void)setOpen:(BOOL)arg1 ;
-(HAPBTLETransactionIdentifier *)transactionIdentifier;
-(void)setComplete:(BOOL)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)_closeWithError:(id)arg1 ;
-(id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 controlPayload:(id)arg3 mtuLength:(unsigned long long)arg4 timeoutInterval:(double)arg5 ;
-(unsigned long long)remainingControlPayloadLength;
-(unsigned long long)controlPayloadWrittenLength;
-(void)sendNextPayloadFragment;
-(void)_sendNextPayloadFragmentWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_nextPacketWithMaximumLength:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setControlPayloadWrittenLength:(unsigned long long)arg1 ;
@end

