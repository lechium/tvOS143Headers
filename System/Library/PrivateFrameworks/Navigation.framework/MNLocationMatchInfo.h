/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Navigation/Navigation-Structs.h>
@class NSData;

@interface MNLocationMatchInfo : NSObject {

	long long _matchQuality;
	CLLocationCoordinate2D _matchCoordinate;
	double _matchCourse;
	int _matchFormOfWay;
	int _matchRoadClass;
	BOOL _matchShifted;
	NSData* _matchDataArray;

}

@property (nonatomic,readonly) long long matchQuality;                              //@synthesize matchQuality=_matchQuality - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D matchCoordinate;              //@synthesize matchCoordinate=_matchCoordinate - In the implementation block
@property (nonatomic,readonly) double matchCourse;                                  //@synthesize matchCourse=_matchCourse - In the implementation block
@property (nonatomic,readonly) int matchFormOfWay;                                  //@synthesize matchFormOfWay=_matchFormOfWay - In the implementation block
@property (nonatomic,readonly) int matchRoadClass;                                  //@synthesize matchRoadClass=_matchRoadClass - In the implementation block
@property (nonatomic,readonly) BOOL matchShifted;                                   //@synthesize matchShifted=_matchShifted - In the implementation block
@property (nonatomic,readonly) NSData * matchDataArray;                             //@synthesize matchDataArray=_matchDataArray - In the implementation block
-(long long)matchQuality;
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 matchDataArray:(id)arg7 ;
-(CLLocationCoordinate2D)matchCoordinate;
-(double)matchCourse;
-(int)matchFormOfWay;
-(int)matchRoadClass;
-(NSData *)matchDataArray;
-(BOOL)matchShifted;
@end
