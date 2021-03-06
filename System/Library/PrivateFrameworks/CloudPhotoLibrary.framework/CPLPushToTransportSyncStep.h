/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLSimpleTaskSyncStep.h>

@interface CPLPushToTransportSyncStep : CPLSimpleTaskSyncStep {

	BOOL _highPriority;

}

@property (nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
-(BOOL)highPriority;
-(void)cancelAllTasks:(BOOL)arg1 ;
-(id)newTask;
-(id)initWithSyncManager:(id)arg1 syncSession:(id)arg2 highPriority:(BOOL)arg3 ;
@end

