/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@protocol CPLEngineTransportTask;
@class CPLResource;

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask {

	BOOL _backgroundTask;
	CPLResource* _cloudResource;
	id<CPLEngineTransportTask> _transportTask;

}

@property (nonatomic,retain) CPLResource * cloudResource;                              //@synthesize cloudResource=_cloudResource - In the implementation block
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask;              //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) id<CPLEngineTransportTask> transportTask;                 //@synthesize transportTask=_transportTask - In the implementation block
-(CPLResource *)cloudResource;
-(void)setCloudResource:(CPLResource *)arg1 ;
-(id<CPLEngineTransportTask>)transportTask;
-(void)setTransportTask:(id<CPLEngineTransportTask>)arg1 ;
-(BOOL)isBackgroundTask;
-(void)setBackgroundTask:(BOOL)arg1 ;
@end

