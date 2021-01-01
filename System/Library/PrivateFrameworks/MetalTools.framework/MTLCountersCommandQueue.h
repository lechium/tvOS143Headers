/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MTLToolsCommandQueue.h>

@class NSString;

@interface MTLCountersCommandQueue : MTLToolsCommandQueue {

	NSString* _tracePath;

}

@property (nonatomic,readonly) NSString * tracePath;              //@synthesize tracePath=_tracePath - In the implementation block
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(id)commandBufferWithDescriptor:(id)arg1 ;
-(NSString *)tracePath;
-(id)initWithCommandQueue:(id)arg1 device:(id)arg2 ;
@end
