/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPHomeKitAnalysisSessionClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface VCPHomeKitAnalysisSession : NSObject <VCPHomeKitAnalysisSessionClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _managementQueue;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	CF<const opaqueCMFormatDescription *>* _formatDescription;
	/*^block*/id _resultsHandler;

}
+(id)sessionWithProperties:(id)arg1 andResultsHandler:(/*^block*/id)arg2 ;
-(void)invalidate;
-(id)connection;
-(id)initWithProperties:(id)arg1 andResultsHandler:(/*^block*/id)arg2 ;
-(void)processResults:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)processVideoFragmentAssetData:(id)arg1 withOptions:(id)arg2 andErrorHandler:(/*^block*/id)arg3 ;
-(void)processVideoFragmentAssetData:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(void)processMessageWithOptions:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
@end

