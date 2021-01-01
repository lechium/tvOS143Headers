/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol NSXMLParserDelegate;
@class NSThread, NSInputStream, NSOutputStream, NSMutableData, NSURL, NSURLConnection, NSString;

@interface IMXMLStreamOperation : NSOperation <NSStreamDelegate, NSURLConnectionDelegate> {

	BOOL _isExecuting;
	BOOL _isFinished;
	BOOL _isCancelled;
	NSThread* _runloopThread;
	NSInputStream* _readStream;
	NSOutputStream* _writeStream;
	NSMutableData* _dataBuffer;
	BOOL _finishedDownloadingData;
	NSURL* _url;
	NSURLConnection* _urlConnection;
	id<NSXMLParserDelegate> _delegate;

}

@property (assign,nonatomic) id<NSXMLParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationWithURL:(id)arg1 parseDelegate:(id)arg2 ;
-(void)dealloc;
-(id<NSXMLParserDelegate>)delegate;
-(void)setDelegate:(id<NSXMLParserDelegate>)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(id)initWithURL:(id)arg1 parseDelegate:(id)arg2 ;
-(void)_startRunLoop;
-(void)writeToStream;
@end

