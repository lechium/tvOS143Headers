/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GKNoiseModifier.h>

@interface GKBlendNoiseModifier : GKNoiseModifier {

	double _lowerBound;
	double _upperBound;
	double _blendDistance;

}
-(id)init;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithSelectionRangeLowerBound:(double)arg1 selectionRangeUpperBound:(double)arg2 selectionBoundaryBlendDistance:(double)arg3 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end
