/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXNumberFilter.h>

@interface PXVelocityNumberFilter : PXNumberFilter {

	double _minimumSampleInterval;
	double _previousVelocityWeight;
	double _lastValue;
	double _lastTime;
	double _velocity;
	double _previousVelocity;
	double _filteredVelocity;

}
+(id)gestureVelocityFilter;
-(id)initWithInput:(double)arg1 ;
-(double)updatedOutput;
@end

