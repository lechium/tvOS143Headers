/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GKNoiseModifier.h>

@interface GKTerraceNoiseModifier : GKNoiseModifier {

	double* _controlPoints;
	int _count;
	BOOL _inverted;

}
-(id)init;
-(void)dealloc;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithPeakInputValues:(id)arg1 terracesInverted:(BOOL)arg2 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end
