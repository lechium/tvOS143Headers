/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PKDurationSnapshot : NSObject {

	 snapshotTime;
	 rate;
	 elapsedDuration;
	 duration;

}

@property (readonly,nonatomic) double snapshotTime; 
@property (readonly,nonatomic) float rate; 
@property (readonly,nonatomic) double elapsedDuration; 
@property (readonly,nonatomic) double duration; 
-(id)init;
-(double)duration;
-(float)rate;
-(double)snapshotTime;
-(double)elapsedDuration;
-(id)initWithSnapshotTime:(double)arg1 rate:(float)arg2 elapsedDuration:(double)arg3 duration:(double)arg4 ;
@end

