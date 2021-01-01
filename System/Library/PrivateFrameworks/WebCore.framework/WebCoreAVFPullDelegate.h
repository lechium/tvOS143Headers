/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>

@class NSString;

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate> {

	BinarySemaphore m_semaphore;

}

@property (nonatomic,readonly) BinarySemaphore* semaphore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BinarySemaphore*)semaphore;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)outputMediaDataWillChange:(id)arg1 ;
@end

