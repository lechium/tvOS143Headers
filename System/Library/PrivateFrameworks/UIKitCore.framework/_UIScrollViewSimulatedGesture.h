/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UIScrollViewSimulatedGesture : NSObject {

	double _simulationDuration;
	double _beginTime;
	/*^block*/id _beginBlock;
	/*^block*/id _updateBlock;
	/*^block*/id _endBlock;

}
-(id)initWithDuration:(double)arg1 begin:(/*^block*/id)arg2 update:(/*^block*/id)arg3 end:(/*^block*/id)arg4 ;
-(BOOL)updateSimulation;
@end

