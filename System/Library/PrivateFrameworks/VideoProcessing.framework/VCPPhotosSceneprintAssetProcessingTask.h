/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSArray;

@interface VCPPhotosSceneprintAssetProcessingTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSArray* _assets;
	atomic<bool> _started;
	atomic<bool> _cancel;

}
+(unsigned long long)_panoVNRequestMethod;
+(id)taskWithAssets:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(int)run;
-(void)cancel;
-(BOOL)run:(id*)arg1 ;
-(float)resourceRequirement;
-(id)initWithAssets:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
@end

