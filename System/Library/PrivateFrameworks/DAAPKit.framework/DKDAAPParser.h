/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DAAPKit.framework/DAAPKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DKDAAPParserDelegate;
@class NSInputStream, NSMutableArray;

@interface DKDAAPParser : NSObject {

	BOOL _canceled;
	id<DKDAAPParserDelegate> _delegate;
	long long _state;
	NSInputStream* _inputStream;
	NSMutableArray* _containerStack;

}

@property (nonatomic,readonly) NSInputStream * inputStream;                         //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSMutableArray * containerStack;                     //@synthesize containerStack=_containerStack - In the implementation block
@property (assign,getter=isCanceled,nonatomic) BOOL canceled;                       //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic,__weak) id<DKDAAPParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state;                                     //@synthesize state=_state - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id<DKDAAPParserDelegate>)delegate;
-(void)setDelegate:(id<DKDAAPParserDelegate>)arg1 ;
-(void)cancel;
-(long long)state;
-(id)initWithStream:(id)arg1 ;
-(void)parse;
-(NSInputStream *)inputStream;
-(BOOL)isCanceled;
-(void)setCanceled:(BOOL)arg1 ;
-(NSMutableArray *)containerStack;
-(void)_callDelegateDidStart;
-(void)_callDelegateDidCancel;
-(void)_callDelegateDidFailWithError:(id)arg1 ;
-(void)_verifyExpectedEOF;
-(BOOL)_callDelegateShouldParseCode:(unsigned)arg1 ;
-(BOOL)_callDelegateShouldParseCodeAsContainer:(unsigned)arg1 ;
-(void)_callDelegateDidStartContainerCode:(unsigned)arg1 contentLength:(unsigned)arg2 ;
-(void)_callDelegateDidParseDataCode:(unsigned)arg1 bytes:(char*)arg2 contentLength:(unsigned)arg3 ;
-(void)_callDelegateDidEndContainerCode:(unsigned)arg1 ;
-(void)_callDelegateDidFinish;
@end

