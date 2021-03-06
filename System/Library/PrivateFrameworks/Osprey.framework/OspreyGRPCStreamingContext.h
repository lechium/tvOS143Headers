/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Osprey/OspreyClientStreamingContext.h>

@protocol OS_dispatch_queue;
@class NSObject, OspreyMessageReader, OspreyMessageWriter, NSInputStream, OspreyBufferedOutputStream, NSString;

@interface OspreyGRPCStreamingContext : NSObject <OspreyClientStreamingContext> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;
	OspreyMessageReader* _messageReader;
	OspreyMessageWriter* _messageWriter;
	NSInputStream* _inputStream;
	OspreyBufferedOutputStream* _outputStream;
	BOOL _closed;
	BOOL _compressionEnabled;

}

@property (assign,getter=isCompressionEnabled,nonatomic) BOOL compressionEnabled;              //@synthesize compressionEnabled=_compressionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completeWithError:(id)arg1 ;
-(void)finishWriting;
-(void)_writeFrame:(id)arg1 compressed:(BOOL)arg2 error:(id*)arg3 ;
-(void)writeFrame:(id)arg1 ;
-(void)writeFrame:(id)arg1 compressed:(BOOL)arg2 ;
-(id)initWithQueue:(id)arg1 responseHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)bindToUrlRequest:(id)arg1 ;
-(void)handleResponseData:(id)arg1 ;
-(BOOL)isCompressionEnabled;
-(void)setCompressionEnabled:(BOOL)arg1 ;
@end

