/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CLSTimeLocationTuple;
#import <PhotosGraph/PhotosGraph-Structs.h>
@class PGGraphMomentNode, NSDateInterval, PGMeaningfulEventMatchingCriteria;

@interface PGPublicEventMatchingOptions : NSObject {

	id<CLSTimeLocationTuple> _timeLocationTuple;
	PGGraphMomentNode* _momentNode;
	NSDateInterval* _actualAttendanceDateInterval;
	NSDateInterval* _expandedAttendanceDateInterval;
	PGMeaningfulEventMatchingCriteria* _matchingCriteria;
	CLLocationCoordinate2D _coordinates;

}

@property (nonatomic,readonly) id<CLSTimeLocationTuple> timeLocationTuple;                        //@synthesize timeLocationTuple=_timeLocationTuple - In the implementation block
@property (nonatomic,readonly) PGGraphMomentNode * momentNode;                                    //@synthesize momentNode=_momentNode - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinates;                                //@synthesize coordinates=_coordinates - In the implementation block
@property (nonatomic,readonly) NSDateInterval * actualAttendanceDateInterval;                     //@synthesize actualAttendanceDateInterval=_actualAttendanceDateInterval - In the implementation block
@property (nonatomic,readonly) NSDateInterval * expandedAttendanceDateInterval;                   //@synthesize expandedAttendanceDateInterval=_expandedAttendanceDateInterval - In the implementation block
@property (nonatomic,readonly) PGMeaningfulEventMatchingCriteria * matchingCriteria;              //@synthesize matchingCriteria=_matchingCriteria - In the implementation block
-(CLLocationCoordinate2D)coordinates;
-(PGGraphMomentNode *)momentNode;
-(id)initWithTimeLocationTuple:(id)arg1 momentNode:(id)arg2 ;
-(NSDateInterval *)actualAttendanceDateInterval;
-(NSDateInterval *)expandedAttendanceDateInterval;
-(PGMeaningfulEventMatchingCriteria *)matchingCriteria;
-(void)_createAttendanceDateIntervals;
-(id<CLSTimeLocationTuple>)timeLocationTuple;
@end

