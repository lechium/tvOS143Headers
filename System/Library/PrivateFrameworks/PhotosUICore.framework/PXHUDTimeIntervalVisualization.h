/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXHUDVisualization.h>

@class PXTimeInterval;

@interface PXHUDTimeIntervalVisualization : PXHUDVisualization {

	id _stateTransitionHandlerToken;
	PXTimeInterval* _timeInterval;

}

@property (nonatomic,retain) PXTimeInterval * timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
+(id)visualizationWithTimeInterval:(id)arg1 ;
-(PXTimeInterval *)timeInterval;
-(void)setTimeInterval:(PXTimeInterval *)arg1 ;
@end

